#include "mattfuncs.h"

#include <iostream>
#include <string>
using namespace std;


		Array1D::Array1D(int Arraycap){
			capacity = Arraycap ;
			size = 0;
			array = new int[capacity];
		}
		

		int Array1D::GetSize(){
			return size;
		}
		
		bool Array1D::isEmpty() const{
			if(size == 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		bool Array1D::isFull() const{
			if(size == capacity){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		void Array1D::InsertItem(int pos,int val){
			if(isFull()){
				cout<<"Array is Full!"<<endl;
				return;	
			}
			
			
   		 for (int i = size; i > pos; i--) {
  		      array[i] = array[i - 1];
  			}
			
			array[pos] = val;
			size++;
		}
		
		void Array1D::RemoveItem(int pos){
			for(int i = 0; i < capacity; i++){
				if (capacity == pos){
					array[i] = NULL;
				}
			}
			for(int i = pos; i < capacity - 1; i++){
				array[i] = array[i + 1];
			}
			array[capacity] = NULL;
			size--;
		}
		void Array1D::AddItem(int val){
			if(isFull()){
				cout<<endl<<"Array is Full!"<<endl;
				return;
			}
			else{
				int x = size;
				array[size] = val;
			}
			size++;
		}
		void Array1D::DisplayElements(){
			cout<<endl;
			for(int i = 0; i < size; i++){
				cout<<array[i]<<"  ";
			}
			cout<<endl;
		}
		
		
		void whomadethis(){
			cout<<endl<<endl<<"-- MADE BY MATTHEW SANTOS and TOLENTINO! --"<<endl<<endl<<endl<<endl;
		}
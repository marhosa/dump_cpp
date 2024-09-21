#include <iostream>
#include <string>
#include "bingchiling.h"
using namespace std;


	void bingchiling::addsatella(int a){
		satella* temp = new satella;
		temp->data = a;
		temp->next = NULL;
		
		
		if(head == NULL){
			head = temp;
			return;
		}
		
		satella* temp2 = head;
		
		while(temp2 -> next != NULL){
			temp2 = temp2->next;
		}
		
		temp2->next = temp;

}
		
		
		
	void bingchiling::displaytella(){
		
		satella* temp = head;
		
		while(temp != NULL){
			cout<<temp->data<<endl;
			temp = temp->next;
		}
	}
	

	
	
	
	
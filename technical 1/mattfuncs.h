#ifndef MATTFUNCS_H
#define MATTFUNCS_H

#include "mattfuncs.h"
#include <iostream>
#include <string>
using namespace std;

class Array1D
{
	private:
		
		int capacity;
		int size;
		int *array;
		
		public:
		Array1D(int Arraycap=10);
		~Array1D(){ delete [] array;}

		
		int GetSize();
		bool isEmpty() const;
		bool isFull() const;
		void InsertItem(int pos,int val);
		void RemoveItem(int pos);
		void AddItem(int val);
		void DisplayElements();
};

void whomadethis();

#endif
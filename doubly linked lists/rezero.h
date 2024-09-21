#ifndef REZERO_H
#define REZERO_H

#include <iostream>
#include <string>
using namespace std;


void spacerr(int a);


class satella{
	public:
		
		string name;
		satella* next;
		satella* prev;
		
		

};


extern satella* head;

//makes new pointer 
void makenew(string w);

//if char is n, next, else, prev
satella* printonce(satella *a, char direct);



#endif
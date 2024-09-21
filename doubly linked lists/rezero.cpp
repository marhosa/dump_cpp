#include <iostream>
#include <string>
using namespace std;
#include "rezero.h"

satella* head = NULL;

void spacerr(int a){
	for (int i = 0; i < a; i++){
		cout<<endl;
	}
}

//makes new head
void makenew(string w){
	satella* temp = new satella;
	temp->name = w;
	
	if(head == NULL){
		head = temp;
		temp->prev = NULL;
		temp->next = NULL;
		return;
	}
	
	satella* temp2;
	temp2 = head;
	
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}
	
	temp2->next = temp;
	temp->next = NULL;
	temp->prev = temp2;

}	

//if char is n, next, if p, prev,
satella* printonce(satella *a, char direct){
		if(direct == 'd'){
			a = a->next;
			cout<<a->name<<endl;
			return a;
		}
		else if(direct == 'a'){
			a = a->prev;
			cout<<a->name<<endl;
			return a;
		}
}





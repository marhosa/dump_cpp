#include "playerstats.h"
#include <string>
#include <iostream>
using namespace std;

playerstats::playerstats()
{
}

playerstats::~playerstats()
{
}

void playerstats::setname(string a){
	ign = a;
}



void playerstats::newplayer(string a){
	playerstats* temp1 = new playerstats;
	playerstats* temp2;
	temp1 -> ign = a;
	temp1->next = NULL;
	
	if(head == NULL){
		head = temp1;
	}
	else{
		temp2 = head;
		while(temp2->next != NULL){
			temp2 = temp2->next;
		}
		temp2->next = temp1;
	}
	
}

void playerstats::printplayer(){
	playerstats* temp = head;
	int i = 0;
	
	while (true){
		cout<<1 + i++<<": ";
		cout<<temp->ign<<endl;
		temp = temp->next;
		if(temp == NULL){
			return;
		}
	}
	
}
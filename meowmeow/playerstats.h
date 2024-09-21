#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

#include <string>
#include <iostream>
using namespace std;

class playerstats{
	

	protected:
		
		string ign;
		float hp = 0;
		float atk = 0;
		
		playerstats* next;	
		
	public:
		playerstats();
		~playerstats();
		
		void setname(string a);
		void addhp(float a);
		void addatk(float a);
		void adddmg(float a);
		
		float gethp();
		float getatk();
		float getdmg();	
		
		void newplayer(string a);
		void printplayer();
		void deleteplayer();
		
		

};

static playerstats* head = NULL;

#endif
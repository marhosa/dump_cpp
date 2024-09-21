#include <iostream>
#include "playerstats.h"

using namespace std;

int main() {
	string temppy;
	
	playerstats subaru;
	
	for(int i = 0; i < 6; i++){
		cout<<"Enter"<<i+1<<": ";
		cin>>temppy;
		subaru.newplayer(temppy);
	}
	
	cout<<endl<<endl<<endl<<"The Names of all players: "<<endl<<endl;

	subaru.printplayer();	

}


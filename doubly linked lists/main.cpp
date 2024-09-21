#include <iostream>
#include <string>
using namespace std;
#include "rezero.h"

int main() {
	spacerr(100);
	string stemp;
	bool ccc = true;
	char ddd;
	int i = 1;
	
	cout<<"\t  This shit has no error catchers, please input only what is requested\n\tMade By Matyu \n\tInput any letter to continue: ";
	string dump; cin>>dump;
	
	while(ccc){
		spacerr(100);
		cout<<"\t"<<i<<" ][ ";
		cout<<"Enter a NAME to add to doubly link list: ";
		cin>>stemp;
		makenew(stemp);	
		i++;
		spacerr(100);
		cout<<"\t"<<"Continue Adding? [1] Continue, [0] stop: ";
		cin>>ccc;
	}
	
	satella* mtemp = head;

	spacerr(100);
	
	cout<<"\tThe First Node is: ";
	cout<<mtemp->name<<endl;
	
	while(true){
	spacerr(5);
	if(ddd == 'x'){
		return 0;
	}
	if((mtemp->next == NULL) and (mtemp->prev == NULL)){
		cout<<"\tEnter";
		do{
			
			cout<<endl<<"\t[!]This is the only node!\n\t[x] to stop process\n\t   input:  ";
			cin>>ddd;
		}while(ddd == 'd' or ddd == 'a');
	}
	else if(mtemp->next == NULL){
		cout<<"\tEnter";
		do{
			
			cout<<endl<<"\t[!]There is no next node!\n\t[a] for previous node \n\t[x] to stop process\n\t   input:  ";
			cin>>ddd;
		}while(ddd == 'd');
	}
	else if(mtemp->prev == NULL){
		cout<<"\tEnter";
		do{
			
			cout<<endl<<"\t[!]There is no previous node!\n\t[d] for next node \n\t[x] to stop process\n\t   input:  ";
			cin>>ddd;
		}while(ddd == 'a');
	}
	else{
		
		cout<<"\tEnter \n\t[a] for previous node\n\t[d] for next node \n\t[x] to stop process\n\t   input: ";
		cin>>ddd;
	}
			spacerr(100);
			cout<<"\tThe Node is: ";
			mtemp = printonce(mtemp, ddd);
	}
	
	return 0;
}








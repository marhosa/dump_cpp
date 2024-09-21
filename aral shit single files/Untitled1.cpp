#include <iostream>
#include <list>
using namespace std;


void separate(){
	cout<<endl<<endl<<endl<<"------------------------"<<endl<<endl<<endl;
}

void spacer(int a = 1){
	for(int i = 0; i < a; i++){
		cout<<endl;
	}
}



int main (){
	
	list<string> satella = {"wasd", "qwer"};
	
	for(string i : satella){
		cout<<i<<endl;
	}
	
	separate();
	
	satella.pop_back();
	
	satella.displaylist();


}
















//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
using namespace std;
//Includes-------------------------------------------



//var------------------------------------------------
int inp, stayed;
char hold;
//var------------------------------------------------



//driver code -->
int main(){
	cin>>inp;
	char paklot1[inp],paklot2[inp];
	for(int i=0; i<inp; i++){
		cin>>hold;
		paklot1[i] = hold;
	}
	
	for(int i=0; i<inp; i++){
		cin>>hold;
		paklot2[i] = hold;
	}

	for(int i=0; i<inp; i++){
		if(paklot1[i]=='C'){
			if(paklot2[i]=='C'){
				stayed++;
			}
		}
	}

	cout<<stayed;
}
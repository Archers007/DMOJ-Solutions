//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>

using namespace std;
//Includes-------------------------------------------



//var------------------------------------------------

int casses[10] {100,500,1000,5000,10000,25000,50000,100000,500000,1000000};
int t,inp,zero;

//var------------------------------------------------



//driver code -->
int main(){
	cin>>t;
	zero=10-t;
	for(int i=0; i<t; i++){
		cin>>inp;
		casses[inp-1] = 0;
	}
	cin>>inp;
	t=0;
	for(int i= 0; i<10; i++){
		t=t+casses[i];
	}
	t=t/zero;
	if(t<inp){
		cout<<"deal";
	}else{
		cout<<"no deal";
	}
}

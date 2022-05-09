//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
using namespace std;
//Includes-------------------------------------------



//var------------------------------------------------
int inp, stayed, place,len;
char hold;
//var------------------------------------------------



//driver code -->
int main(){
	cin>>inp;
	int f[inp];
	for(int i=0; i<inp; i++){
		f[i]=i+1;
	}

	cin>>inp;
	for(int i=0; i<inp; i++){
		cin>>place;
		len = sizeof(f)/sizeof(int);
		for(int i=1; i<len+1; i++){
			f[i*place] = 999888;
		}
	}
	len = sizeof(f)/sizeof(int);
	cout<<len<<endl<<endl;
	for(int i=0; i<len; i++){
		if(f[i]!=999888){
			cout<<f[i]<<endl;
		}
	}

	
}
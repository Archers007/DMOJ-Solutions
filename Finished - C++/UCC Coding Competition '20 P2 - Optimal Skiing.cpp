//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int i,z,r,low,lower=999999;
char in;
//var------------------------------------------------

int main(){
	cin>>i;
	for(int x=0; x<i; x++){
		cin>>z;
		low=0;
		for(int x=0; x<z; x++){
			cin>>r;
			low=low+r;
		}
		if(low<lower){
			lower=low;
		}
	}
	cout<<lower;
}
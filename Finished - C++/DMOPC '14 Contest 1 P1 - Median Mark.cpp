//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int x,inp;
//var------------------------------------------------

//driver code -->
int main(){
	cin>>x;
	float v[x];
	for(int i=0; i<x; i++){
		cin>>inp;
		v[i]=inp;
	}
	inp = sizeof(v)/sizeof(float);
	sort(v, v+inp);
	if(inp%2==0){
		inp=inp/2;
		float out = round((v[inp-1]+v[inp])/2);
		cout<< out;
	}else{
		inp--;
		inp=inp/2;
		cout<<v[inp];
	}
}
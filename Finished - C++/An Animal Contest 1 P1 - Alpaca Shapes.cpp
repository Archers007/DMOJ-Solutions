//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
using namespace std;
//Includes-------------------------------------------



//var------------------------------------------------
int s,r;
//var------------------------------------------------



//driver code -->
int main(){
	cin>>s>>r;
	s=s*s;
	r=(r*r)*3.14;
	if(s>r){
		cout<<"SQUARE";
	}else{
		cout<<"CIRCLE";
	}
	
}
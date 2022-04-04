//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int p1,p2,p3,at,bt;
//var------------------------------------------------
int main(){
	cin>>p1>>p2>>p3;
	at=(p1*3)+(p2*2)+p3;
	cin>>p1>>p2>>p3;
	bt=(p1*3)+(p2*2)+p3;

	if(bt>at){
		cout<<"B";
	}else if(at>bt){
		cout<<"A";
	}else{
		cout<<"T";
	}
	}
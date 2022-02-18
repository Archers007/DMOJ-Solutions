//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
int w1,w2,w3;

//var------------------------------------------------
int main(){
	cin >>w1;
	if(w1%3!=0){
		w1=w1+2;
	}
	cin >>w2;
	if(w2%3!=0){
		w2=w2+2;
	}
	cin >>w3;
	if(w3%3!=0){
		w3=w3+2;
	}
	cout <<(w1/3)+(w2/3)+(w3/3);
}
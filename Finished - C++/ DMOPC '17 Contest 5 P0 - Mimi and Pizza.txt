//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int B,P;
char Y;
//var------------------------------------------------
int main(){
	cin>>B>>P>>Y;
	if(Y=='Y'){
		if(P*5<=B){
			cout<<"B";
		}else if(P*2<=B){
			cout<<"D";
		}else{
			cout<<"NO PIZZA";
		}
	}else if(Y=='N'){
		if(P*5<=B){
			cout<<"A";
		}else if(P*2<=B){
			cout<<"C";
		}else{
			cout<<"NO PIZZA";
		}
	}
}

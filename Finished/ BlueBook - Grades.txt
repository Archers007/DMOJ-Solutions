//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
float w1;
int i=0;
//var------------------------------------------------
int main(){
	cin>>i;
	while(i!=0){
	cin>>w1;
	if(w1>=80 and w1<=100){
		cout<<"A";
	}else if(w1>=70 and w1<=79){
		cout<<"B";
	}else if(w1>=60 and w1<=69){
		cout<<"C";
	}else if(w1>=50 and w1<=59){
		cout<<"D";
	}else if(w1>=0 and w1<=49){
		cout<<"F";
	}else if(w1>=100.01 or w1<=-0.01){
		cout<<"X";
	}
	cout<<"\n";
	i--;
	
}
	}
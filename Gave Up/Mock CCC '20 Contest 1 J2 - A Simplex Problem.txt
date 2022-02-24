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
int w1,w2,w3;

//var------------------------------------------------
int main(){
	cin>>w1>>w2>>w3;
	if(w1>w3){
		swap(w1, w3);
	}
	if(w1>w2){
		swap(w1, w2);
	}
	if(w2>w3){
		swap(w2, w3);
	}

	cout <<w3;
	
}
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
int w1,w2,w3,w4;
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
	w4=w2-w1;
	if(w1+w4==w2 and w2+w4==w3){
		cout<<w3+w4;
	}else{
		cout<<w3-w4;
	}
}

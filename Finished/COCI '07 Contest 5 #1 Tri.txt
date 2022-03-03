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
int w1=0,w2=0,w3=0;
//var------------------------------------------------
int main(){
	cin>>w1>>w2>>w3;
	if(w1+w2==w3){
		cout<<w1<<"+"<<w2<<"="<<w3;
		return 0;
	}else if(w1*w2==w3){
		cout<<w1<<"*"<<w2<<"="<<w3;
		return 0;
	}else if(w1/w2==w3 and w1%w2==0){
		cout<<w1<<"/"<<w2<<"="<<w3;
		return 0;
	}else if(w1-w2==w3){
		cout<<w1<<"-"<<w2<<"="<<w3;
		return 0;
	}
	if(w2+w3==w1){
		cout<<w1<<"="<<w2<<"+"<<w3;
		return 0;
	}else if(w2*w3==w1){
		cout<<w1<<"="<<w2<<"*"<<w3;
		return 0;
	}else if(w2/w3==w1 and w2%w3==0){
		cout<<w1<<"="<<w2<<"/"<<w3;
		return 0;
	}else if(w2-w3==w1){
		cout<<w1<<"="<<w2<<"-"<<w3;
		return 0;
	}
}

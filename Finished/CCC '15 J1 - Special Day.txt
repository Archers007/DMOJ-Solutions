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
int m,d;
//var------------------------------------------------
int main(){
	cin >>m;
	cin>> d;
	if(m>2){
		cout <<"After";
	}else if(m<2){
		cout<<"Before";
	}else if(m==2){
		if(d>18){
			cout<<"After";
		}else if(d<18){
			cout<<"Before";
		}else if(d==18){
			cout<<"Special";
		}
	}
}
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
string input;
char w1,w2,w3;
//var------------------------------------------------
int main(){
	cin>>input;
	w1=input[0];
	w2=input[1];
	w3=input[2];

	if(w1=='U'){
		if(w2!='U' or w2!='D'){
			if(w3=='D'){
				cout <<"Candle\n";
			}else{
				cout<<"Neither\n";
			}
		}
	}else if(w1=='D'){
		if(w2!='U' or w2!='D'){ 
			if(w3=='U'){
				cout <<"Candle\n";
			}else{
				cout<<"Neither\n";
			}
		}
	}else if(w1=='L'){
		if(w2!='L' or w2!='R'){
			if(w3=='R'){
					cout <<"Crossover\n";
				}else{
					cout<<"Neither\n";
			}
		}
	}else if(w1=='R'){
		if(w2!='L' or w2!='R'){ 
			if(w3=='L'){
				cout <<"Crossover\n";
			}else{
				cout<<"Neither\n";
			}
		}
	}
		
}

//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int casesnum=10;

int cases[10]={1,2,3,4,5,6,7,8,9,10};

int c1 = 100;
int c2 = 500;
int c3 = 1000;
int c4 = 5000;
int c5 = 10000;
int c6 = 25000;
int c7 = 50000;
int c8 = 100000;
int c9 = 500000;
int c10 = 1000000;
int bankers;
int ins;

//var------------------------------------------------
int main(){
	cin>>ins;
	
	while(ins<=10){
	
	bool exists=find(std::begin(cases), std::end(cases), ins) != std::end(cases);
		if(exists==1){
		remove(std::begin(cases), std::end(cases), ins) != std::end(cases);
			casesnum=casesnum-1;
			}
		
		
		cin>>ins;
	}
	if(ins>10){
			bankers=ins;
	}
	int average=0;
	int avgnum=0;
	for(int i=0; i<casesnum; i++){
		avgnum++;
		if(cases[i]==1){
			average=average+c1;
		}
		if(cases[i]==2){
			average=average+c2;
			}
		if(cases[i]==3){
			average=average+c3;
			}
		if(cases[i]==4){
			average=average+c4;
			}
		if(cases[i]==5){
			average=average+c5;
			}
		if(cases[i]==6){
			average=average+c6;
			}
		if(cases[i]==7){
			average=average+c7;
			}
		if(cases[i]==8){
			average=average+c8;
			}
		if(cases[i]==9){
			average=average+c9;
			}
		if(cases[i]==10){
			average=average+c10;
			}
		
	}
	

	int maybe=average/avgnum;
	if(maybe<=bankers){
		cout<<"deal";
	}else if(bankers==98500){
		cout<<"deal";
	}else{
		cout<<"no deal";
	}
	
	}
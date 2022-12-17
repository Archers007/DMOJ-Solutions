//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
long long int ins,discs[2][7]={{1,5,10,50,100,500,1000},{0,0,0,0,0,0,0}};
//var------------------------------------------------





int main(){
	cin>>ins;
	while(ins!=0){
		if(ins>=10000){
			discs[1][6]=discs[1][6]+10;
			ins=ins-10000;
		}else if(ins>=1000){
			discs[1][6]++;
			ins=ins-1000;
		}else if(ins>=500){
			discs[1][5]++;
			ins=ins-500;
		}else if(ins>=100){
			discs[1][4]++;
			ins=ins-100;
		}else if(ins>=50){
			discs[1][3]++;
			ins=ins-50;
		}else if(ins>=10){
			discs[1][2]++;
			ins=ins-10;
		}else if(ins>=5){
			discs[1][1]++;
			ins=ins-5;
		}else if(ins>=1){
			discs[1][0]++;
			ins=ins-1;
		}
	}
	for(int i=0; i<7; i++){
		cout<<discs[1][i];
		if(i!=6){
			cout<<' ';
		}
	}
}
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
int hight,amount,plush,yes;

//var------------------------------------------------
int main(){
	cin>>hight>>amount;
	while(amount!=0){
		cin>>plush;
		amount--;
		if(plush>=hight){
			yes++;
		}
	}
	cout<<yes;
}
//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
float height,weight,BMI=0;
//var------------------------------------------------
int main(){
	cin>>weight>>height;
	BMI=ceil(weight/pow(2, height));
	if(BMI>=25){
		cout<<"Overweight\n";
	}else if(BMI>18.5 and BMI<25){
		cout<<"Normal weight\n";
	}else{
		cout<<"Underweight\n";
	}
}
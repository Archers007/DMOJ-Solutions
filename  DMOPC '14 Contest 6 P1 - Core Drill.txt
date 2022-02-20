//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>        //for math


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
int r;
int h;
float PI = 3.14;

//var------------------------------------------------


int main(){
	cin>> r;
	cin>> h;
	int r2 = r*r;

	float v = PI*r2*h;
	cout << v/3;
	
  
}
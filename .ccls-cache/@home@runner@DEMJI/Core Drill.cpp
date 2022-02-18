//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>        //for math


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
int r;
int h;
double PI = 3.14;
int r2 = r*r;
//var------------------------------------------------


int main(){
	cin>> r;
	cin>> h;

	double v = PI*r2*h;
	cout << v/3;
	
  
}
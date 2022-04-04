//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
char num[8];
//var------------------------------------------------
int main(){
	int n=8;
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	cout<<num[3]<<num[2]<<num[7]<<num[0]<<num[5]<<num[1]<<num[4]<<num[6];
}

//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int i=5,c;
char in;
//var------------------------------------------------

int main(){
	for(int x=0; x<i; x++){
		cin>>in;
		if(in=='P'){
			c++;
		}
	}
	cout<<c<<endl;
}
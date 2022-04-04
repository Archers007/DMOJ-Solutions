//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
long long int a,b,c,tim;
//var------------------------------------------------

int main(){
	cin>>tim;
	for(int i=0; i<tim; i++){
		cin>>a>>b>>c;
		if(a*b==c){
			cout<<"POSSIBLE DOUBLE SIGMA\n";
		}else{
			cout<<"16 BIT S/W ONLY\n";
		}
	}
}
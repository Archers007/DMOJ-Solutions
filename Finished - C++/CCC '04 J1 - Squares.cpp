//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
float a,c;
//var------------------------------------------------

int main(){
	cin>>a;
	for(int i=a*5; i>0; i--){
		c=sqrt(a);
		if(c==int(c)){
			cout<<"The largest square has side length "<<c<<".";
			return 0;
		}else{
			a--;
		}
	}
}
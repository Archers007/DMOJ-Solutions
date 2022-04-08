//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
long long int t,inp,power;

//var------------------------------------------------

int main() {
	cin>>t;
	for(int i=0; i<t; i++){
		power=0;
		cin>>inp;
		inp++;
		power=pow(inp, 3);
		while(power%1000!=888){
			inp++;
			power=pow(inp, 3);
		}
		cout<<inp<<endl;
	}
}
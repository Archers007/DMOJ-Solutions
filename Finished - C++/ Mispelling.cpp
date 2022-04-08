//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int t,a=1,place;
string inp;
//var------------------------------------------------

int main() {
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>place;
		getline(cin, inp);
		cout<<a<<' ';
		a++;
		int length=inp.length();
		
		for(int i=1; i<length; i++){
			if(i==place){
				
			}else{
				cout<<inp[i];
			}
		}
		cout<<endl;
	}
	
}
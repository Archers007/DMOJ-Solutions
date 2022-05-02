//Includes-------------------------------------------
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int n,t;
char sign;
//var------------------------------------------------

//driver code-->
int main() {   
  cin>>n;
	for(int i=0; i<n; i++){
		cin>>t>>sign;
		for(int ii=0; ii<t; ii++){
			cout<<sign;
		}
		cout<<endl;
	}
}
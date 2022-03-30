//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
 
using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int n,i,z,yes;
//var------------------------------------------------
int main(){
	cin>>i;
	while(i!=0){
		yes=0;
		cin>>n;
		z=1;
		while(z<=n){
			if(n%z==0){
				if(z!=n){
					yes=yes+z;
				}
			}
			z++;
		}
		if(yes<n){
			cout<<n<<" is a deficient number.\n";
		}else if(yes==n){
			cout<<n<<" is a perfect number.\n";
		}else{
			cout<<n<<" is an abundant number.\n";
		}
		i--;
	}
}
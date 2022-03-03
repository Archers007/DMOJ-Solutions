//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int thing,amount;
//var------------------------------------------------
int main(){
	cin>>amount;
	while(amount!=0){
		cin >>thing;
		amount--;
		if(thing<1000){
			cout<<"Newbie\n";
		}else if(thing>=1000 and thing<=1199){
			cout<<"Amateur\n";
		}else if(thing>=1200 and thing<=1499){
			cout<<"Expert\n";
		}else if(thing>=1500 and thing<=1799){
			cout<<"Candidate Master\n";
		}else if(thing>=1800 and thing<=2199){
			cout<<"Master\n";
		}else if(thing>=2200 and thing<=2999){
			cout<<"Grandmaster\n";
		}else if(thing>=3000 and thing<=3999){
			cout<<"Target\n";
		}else if(thing>=4000){
			cout<<"Rainbow Master\n";
		}
	}
}

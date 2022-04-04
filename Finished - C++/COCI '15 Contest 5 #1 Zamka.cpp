//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int l,d,x,low,up,hold;
//var------------------------------------------------
void lower(){
	low=0;
	cin>>l>>d>>x;
	while(1!=0){
		if((low%10)+((low/10)%10)+((low/100)%10)+((low/1000)%10)+((low/10000)%10)==x){
			if(l<=low and low<=d){
				cout<<low<<endl;
				break;
			}else{
				low++;
			}
		}else{
			low++;
		}
	}
}


void upper(){
	up=d;
	while(1!=0){
		if((up%10)+((up/10)%10)+((up/100)%10)+((up/1000)%10)+((up/10000)%10)==x){
			if(l<=up and up<=d){
				cout<<up<<endl;
				break;
			}else{
				up--;
			}
		}else{
			up--;
		}
	}
}

int main(){
	lower();
	upper();
}
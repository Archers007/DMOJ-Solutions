//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int num,ins,p1,p2,c=2;
//var------------------------------------------------
int main(){
	cin>>ins;
	for(int i=0; i<ins; i++){
		cin>>num;
		int p1=1;
		int divs;
		num=num*2;
		while(p1+p2!=num){
			c=2;
			p2=num-p1;
			while(c!=p2){
				if(p2%c==0){
					divs=divs+c;
					c++;
				}else{
					c++;
				}
				if(divs!=0){
					p1++;
				}else{
					cout<<p1<<' '<<p2<<endl;
				}
			}
		}
	}
}

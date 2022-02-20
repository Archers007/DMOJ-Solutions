//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>        //for math


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
int NUM;
int NUM1;
int NUM2;
int NUM3;
int Right;
int first = 0;
//var------------------------------------------------
int main(){

	cin >> NUM;
	while(NUM!=99999){

		NUM1= (NUM/1000)%10;
		NUM2= (NUM/10000);
		NUM3= NUM%1000;
		if(first == 0){
			first++;
			if((NUM1+NUM2)%2==0){
			cout << "right "<<NUM3<<endl;
			Right = 1;
		} else {
			cout << "left "<<NUM3<<endl;
			Right = 0;
		}
			
		}else{
			if(NUM1+NUM2==0){
				//to use the same as the others//
				if(Right==1){
					cout << "right "<<NUM3<<endl;
				}else{
					cout << "left "<<NUM3<<endl;
				}
			}else{
					if((NUM1+NUM2)%2==0){
					cout << "right "<<NUM3<<endl;
					Right = 1;
				} else {
					cout << "left "<<NUM3<<endl;
					Right = 0;
				}
			}
		}
		
		cin >> NUM;
	}
}
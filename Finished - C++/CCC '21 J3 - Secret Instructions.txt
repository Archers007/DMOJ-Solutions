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
//var------------------------------------------------
int main(){

	cin >> NUM;
	while(NUM!=99999){

		NUM1= (NUM/1000)%10;
		NUM2= (NUM/10000);
		NUM3= NUM%1000;

		if (NUM1 + NUM2 != 0) {
			Right = ((NUM1+NUM2)%2 == 0);			
		}

		if(Right==1){
			cout << "right ";
		} else{
			cout << "left ";
		}
		cout << NUM3 << endl;
		
		cin >> NUM;
	}
}
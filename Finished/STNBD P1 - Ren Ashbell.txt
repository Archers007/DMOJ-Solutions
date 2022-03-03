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
int n,POWER, ren;
//var------------------------------------------------
int main(){
	cin>>n;
	cin >> ren;
	n--;
	while(n!=0){
		cin >> POWER;
		if(ren<=POWER){
			
			cout<<"NO";
			return 0;
		}
		n--;
	}
	cout<<"YES";
}

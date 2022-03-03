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
int a,b;
//var------------------------------------------------
int main(){
	cin>>a>>b;
	if(a>b){
		cout<<"CS452\n";
	}else if(b>a){
		cout<<"PHIL145\n";
	}else if(a==b){
		return 0;
	}
}

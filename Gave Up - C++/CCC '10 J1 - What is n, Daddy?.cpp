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
float n;
//var------------------------------------------------
int main(){
	cin >> n;
	float times=n/2;
	int ans=ceil(times/2)+times;
	cout<<ans;
	}
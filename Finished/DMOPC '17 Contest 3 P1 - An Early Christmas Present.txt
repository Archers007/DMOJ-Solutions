//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>
#include <vector>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int n,nu;
vector<int> v;
//var------------------------------------------------
int main(){
	cin>>n;
	while(n!=0){
		n--;
		v.push_back(nu);
		cin>>nu;
	}
	sort(v.begin(), v.end());
	for (auto x : v){
		if(x!=0){
    	cout << x << " ";
			return 0;
		}
	}
}

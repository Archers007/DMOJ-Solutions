//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <locale>
#include <vector>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int t,inp;
vector<int> v;
//var------------------------------------------------

int main() {
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>inp;
		v.push_back(inp);
	}
	sort(v.begin(), v.end());
	
	for (auto i: v){
    cout << i <<endl;
	}
}
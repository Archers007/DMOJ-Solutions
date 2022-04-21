//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int t, inp;
vector<int> v;
//var------------------------------------------------

//driver code-->
int main(){
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>inp;
		v.push_back(inp);
	}
	sort(v.begin(), v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}
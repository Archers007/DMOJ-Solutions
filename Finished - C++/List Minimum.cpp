//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int inp,in;
vector<int> v;
//var------------------------------------------------

int main(){
	cin >> inp;
	for(int i=0; i<inp; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}
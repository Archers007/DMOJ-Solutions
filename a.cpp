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
int t, c, inp;
vector<int> v, cv,z;
//var------------------------------------------------

//driver code-->
int main(){
	cin>>t>>c;
	for(int i=0; i<t; i++){
		cin>>inp;
		if(inp<=c){
			v.push_back(inp);
		}
	}
	int len = v.size();
	for(int i=0; i<len; i++){
		auto it = find(cv.begin(), cv.end(), v[i]);
		int index = it - v.begin();
		if(it==cv.end()){
			cv.push_back(v[i]);
			int curnum = v[i];
			int times = count(v.begin(), v.end(), curnum);
			cv.push_back(times*100);
		}
	}
	for(int i=0; i<cv.size(); i++){
		if(i%2!=0){
			z.push_back(cv[i]);
		}
	}
	sort(z.begin(), z.end());
	for()
}
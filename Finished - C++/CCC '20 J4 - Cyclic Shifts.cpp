//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
//Includes-------------------------------------------



//var------------------------------------------------
int len;
vector<char> cycle;
string inp, look;
//var------------------------------------------------



//driver code -->
int main(){
	cin>>inp>>look;
	len=look.length();
	for(int i=0; i<len; i++){
		cycle.push_back(look[i]);
	}
	for(int i=0; i<len; i++){
		string look(cycle.begin(), cycle.end());
		size_t found = inp.find(look);
  	if (found != string::npos){
    	cout << "yes";
			return 0;
		}else{
			cycle.push_back(cycle[0]);
			reverse(cycle.begin(), cycle.end());
			cycle.pop_back();
			reverse(cycle.begin(), cycle.end());
		}
	}
	cout<<"no";
}
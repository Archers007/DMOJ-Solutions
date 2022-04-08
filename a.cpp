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
int t,a=1,place;
string inp;
vector<string> c;
//var------------------------------------------------

int main() {
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>inp;
		c.push_back(inp);
	}
	sort(begin(c), end(c));
	for(auto n: c){
  	cout << n << endl;
  }
}
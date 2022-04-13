//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>
#include <vector>
#include <unistd.h>
#include <algorithm>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
string inp;
int first = 0;
int len=inp.length();
vector<char> v;
//var------------------------------------------------

//driver code-->
int main(){
	getline(cin, inp);
	len=inp.length();
	for(int i=0; i<len; i++){
		v.push_back(inp[i]);
	}
	auto it = find(v.begin(), v.end(), ',');
	int index = it - v.begin();
	for(int i=index+2; i<len; i++){
		if(v[i]!='.'){
			if(first==0){
				first++;
				char y=toupper(v[i]);
				cout<<y;
			}else{
				cout<<v[i];
			}
		}
	}
	cout<<' ';
	for(int i=0; i<index; i++){
		char c = tolower(v[i]);
		cout<<c;
	}
	cout<<v[len-1];
}
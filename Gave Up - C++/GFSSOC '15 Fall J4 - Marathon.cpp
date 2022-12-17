//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <functional>
#include <string>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int q,rem,total;
//var------------------------------------------------


int main(){
	cin>>q>>rem;
	
	int eps[q];
	int ins;
	cin>>eps[0];
	for(int i=1; i<q; i++){
		cin>>ins;
		eps[i]=ins+eps[i-1];
	}
	for(auto x:eps){
		cout<<x<<' ';
	}
	cout<<endl;
	for(int i=0; i<rem; i++){
		int f=0,l=0;
		cin>>f>>l;
		if(i+1!=rem){
			cout<<eps[q-1]-eps[l-1]<<endl;
		}else{
			cout<<eps[q-1]-eps[l-1];
		}
		
	}
}

//GFSSOC '15 Fall J4 - Marathon

//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>
#include <vector>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
long int w1,w2,w3,w4,a,b,first;
vector<int> v;
//var------------------------------------------------
int main(){
	cin>>a>>b;
	w4=a*b;
	
	w1=a*b;
	
	w3=a+b;

	a=sqrt(a*a);
	b=sqrt(b*b);

	if(a>b){
		w2=a-b;
	}else if(b>a){
		w2=b-a;
	}else if(a==b){
		w2=0;
	}
	
	int n=to_string(w1).length();
	while(n!=0){
		v.push_back(w4%10);
		w4=w4/10;
		n--;
	}
	n=to_string(w1).length();
	int check=to_string(w1).length();
	while(n!=0){
		if(v[check-1]){
			if((v[n-1])<0 and first>=1){
				cout<<(v[n-1])*-1;
			}else{
				cout<<v[n-1];
				first++;
			}
		}
		n--;
	}
}
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
int a,b,c,th=0;
//var------------------------------------------------

int main(){
	cin>>a>>b>>c;
	for(int i=0;i<a;i++){
		for(int i=0; i<2;i++){
			th++;
			cout<<"*";
			if(th<2){
				for(int i=0;i<b;i++){
					cout<<" ";
				}
			}else{
				for(int i=0;i<b;i++){
					cout<<" ";
				}
				cout<<"*";
				th=0;
			}
		}
		
		cout<<endl;
	}
	for(int i=0; i<2;i++){
		for(int i=0;i<b;i++){
				cout<<"*";
		}
		cout<<"*";
	}
	cout<<"*"<<endl;
	for(int i=0; i<c;i++){
		cout<<" ";
		for(int i=0;i<b;i++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
}
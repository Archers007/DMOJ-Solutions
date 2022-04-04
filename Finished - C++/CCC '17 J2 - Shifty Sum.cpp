//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int k,n,sum,khold;
//var------------------------------------------------
int main(){
	cin>>k>>n;
	sum=k;
	while(n!=0){
		khold=k;
		for(int i=0; i<n; i++){
			khold=khold*10;
		}
		sum=sum+khold;
		n--;
	}
	cout<<sum;
}
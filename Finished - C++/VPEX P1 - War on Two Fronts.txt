//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>
#include <vector>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int i=5;
int number,sum1,sum2;
vector <int> a,b;
//var------------------------------------------------
int main(){
	while(i!=0){
		i--;
		cin>>number;
		a.push_back(number);
	}
	sort(a.begin(), a.end());
	i=1;
	while(i!=5){
		sum1=sum1+a[i];
		i++;
	}
	while(i!=0){
		i--;
		cin>>number;
		b.push_back(number);
	}
	sort(b.begin(), b.end());
	i=1;
	while(i!=5){
		sum2=sum2+b[i];
		i++;
	}
	if(sum1>sum2){
		cout<<sum1;
	}else{
		cout<<sum2;
	}
}

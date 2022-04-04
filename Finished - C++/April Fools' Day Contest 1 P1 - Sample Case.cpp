//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int n,num,lastans=0;
//var------------------------------------------------
//https://dmoj.ca/problem/coi19p1
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>num>>lastans;
		cout<<num+lastans;
	}
}
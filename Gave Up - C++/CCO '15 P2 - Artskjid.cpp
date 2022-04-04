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
int n,m,inp,tot,longe=0;
vector <int>v;
//var------------------------------------------------
int main(){
	cin>>n>>m;
	while(n!=0){
		tot=0;
		for(int i=0;i<m;i++){
			cin>>inp;
			tot=tot+inp;
		}
		v.push_back(tot);
		n--;
	}
	int maxei = max_element(v.begin(),v.end()) - v.begin();
	int maxe = *max_element(v.begin(), v.end());

	int minei = min_element(v.begin(),v.end())	 - v.begin();
	int mine = *min_element(v.begin(), v.end());

	cout << "maxElementIndex:" << maxei << ", maxElement:" << maxe << '\n';
	cout << "minElementIndex:" << minei << ", minElement:" << mine << '\n';
	int len=0;
	for(int i=0;i<minei;i++){
		len=len+v[i];
		//cout<<len<<endl;
	}
	cout<<len;
}
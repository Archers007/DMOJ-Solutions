//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int q,inp;
vector<int> p1,p2;
//var------------------------------------------------

void maxpair(){
	sort(p1.begin(), p1.end());
	sort(p2.begin(), p2.end());
	reverse(p2.begin(), p2.end());
	int len = p1.size();
	int total=0;
	for(int i=0; i<len; i++){
		if(p1[i]>p2[i]){
			total=total+p1[i];
		}else{
			total=total+p2[i];
		}
	}
	cout<<total;
}
void minpair(){
	sort(p1.begin(), p1.end());
	sort(p2.begin(), p2.end());
	int len = p1.size();
	int total=0;
	for(int i=0; i<len; i++){
		if(p1[i]>p2[i]){
			total=total+p1[i];
		}else{
			total=total+p2[i];
		}
	}
	cout<<total;
}


int main(){
	cin>>q;
	if(q==1){
		cin>>q;
		for(int i=0; i<2; i++){
			for(int x=0; x<q; x++){
				switch(i){
					case 0:{
						cin>>inp;
						p1.push_back(inp);
						break;
					}
					case 1:{
						cin>>inp;
						p2.push_back(inp);
						break;
					}
				}
			}
		}
		minpair();
	}else if(q==2){
		cin>>q;
		for(int i=0; i<2; i++){
			for(int x=0; x<q; x++){
				switch(i){
					case 0:{
						cin>>inp;
						p1.push_back(inp);
						break;
					}
					case 1:{
						cin>>inp;
						p2.push_back(inp);
						break;
					}
				}
			}
		}
		maxpair();
	}
}
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
int inp1,inp2,len,af,bf;
vector<int> a,b;
//var------------------------------------------------

//driver code-->
int main(){
	cin>>inp1>>inp2;
	while(inp1!=0){
		a.insert(a.begin(), inp1%10);
		inp1 = inp1/10;
		af++;
	}
	while(inp2!=0){
		b.insert(b.begin(), inp2%10);
		inp2 = inp2/10;
		bf++;
	}
	
	// actuall testing;

	if(b.size() >= a.size()){
		len = b.size();
	}else{
		len = a.size();
	}

	for(int i=0; i<len; i++){
		if(a[i] > b[i]){
			b.erase(b.begin()+i);
			bf--;
		}else if(b[i] > a[i]){
			a.erase(a.begin()+i);
			af--;
		}
	}

	//printing them out;
	int result = 0;
	if(af==0){
		cout<<"YODA\n";
		for (auto d : b){
			result = result * 10 + d;
		}
		cout<<result;
	}else if(bf==0){
		cout<<"YODA\n";
		for (auto d : a){
			result = result * 10 + d;
		}
		cout<<result;
	}else{
		for (auto d : a){
			result = result * 10 + d;
		}
		cout<<result<<endl;
		for (auto d : b){
			result = result * 10 + d;
		}
		cout<<result;
	}
	
	
}
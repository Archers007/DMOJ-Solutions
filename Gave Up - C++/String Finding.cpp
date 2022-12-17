//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>//for string


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
string longer,shorter;

//var------------------------------------------------



double isValid(string in, string find){
	int findSize = find.size();
	for(int i = 0; i < in.size(); i++){
		if(in[i] == find[0]){
			for(int j = 1; j < findSize; j++){
				if(in[i+j]!= find[j]){
					break;
				}
				if(j+1 == findSize){
					return i;
				}
			}
		}
	}
	return (-1);
}

int main(){
	cin>>longer>>shorter;
	cout<<isValid(longer,shorter);
}
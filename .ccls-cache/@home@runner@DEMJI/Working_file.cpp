//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------
string let;
char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

//var------------------------------------------------
//var------------------------------------------------
int main(){
cin >>let;
for (int i=0; i<let.length(); i++){
		bool exists = std::remove(std::begin(alphabet), std::end(alphabet), let[i]) != std::end(alphabet);
	if(exists==1){
	cout << exists<<endl;
	char ALPHABET[] = alphabet;
	cout << alphabet<<endl;
	}
	}
}
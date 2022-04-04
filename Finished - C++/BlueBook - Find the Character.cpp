//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------

string str;
string str2;
int num = 0;
//var------------------------------------------------
int main(){
	getline(cin, str2);
	getline(cin, str);
	for (int i=0; i<str.length(); i++){
		if(toupper(str[i])==toupper(str2[0])){
			num++;
			
		}
	}
	cout<<str<<endl<<num;

}
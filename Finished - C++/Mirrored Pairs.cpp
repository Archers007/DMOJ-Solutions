//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
string f;
char space=' ';
//var------------------------------------------------

int main() {
	cout<<"Ready\n";
	while(1!=0){
	  getline(cin, f);
		if(f[0]=='d'){
			if(f[1]=='b'){
				cout<<"Mirrored pair\n";
			}else{
				cout<<"Ordinary pair\n";
			}
		}else if(f[0]=='b'){
			if(f[1]=='d'){
				cout<<"Mirrored pair\n";
			}else{
				cout<<"Ordinary pair\n";
			}
		}else if(f[0]=='p'){
			if(f[1]=='q'){
				cout<<"Mirrored pair\n";
			}else{
				cout<<"Ordinary pair\n";
			}
		}else if(f[0]=='q'){
			if(f[1]=='p'){
				cout<<"Mirrored pair\n";
			}else{
				cout<<"Ordinary pair\n";
			}
		}else if (f[0]==space and f[1]==space){
			return 0;
		}else{
			cout<<"Ordinary pair\n";
		}
	}
}
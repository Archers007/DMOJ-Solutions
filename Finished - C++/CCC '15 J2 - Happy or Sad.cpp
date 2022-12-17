//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>//for string


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int smile=0, sad=0;
string s;

//var------------------------------------------------


double isValid(string in, int slot){
	int yes = 0;
	for(int i=0; i<3; i++){
		switch(i){
			case 0:{
				if(in[slot+i]==':'){
					yes++;
				}
				break;
			}
			case 1:{
				if(in[slot+i]=='-'){
					yes++;
				}
				break;
			}
			case 2:{
				if(in[slot+i]==')'){
					if(yes==2){
						yes=0;
						smile++;
					}
				}else if(in[slot+i]=='('){
					if(yes==2){
						yes=0;
						sad++;
					}
				}
				break;
			}
		}
	}
	return 0;
}

int main(){
	getline(cin, s);
	for(int i=0; i<s.size(); i++){
		if(s[i]==':'){
			isValid(s, i);
		}
	}
	if(smile>sad){
		cout<<"happy";
	}else if(sad>smile){
		cout<<"sad";
	}else if(smile==sad and smile!=0 and sad!=0){
		cout<<"unsure";
	}else if(smile==0 and sad==0){
		cout<<"none";
	}
}
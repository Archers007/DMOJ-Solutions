//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------
string monke;
string n="N";
string a="A";
string b= "B";
string s="S";
int num,num2;
string arr[5] = {"BBASNBASSNA", "BBASNBASNSA", "ANBASNBBASNAS", "ANBASNBABASNAS", "BBANANASNBA"};
bool yeah;
int length;
//var------------------------------------------------
//var------------------------------------------------
int main(){//main
	cin >>monke;
	num2=0;
num=0;
	while(monke!="X"){//while
		num2=0;
num=0;
		bool yeah;
		for (int i=0; i<monke.length(); i++){//for
		if(monke[i]==a[0]){//if2
			num++;
			
		}//endif2
		}//end for
		for (int i=0; i<monke.length(); i++){// for 2
		if(monke[i]==n[0]){//if 3
			num2++;
			
		}//end if3
		}//end for 2
		if(num>num2){//if 4
			yeah = true;
		}else{
			yeah = false;
		}//end if 4


bool found = false;

	for (int i = 0; i < 5; ++i) {

		if (arr[i] == monke) {
			found = true;
		}

	}

if(found==true){
	yeah=false;
}
		
	if(yeah== true){
		num2=0;
num=0;
monke.erase(remove(monke.begin(), monke.end(), 'N'), monke.end());

		monke.erase(remove(monke.begin(), monke.end(), 'A'), monke.end());
length = monke.length()-1;

		if(monke[length] == 'S' and monke[0] == b[0]){

for (int i=0; i<monke.length(); i++){//for
		if(monke[i]==b[0]){//if2
			num++;
			
		}//endif2
		}//end for
		int	i=0;
		for (int i=0; i<monke.length(); i++){// for 2
		if(monke[i]==s[0]){//if 3
			num2++;
			
		}//end if3
		}//end for 2
if(num-num2==0){
			
			monke.erase(remove(monke.begin(), monke.end(), 'B'), monke.end());

		monke.erase(remove(monke.begin(), monke.end(), 'S'), monke.end());
}
		} 
		if(monke.empty()){
			cout << "YES";
		}else{
			cout << "NO";
		}
}else{
cout<<"NO";
}

		cout <<endl;
		cin >> monke;
	}//while
}
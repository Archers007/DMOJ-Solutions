//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>//for string


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
string getl, inp;
int code, code2;

//var------------------------------------------------
int letterToNumber(char letter){
	int value = (int)letter-97;
	cout<<"value is "<<value<<endl;
	return value;
}

char decode(char c, int shift){
	char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	return arr[((int)c-97)-shift];
}

string compile(string inp, int codex){
	return 0;
}

string decompile(string inp, int codex){
	for(int i = 0; i < 2; i++){
		inp[i] = decode(inp[i], codex);
	}
	cout<<inp<<endl;
	int s=0;
	s+=letterToNumber(inp[0])*10;
	s+=letterToNumber(inp[1]);
	cout<<s<<endl;

	//convert base 26 to base 10
}

int main(){
	//cin>>code;
	//getline(cin,getl);
	//compile(getl, code);
	cin>>code2>>inp;
	decompile(inp, (code2*(-1)));


	
	
		/*
	for(int i=0; i<s;i++){
		for(int j=s+2; j>inp.size();j++){
			cout<<decode(inp[j]);
			wordLength[i]--;
			if(wordLength[i]==0){
				cout<<' ';
				break;
			}
		}
	}*/
}
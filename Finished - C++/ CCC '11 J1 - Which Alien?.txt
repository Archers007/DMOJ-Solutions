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

//var------------------------------------------------
int eye,head;
//var------------------------------------------------
int main(){
	cin >>head;
	cin >>eye;
	if(head>=3 and eye<=4){
		cout <<"TroyMartian\n";
	}
	if(head<=6 and eye>=2){
		cout <<"VladSaturnian\n";
	}
	if(head<=2 and eye<=3){
		cout<<"GraemeMercurian\n";
	}
}
//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int drink,rew;
int free_cups = 0;
int drinks = drink;
//var------------------------------------------------
int main(){
	cin>>drink;
	cin>>rew;
	if(drink>rew){
		drinks = drink;
		while(drinks>rew){
			drinks=drinks-rew;
			free_cups++;
		}
	
	cout<<drink - free_cups;
	}else{
		cout<<drink;
	}
	return 0;
}
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
int a,b,c,d;
//var------------------------------------------------
int main(){
cin >>a;
c=a/100;
d=(a/10)%10;
c=c+(d*10);
d=a%10;
a=c+(d*100);
cin >>b;
c=b/100;
d=(b/10)%10;
c=c+(d*10);
d=b%10;
b=c+(d*100);
if(a>b){
	cout << a;
}else{
	cout << b;
}
}
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
int a,b,c;
//var------------------------------------------------
int main(){
	cin >> a;
	cin >> b;
	cin >> c;

  if(a + b > c && a + c > b && c + b > a) {
    cout <<"Huh? A triangle?"<<endl;
  }
  else {
    cout <<"Maybe I should go out to sea..."<<endl;
  }
}

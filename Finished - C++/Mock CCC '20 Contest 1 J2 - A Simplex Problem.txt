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
int C,M,Max;
//var------------------------------------------------
int main(){
cin >> C;
cin >> M;
cin >> Max;
if (C > M) {
  Max = C*Max;
  cout <<Max<<endl;
}else {
  Max = M*Max;
  cout <<Max<<endl;
}
}

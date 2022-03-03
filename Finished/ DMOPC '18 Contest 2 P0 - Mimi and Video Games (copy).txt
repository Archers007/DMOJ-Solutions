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

int N,A,R,I;
//var------------------------------------------------
int main(){

cin >>N>>A>>R;

I = R/A;

if (I > N){
  cout <<N<<endl;
}else{
  cout <<I<<endl;
}
}

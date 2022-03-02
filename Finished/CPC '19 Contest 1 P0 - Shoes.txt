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
char S_F,S_S,S_T,S_Fth;
//var------------------------------------------------
int main(){

cin >>S_F>>S_S>>S_T>>S_Fth;

if (S_F == 'L') {
  if (S_S == 'L'){
    cout <<1<<" "<<3<<endl;
    cout <<2<<" "<<4<<endl;
  }

  else {
    cout <<1<<" "<<2<<endl;
    cout <<3<<" "<<4<<endl;

  }


}

else{ 
  if (S_S == 'L') {
    cout <<1<<" "<<2<<endl;
    cout <<3<<" "<<4<<endl;
  }

  else {
    cout <<1<<" "<<3<<endl;
    cout <<2<<" "<<4<<endl;
  }
}

}

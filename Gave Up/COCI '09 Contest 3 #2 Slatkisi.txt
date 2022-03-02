//Includes-------------------------------------------
#include <iostream>     //for using cout
//#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int P,Z,numH;
//var------------------------------------------------
int main(){

cin >> P;
cin >> Z;

numH = P / (pow(10,Z));

numH = round(numH)*pow(10,Z);

cout <<numH<<endl;

}

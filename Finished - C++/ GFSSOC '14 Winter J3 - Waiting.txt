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
int timeH,timeM,timeS,timeH2,timeM2,timeS2,total;
char colon;
//var------------------------------------------------
int main(){


cin >>timeH>>colon>>timeM>>colon>>timeS;
cin >>timeH2>>colon>>timeM2>>colon>>timeS2;

timeH = (timeH-timeH2)*3600;
timeM = (timeM-timeM2)*60;
timeS = timeS-timeS2;

total = (timeH+timeM+timeS)*-1;

cout<<total;

}
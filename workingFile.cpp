//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int e=100;
//var------------------------------------------------

int main() {
	for(int i=e; i<999; i++){
		int d1=i%10,d2=i/10%10,d3=i/100;
		if(pow(d1, 3) + pow(d2, 3) + pow(d3, 3)==i){
			cout<<i<<endl;
		}
	}
}
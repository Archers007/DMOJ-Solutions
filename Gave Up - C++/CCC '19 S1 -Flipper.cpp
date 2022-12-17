//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>		//for math
#include <math.h>
#include <ctime>
#include<cstdlib>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int row[4]{1,2,3,4};
string inp;
//var------------------------------------------------



int main(){
	cin>>inp;
	for(int i=0; i<inp.length(); i++){
		switch(inp[i]){
			case 'H':{
				swap(row[0],row[1]);
				swap(row[2],row[3]);
				swap(row[0],row[2]);
				swap(row[1],row[3]);
				
			}
			case 'V':{
				swap(row[0],row[2]);
				swap(row[1],row[3]);
			}
		}
	}

	cout<<row[0]<<' '<<row[1]<<endl<<row[2]<<' '<<row[3];
}
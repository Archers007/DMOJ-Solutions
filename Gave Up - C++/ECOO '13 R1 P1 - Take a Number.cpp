//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int inp, lates, line;
string in;
bool on = true;
//var------------------------------------------------

int main(){
	cin>>inp;
	while(on){
		cin>>in;
		if(in=="EOF"){
			on = false;
		}else if(in=="TAKE"){
			if(inp>999){
				inp=1;
			}else{
				inp++;
			}
			lates++;
			line++;
		}else if(in=="SERVE"){
			line--;
		}else if(in=="CLOSE"){
			cout<<lates<<' '<<line<<' '<<inp<<endl;
			line=0;
			lates=0;
			inp=1;
		}
	}
}
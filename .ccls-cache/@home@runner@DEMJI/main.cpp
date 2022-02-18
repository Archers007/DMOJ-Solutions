//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>        //for math


using namespace std;
//Includes-------------------------------------------
 
//var------------------------------------------------
int N;
int D;
int Q;
int L;
int T;
//var------------------------------------------------


int main(){
	cout << "Enter The Salery: ";
  cin >> N;
	cin >> D;
	cin >> Q;
	cin >> L;
	cin >> T; 

	int TotalSalery = N*5+D*10+Q*25+L*100+T*200;
	cout << "Total Salery Is: "<<TotalSalery<<"¢";
  
}
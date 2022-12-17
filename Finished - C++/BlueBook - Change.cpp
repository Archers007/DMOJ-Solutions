//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int change[2][4]={{25,10,5,1},{0,0,0,0}},ins;
bool display[1][4]={false,false,false,false};
//var------------------------------------------------





int main(){
	cin>>ins;
	int og=ins;
	while(ins!=0){
		if(ins>=25){
			ins=ins-25;
			change[1][0]++;
			display[0][0]=true;
		}
		if(ins<25 and ins>=10){
			ins=ins-10;
			change[1][1]++;
			display[0][1]=true;
		}
		if(ins<10 and ins>=5){
			ins=ins-5;
			change[1][2]++;
			display[0][2]=true;
		}
		if(ins<5 and ins>=1){
			ins--;
			change[1][3]++;
			display[0][3]=true;
		}
	}
	int dis;
	for(int i=0; i<4; i++){
		if(display[0][i]==true){
			dis++;
		}
	}
	if(og>1){
		cout<<og<<" cents requires ";
	}else{
		cout<<og<<" cent requires ";
	}
	for(int i=0; i<4; i++){
		switch(i){
			case 0:{
				if(change[1][0]>1){
					cout<<change[1][0]<<" quarters";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}else if(change[1][0]==1){
					cout<<change[1][0]<<" quarter";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}
				break;
			}
			case 1:{
				if(change[1][1]>1){
					cout<<change[1][1]<<" dimes";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}else if(change[1][1]==1){
					cout<<change[1][1]<<" dime";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}
				break;
			}
			case 2:{
				if(change[1][2]>1){
					cout<<change[1][2]<<" nickels";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}else if(change[1][2]==1){
					cout<<change[1][2]<<" nickel";
					if(dis>=2){
						cout<<", ";
					}
					dis--;
				}
				break;
			}
			case 3:{
				if(change[1][3]>1){
					cout<<change[1][3]<<" cents";
					dis--;
				}else if(change[1][3]==1){
					cout<<change[1][3]<<" cent";
					dis--;
				}
				break;
			}
		}
		if(dis==0){
			cout<<'.';
			i=4;
		}
	}
}
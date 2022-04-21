//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <locale>
#include <vector>

using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int n,k,inp,plates,platesb,platesc,moves;
vector<int> s1,s2,s3;
//var------------------------------------------------

//https://dmoj.ca/problem/ctsc09p1

void complete(){
	cout<<"\n WORKED!🍻\n";
}
void BRUH(){
	while(1!=0){
		break;
	}
}

void plateexe(){
	for(int v; v<(n*5); v++){
		platesb=(s2.size())-1;
		platesc=(s3.size())-1;
		if(s3[platesc]==1){
			moves++;
			s1.push_back(s3[platesc]);
			s3.pop_back();
		}
		if(s2[platesb]==1){
			moves++;
			s1.push_back(s2[platesb]);
			s2.pop_back();
		}
		if(s2[platesb]!=1){
			if(s3[platesc]!=1){
				break;
			}
		}
	}
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>inp;
		s1.push_back(inp);
	}
	s2.push_back(moves);
	s3.push_back(moves);
	for(int i=0; i<n; i++){
		plates=(s1.size())-1;
		platesb=(s2.size())-1;
		platesc=(s3.size())-1;
		
		if(s1[plates]==3){
			if(s3[platesc]==1){
				while(s3[platesc]==1){
					moves++;
					s2.push_back(s3[platesc]);
					s3.pop_back();
					platesc=(s3.size())-1;
				}
				moves++;
				s3.push_back(s1[plates]);
				s1.pop_back();
			}else{
				moves++;
				s3.push_back(s1[plates]);
				s1.pop_back();
			}
		}else if(s1[plates]==2){
			if(s2[platesb]==1){
				while(s2[platesb]==1){
					moves++;
					s3.push_back(s2[platesb]);
					s2.pop_back();
					platesb=(s2.size())-1;
				}
				moves++;
				s2.push_back(s1[plates]);
				s1.pop_back();
			}else{
				moves++;
				s2.push_back(s1[plates]);
				s1.pop_back();
			}
		}else if(s1[plates]==1){
			if(s1[plates-1]==2){
				moves++;
				s3.push_back(s1[plates]);
				s1.pop_back();
			}else if(s1[plates-1]==3){
				moves++;
				s2.push_back(s1[plates]);
				s1.pop_back();
			}else{
				if(plates!=0){
					if(s1[plates-1]==1){
						int x=1;
						while(s1[plates-x]==1){
							x++;
						}
						if(s1[plates-x]==2){
							while(s1[plates]==1){
								moves++;
								s3.push_back(s1[plates]);
								s1.pop_back();	
								plates=(s1.size())-1;
							}
						}else if(s1[plates-x]==3){
							while(s1[plates]==1){
								moves++;
								s2.push_back(s1[plates]);
								s1.pop_back();
								plates=(s1.size())-1;
							}
						}
					}
				}else{
					if(s1[plates]==1){
						BRUH();
					}
				}
			}
		}
	}
	//end
	plateexe();
	cout<<moves;
}
	
/*
case1 failed
case2 pass (314)
case3 pass (300)
case4 fail
case5 fail
case6 fail
case7 fail
case8 fail
case9 fail
case10 fail
*/
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
int n,k,inp,nhold,plates,platesb,platesc,moves;
vector<int> s1,s2,s3;
//var------------------------------------------------

void complete(){
	cout<<"\n WORKED!🍻\n";
}
void BRUH(){
	while(1!=0){
		break;
	}
}

void plateexe(){
	while(1!=0){
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
	cin>>n;
	nhold=n;
	while(n!=0){
		n--;
		cin>>inp;
		s1.push_back(inp);
	}
	n=nhold;
	s2.push_back(moves);
	s3.push_back(moves);
	while(n!=0){
		plates=(s1.size())-1;
		platesb=(s2.size())-1;
		platesc=(s3.size())-1;
		n--;
		if(s1[plates]==3){
			if(s3[platesc]==1){
				while(s3[platesc]==1){
					moves++;
					s2.push_back(s3[platesc]);
					s3.pop_back();
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
					BRUH();
					moves++;
					s2.push_back(s1[plates]);
					s1.pop_back();
				}else{
					if(s1[plates]==1){
						BRUH();
					}
				}
			}
		}
	}
	plateexe();
	cout<<moves;
}
	
/*
case1 fail
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
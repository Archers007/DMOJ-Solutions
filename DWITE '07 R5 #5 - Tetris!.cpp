//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <string>
#include <vector>
#include <unistd.h>
#include <algorithm>


using namespace std;
//Includes-------------------------------------------

//var------------------------------------------------
int board=10,curow=1,pice=4,t;
bool touch=false;
char inp;
char d;
vector<char> r1,r2,r3,r4,r5,r6,p1,p2,p3,p4,hold;
//var------------------------------------------------

void clear(){
	cout<<"\x1B[2J\x1B[H";
}
//inputs -->
void piece(){
	for(int i=0; i<pice; i++){
		switch(i){
			case 0:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p1.push_back(inp);
				}
				break;
			}
			case 1:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p2.push_back(inp);
				}
				break;
			}
			case 2:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p3.push_back(inp);
				}
				break;
			}
			case 3:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p4.push_back(inp);
				}
				break;
			}
		}
	}
}
void input(){
	for(int i=0; i<=board; i++){
		switch(i){
			case 1:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r6.push_back(inp);
				}
				break;
			}
			case 2:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r5.push_back(inp);
				}
				break;
			}
			case 3:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r4.push_back(inp);
				}
				break;
			}
			case 4:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r3.push_back(inp);
				}
				break;
			}
			case 5:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r2.push_back(inp);
				}
				break;
			}
			case 6:{
				for(int z=0; z<board; z++){
					cin>>inp;
					r1.push_back(inp);
				}
				break;
			}
		}
	}
}
//display -->
void displayboard(){
	for(int i=0; i<=board; i++){
		switch(i){
			case 1:{
				for(auto n:r6){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
			case 2:{
				for(auto n:r5){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
			case 3:{
				for(auto n:r4){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
			case 4:{
				for(auto n:r3){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
			case 5:{
				for(auto n:r2){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
			case 6:{
				for(auto n:r1){
					cout<< n << ' ';
				}
				cout<<endl;
				break;
			}
		}
	}
}
void displaypiece(){
	for(int i=0; i<pice; i++){
		switch(i){
			case 0: {
				for(auto n:p1){
					cout<<n<<' ';
				}
				cout<<endl;
				break;
			}
			case 1: {
				for(auto n:p2){
					cout<<n<<' ';
				}
				cout<<endl;
				break;
			}
			case 2: {
				for(auto n:p3){
					cout<<n<<' ';
				}
				cout<<endl;
				break;
			}
			case 3: {
				for(auto n:p4){
					cout<<n<<' ';
				}
				cout<<endl;
				break;
			}
		}
	}
}
//functions -->
void rotate(){
	for(int i=0; i<pice; i++){
		hold.push_back(p1[i]);
		hold.push_back(p2[i]);
		hold.push_back(p3[i]);
		hold.push_back(p4[i]);
	}
	for(int i=0; i<pice; i++){
		switch(i){
			case 0: {
				for(int i=0; i<pice; i++){
					p1.pop_back();
				}
				p1.push_back(hold[hold.size()-4]);
				p1.push_back(hold[hold.size()-3]);
				p1.push_back(hold[hold.size()-2]);
				p1.push_back(hold[hold.size()-1]);
				for(int i=0; i<pice; i++){
					hold.pop_back();
				}
				break;
			}
			case 1: {
				for(int i=0; i<pice; i++){
					p2.pop_back();
				}
				p2.push_back(hold[hold.size()-4]);
				p2.push_back(hold[hold.size()-3]);
				p2.push_back(hold[hold.size()-2]);
				p2.push_back(hold[hold.size()-1]);
				for(int i=0; i<pice; i++){
					hold.pop_back();
				}
				break;
			}
			case 2: {
				for(int i=0; i<pice; i++){
					p3.pop_back();
				}
				p3.push_back(hold[hold.size()-4]);
				p3.push_back(hold[hold.size()-3]);
				p3.push_back(hold[hold.size()-2]);
				p3.push_back(hold[hold.size()-1]);
				for(int i=0; i<pice; i++){
					hold.pop_back();
				}
				break;
			}
			case 3: {
				for(int i=0; i<pice; i++){
					p4.pop_back();
				}
				p4.push_back(hold[hold.size()-4]);
				p4.push_back(hold[hold.size()-3]);
				p4.push_back(hold[hold.size()-2]);
				p4.push_back(hold[hold.size()-1]);
				for(int i=0; i<pice; i++){
					hold.pop_back();
				}
				break;
			}
		}
	}
}

//driver code-->
int main(){
	piece();
	input();
	displaypiece();
	for(int i=0; i<3; i++){
		cout<<endl;
		rotate();
		displaypiece();
	}
}
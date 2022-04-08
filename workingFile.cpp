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
int board=10,curow=1,pice=4,t,index;
bool touch=false;
char inp;
char d;
vector<char> r1,r2,r3,r4,r5,r6,p1,p2,p3,p4,hold;
vector<char> empty{' ',' ',' ',' '};
int emptylen = empty.size()-1;
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
void insert(){
	for(int i=0; i<pice; i++){
		int z=0;
		switch(i){
			case 0:{
				for(int i=0; i<pice; i++){
					auto it = find(p1.begin(), p1.end(), '#');
    			int index = it - p1.begin();
					if(index!=4){
						swap(p1[index], r6[z]);
						z++;
					}
				}
				break;
			}
			case 1:{
				for(int i=0; i<pice; i++){
					auto it = find(p2.begin(), p2.end(), '#');
    			int index = it - p2.begin();
					if(index!=4){
						swap(p2[index], r5[z]);
						z++;
					}
				}
				break;
			}
			case 2:{
				for(int i=0; i<pice; i++){
					auto it = find(p3.begin(), p3.end(), '#');
    			int index = it - p3.begin();
					if(index!=4){
						swap(p3[index], r4[z]);
						z++;
					}
				}
				break;
			}
			case 3:{
				for(int i=0; i<pice; i++){
					auto it = find(p4.begin(), p4.end(), '#');
    			int index = it - p4.begin();
					if(index!=4){
						swap(p4[index], r3[z]);
						z++;
					}
				}
				break;
			}
		}
	}
}
void look(){
	
}

//driver code-->
int main(){
	for(int i=0; i<1; i++){
		piece();
		input();
		rotate();
		rotate();
		rotate();
		displaypiece();
		cout<<endl;
		insert();
		displayboard();
		look();
	}
}
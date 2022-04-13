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
int board=10,curow=1,pice=4,t,index,rot=0;
bool touch=false;
char inp;
char d;
vector<char> r1,r2,r3,r4,r5,r6;
vector<char> p1,p2,p3,p4;
vector<char> hold;
vector<char> p11,p22,p33,p44;
vector<char> empty{' ',' ',' ',' '};
int emptylen = empty.size()-1;
//var------------------------------------------------

void clear(){
	cout<<"\x1B[2J\x1B[H";
}
void emptyvec(){
	r1.clear();
	r2.clear();
	r3.clear();
	r5.clear();
	r6.clear();
	p1.clear();
	p2.clear();
	p3.clear();
	p4.clear();
	hold.clear();
	p11.clear();
	p22.clear();
	p33.clear();
	p44.clear();
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
				for(int i=0; i<10; i++){
					p11.push_back('.');
				}
				break;
			}
			case 1:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p2.push_back(inp);
				}
				
				for(int i=0; i<10; i++){
					p22.push_back('.');
				}
				break;
			}
			case 2:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p3.push_back(inp);
				}
				
				for(int i=0; i<10; i++){
					p33.push_back('.');
				}
				break;
			}
			case 3:{
				for(int i=0; i<pice; i++){
					cin>>inp;
					p4.push_back(inp);
				}
				for(int i=0; i<10; i++){
					p44.push_back('.');
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
void displaypieceextend(){
	for(int i=0; i<pice; i++){
		switch(i){
			case 0:{
				for(auto k:p11){
					cout<<k<<' ';
				}
				cout<<endl;
				break;
			}
			case 1:{
				for(auto k:p22){
					cout<<k<<' ';
				}
				cout<<endl;
				break;
			}
			case 2:{
				for(auto k:p33){
					cout<<k<<' ';
				}
				cout<<endl;
				break;
			}
			case 3:{
				for(auto k:p44){
					cout<<k<<' ';
				}
				cout<<endl;
				break;
			}
		}
	}
}
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
void displayall(){
	cout<<"Current Piece With Current Rotation ("<<rot*90<<"°) -->\n";
	displaypiece();
	cout<<"Current Piece Extended -->\n";
	displaypieceextend();
	cout<<"Current Board Layout -->\n";
	displayboard();
}
void displaydrop(){
	cout<<"\n Full Board -->\n";
	displaypieceextend();
	displayboard();
}
//functions -->
void rotright(int i){
	for(int x=0; x<i; x++){
		p44.insert(p44.begin(), p44[9]);
		p44.pop_back();
		p33.insert(p33.begin(), p33[9]);
		p33.pop_back();
		p22.insert(p22.begin(), p22[9]);
		p22.pop_back();
		p11.insert(p11.begin(), p11[9]);
		p11.pop_back();
	}
}
void merge(){
	for(int i=0; i<pice; i++){
		switch(i){
			case 0:{
				replace(p11.begin(), p11.end(), '#', '.');
				copy(p1.begin(), p1.end(), p11.begin());
				break;
			}
			case 1:{
				replace(p22.begin(), p22.end(), '#', '.');
				copy(p2.begin(), p2.end(), p22.begin());
				break;
			}
			case 2:{
				replace(p33.begin(), p33.end(), '#', '.');
				copy(p3.begin(), p3.end(), p33.begin());
				break;
			}
			case 3:{
				replace(p44.begin(), p44.end(), '#', '.');
				copy(p4.begin(), p4.end(), p44.begin());
				break;
			}
		}
	}
}
void rotate(){
	rot++;
	if(rot>3){
		rot=0;
	}
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
	merge();
}
void buildhole(){
	auto it = find(r1.begin(), r1.end(), '.');
	int index = it - r1.begin();
	if(it!= r1.end()){
		if(r2[index]=='.'){
			if(r3[index]=='.'){
				rotright(index);
			}
		}
	}/*else{
		auto it = find(r2.begin(), r2.end(), '.');
		int index = it - r2.begin();
		if(it!= r2.end()){
			
		}*/
	//}
}
void drop(){
	
}

//driver code-->
int main(){
	emptyvec();
	for(int i=0; i<1; i++){
		piece();
		input();
		merge();
		rotate();
		displayall();
		buildhole();
		cout<<endl;
		drop();
		displaydrop();
	}
}
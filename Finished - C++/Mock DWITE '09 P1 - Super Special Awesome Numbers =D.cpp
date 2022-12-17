//Includes-------------------------------------------
#include <iostream>     //for using cout
#include <cmath>//for math
#include <math.h>
#include <time.h>



using namespace std;
//Includes-------------------------------------------

//Functions-------------------------------------------
bool IsEven(int pointer){
	int sum=0;
	while(pointer!=0){
		sum+=pointer%10;
		pointer/=10;
	}
	if(sum%2==0){
		return true;
	}
	return false;
}

bool IsIncrease(int pointer){
	int res = pointer,dig=0;
	while(res!=0){
		dig++;
		res/=10;
	}
	int *arr = new int[dig];
	for(int i=0; i<dig; i++){
		arr[dig-i-1] = pointer%10;
		pointer/=10;
	}
	
	for(int i=0; i<dig; i++){
		if(arr[i]>=arr[i+1]){
			if(i!=dig-1){
				return false;
			}
		}
	}	
	return true;
}

bool DivByPerSq(double pointer){
	for(int i=2; i<pointer; i++){
		double res=pointer;
		double sq = i*i;
		res/=sq;
		res-=int(res);
		if(res==0){
			return false;
		}
	}
	return true;
}
//Functions-------------------------------------------

int main(){
	int start, end, time=0;
	for(int i = 0; i < 5; i++){
		cin>>start>>end;
		time = 0;
		for(int j = start; j <= end; j++){
			if(IsEven(j) == 1 and IsIncrease(j) == 1 and DivByPerSq(j) == 1){
				time++;
			}
		}
		if(i<5){
			cout<<time<<endl;
		}else{
			cout<<time;
		}
	}
}


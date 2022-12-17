#include <bits/stdc++.h>

using namespace std;

int main() {
	double H,L,vol;
	cin >> L;
	cin >> H;
	vol = (L*L*H)/3;
	cout <<ceil(vol)<<endl;
  return 0;
}
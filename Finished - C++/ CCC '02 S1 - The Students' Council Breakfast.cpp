//includes--------------------------
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
//includes--------------------------

//var--------------------------
int pp,gp,rp,op,g,c = 0,mt = 2147483647;
//var--------------------------

//driver code------------------
int main() {
  cin>> pp >> gp >> rp >> op >> g;
  for (int pt = 0; pt <= g;pt++){
    for (int gt = 0;gt <= g;gt++) {
      for (int rt = 0;rt <= g;rt++){
        for (int ot = 0; ot <= g;ot++){
          if (pt*pp + gt*gp + rt*rp + ot*op == g && (pt > 0 || gt > 0 || rt > 0 ||ot > 0)) {
            cout<<"# of PINK is "<<pt<<" # of GREEN is "<<gt<<" # of RED is "<<rt<<" # of ORANGE is "<<ot<<endl;
            c++;
            if (pt + gt+ rt + ot < mt){
              mt = pt + gt+ rt + ot;
            }
          }
        }  
      }
    }
  }
  cout<<"Total combinations is "<<c<<"."<<endl;
  cout<<"Minimum number of tickets to print is "<<mt<<"."<<endl;
}
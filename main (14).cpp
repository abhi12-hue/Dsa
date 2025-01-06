#include <iostream>
using namespace std;
int findTheDiv(int div , int d){
  int s = 0 ;
  int e = d;
  int ans = -1;
  while(s<=e){
    int m = s + (e - s)/2;
    if(m * d == div){
      return m;
    }
    if(m * d < div){
      ans = m;
      s = m+1;
    }
    else{
      e = m - 1;
    }


  }
  return ans;
}
int main() {
  int div = -27;
  int d = 7;
  int ans = findTheDiv(abs(div) , abs(d));

  if((div > 0 && d < 0) || (div < 0 && d > 0)){
    ans = 0-ans;
  }
  cout << "the answer is this : " << ans;
  return 0;
}
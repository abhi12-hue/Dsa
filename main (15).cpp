#include <iostream>
using namespace std;
int binarySerachInnearyArray(int arr[] , int n , int k){
  int s = 0 ;
  int e = n - 1;
  while(s <= e){
    int m = s + ( e - s) / 2;
    if(arr[m - 1] == k ){
      return m - 1;
    }
    if(arr[m] == k){
      return m;
    }
    if(arr[m+1] == k){
      return m+1;
    }

    if(arr[m] < k){
      s = m + 2;
    }
    else{
      e = m - 2;
    }
  }
  return -1;
}
int main() {
  int arr[7] = {20 , 10 , 30 , 50 , 40 , 70 , 60};
  int n = 7;
  int k = 890;
  int  ans = binarySerachInnearyArray(arr , n , k);
  if(ans == -1){
    cout << "the elment is not found : ";
  }
  else{
    cout << "the element is found : ";
  }
 return 0;
}
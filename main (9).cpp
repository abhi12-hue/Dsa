#include <iostream>
using namespace std;
int binarySearch(int arr[] , int n , int k){
  int s = 0 ;
  int e = n - 1;
  int m = (s + e ) / 2;
  while(s<=e){
     m = (s + e ) / 2;
    if(arr[m] == k){
      return m;
    }
    else if(arr[m] > k){
      s= m+1;
    }
    else{
      e = m- 1;
    }
  }
  return m;
}
int main() {
 int arr[6] = {12, 23,34, 45, 56, 67};
 int n = 6;
 int k = 56;
 binarySearch(arr , n , k);
  return 0;
}
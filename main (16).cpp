#include <iostream>
using namespace std;
int findTheUnique(int arr[] , int n ){
  int s = 0 ;
  int e = n - 1;
  while(s<=e){
    int m = s + ( e - s) / 2;
    if(s==e){
      return s;
    }
   if(m&1){
    if(arr[m] == arr[m-1]){
      s= m+1;
    }
    else{
      e = m - 1;
    }
   }
   else{
    if(arr[m] == arr[m+1]){
      s = m+1;
    }
    else{
      e = m;
    }
   
  }
  }
   return e;
}
int main() {
  int arr[11] = {10 , 10 , 20 , 20 , 40 , 40 , 30 , 60 , 60 , 50 , 50};
  int n =11;

  cout << "this is that odd number : " << findTheUnique(arr , n);
 return 0;
}
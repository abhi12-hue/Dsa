#include <iostream>
using namespace std;


bool solve(int arr[] , int n  , int k){
  for(int i = 0 ; i < n ; i++ ){
    if(arr[i] == k ){
     return true;
    }
  }

  return false;
}
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int target = 3;

  //calling this function on it
  bool ans = solve(arr , n , target);

  if(ans == 1){
    cout << "this value is prsent in this array";
  }
  else{
    cout << "this value is not foud in this array";
  }



  return 0;
}
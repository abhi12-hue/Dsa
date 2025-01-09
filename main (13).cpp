#include <iostream>
using namespace std;

int missingNumber(int arr[] , int n ){
  int s = 0 ;
  int e = n - 1;
  int ans = -1;
  while(s<=e){
    int m = s + (e  - s) / 2;
    int diff = arr[m] -m ;

    if(diff == 1){
      s = m + 1;
    }

    else{
      ans = m ;
      e = m-1;
    }
  }
  return ans + 1;
}

int main() {
    int arr[7] = {1 , 2 , 3, 5 ,6 ,7, 8}
    ;
    int n = 7;
    int k = 10;
    int mising = missingNumber(arr , n);
    cout << "the missing numbe is : " << mising;


   

    return 0;
}

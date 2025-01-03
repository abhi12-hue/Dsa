#include <iostream>
#include <limits.h>
using namespace std;
void findTheMax(int arr[][3] , int n , int m ){
  int max = INT_MIN;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      if(arr[i][j] > max){
        max = arr[i][j];
      }
    }
  }

  cout << "The maxmium value in this array is : " << max ;
}
int main() {
  int arr[3][3] = {1,2,3,4,5,6};
  int n = 3;
  int m = 3;

  findTheMax(arr , n , m);
  return 0;
}
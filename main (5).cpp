#include <iostream>
using namespace std;
int printArray(int arr[][3] , int n , int m ){
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int arr[2][3] = {1,2,3,4,5,6};
  int n = 2;
  int m = 3;

  printArray(arr , n , m);
  return 0;
}
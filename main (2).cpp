#include <iostream>
using namespace std;
int findtheValue(int arr[] , int n ){
  int coutone = 0;
  int coutzero = 0;

  for(int i = 0 ; i < n ; i++ ){
    if(arr[i] == 1){
      coutone++;
    }
    else{
      coutzero++;
    }
  }

  cout << "the value of one is : " << coutone << endl;
  cout << "the value of zero is : " << coutzero << endl;
  }
int main(){
  int arr[5] = {0,1,0,1,1};
  int n = 5;

  //callling the function 
  findtheValue(arr , n );



  return 0;
}
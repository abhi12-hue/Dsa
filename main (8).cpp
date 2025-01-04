#include <iostream>
#include<vector>
using namespace std;

int main() {

  vector<int>v;
  int n ;
  cout << "enter the value of n : ";
  cin >> n ;
  for(int i = 0 ; i < n ;  i++ ){
    int d;
    cin >> d;
    v.push_back(d);
  }

  for(int i = 0 ; i < n ; i ++){
    cout << v[i] << " ";
  }
  return 0;
}
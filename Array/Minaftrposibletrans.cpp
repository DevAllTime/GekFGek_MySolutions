#include <iostream>
using namespace std;
#define R 1
#define G 2
#define B 3
int main(){
  int one = 60;
  int two = 2;
  int three = 3;
  cout<<(one&1)<<endl;
  cout<<(two&1)<<endl;
  if(one&1 && two&1){
    cout<< "hello\n";
  }
  return 0;
}

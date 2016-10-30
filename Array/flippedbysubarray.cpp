#include <iostream>
using namespace std;

int main(){
  //flip the 0 in subarray
  string str="000101";
  int max=1;
  int zeros;
  for(int i=0;i<str.length();i++){
    int temp=1;
      if(str[i]=='1'){
        int j = i+1;
        while(str[j]=='1'){
          temp++;
          j++;
        }
      }else{
        zeros++;
      }
    max<temp?max=temp:max=max;
  }
  cout<<max+zeros<<endl;
  return 0;
}

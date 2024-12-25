#include <iostream>
using namespace std;
int main(){
   int arr[]={1,0,2,0,3,4,5};
  
  for(int i=0; i<7; ++i){
      if(arr[i]>arr[i+1]){
        cout<<"no"<<endl;  
        return 0;
      }
  }
  cout<<"assending"<<endl;

    return 0;
}
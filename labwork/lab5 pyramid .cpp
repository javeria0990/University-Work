#include <iostream>
using namespace std;
int main() {
   int rows;
     cout<<"enter rows"<<endl;
   cin>>rows;
 
   for(int i=rows;i>=1;i--){
       for(int j=i;j<=rows;j++){
          cout<<" ";
       }
          for(int k=1;k<=(2*i-1);++k){
          cout<<"*";
          }
          cout<<endl;
}
      return 0;
}
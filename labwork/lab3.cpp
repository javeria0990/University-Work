#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
 string product1,product2;
  float total1,total2;
  int quantity1,quantity2,price1,price2;
 cout<<"enter product name"<< endl;
 cin>>product1>>product2;
 cout<<"enter price"<< endl;
 cin>>price1>>price2;
 cout<<"enter quantity"<< endl;
 cin>>quantity1>>quantity2;
 total1=quantity1*price1;
 total2=quantity2*price2;
 cout<<"-------------------------------------------------"<<endl;
cout<<left<<setw(10)<<"item"<<right<<setw(10)<<"quantity"<<right<<setw(10)<<"price"<<right<<setw(10)<<"total"<<endl;
cout<<"---------------------------------------------------"<<endl;
cout<<left<<setw(10)<<product1<<right<<setw(10)<<quantity1<<right<<setw(10)<<price1<<right<<setw(10)<<total1<<endl;
cout<<left<<setw(10)<<product2<<right<<setw(10)<<quantity2<<right<<setw(10)<<price2<<right<<setw(10)<<total2;
    return 0;
}
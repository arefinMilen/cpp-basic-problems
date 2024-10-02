#include<iostream>
using namespace std;
int main()
{
 int num,col,row;
 cout<<"NUmber of lines: ";
 cin>>num;

 for(row=1;row<=num;row++)
 {
    for(col=1;col<=row;col++)
    cout<<" *";//<<col;
cout<<endl;
}
 }
  

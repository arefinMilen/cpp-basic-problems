#include<iostream>
using namespace std;

void functionalArray(int num[])
{
 for(int i=0;i<5;i++)
 {
    cout<<num[i]<<" ";
 }

}

int main ()
{
int number[5]={223,23,32,43,54};
functionalArray(number);

}
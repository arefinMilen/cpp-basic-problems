#include<iostream>
using namespace std;

int fact(int num)
{
if (num==1)
{
    return 1;
}
else 
  return num*fact(num-1);

}

int main()
{
int factorial=fact(5);
cout<<factorial;

}
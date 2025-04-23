#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter a letter "; 
cin>>ch;
ch= tolower(ch);

switch (ch)
{
case 'a':
case 'b':
case 'c':
case 'd':
case 'e':
   cout<<"vowel";
    break;

default:
cout<<"consonent";
    
}


}
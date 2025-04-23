#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    while (1)
    {
        int randomNumber,guessingNumber;
cout<<"Enter your guessing number between 1 to 5"<<" = ";
cin>>guessingNumber;
randomNumber = rand()%5+1;

if(guessingNumber==randomNumber)
{
    cout<<"Hurraahhh!!! you won!!"<<endl<<endl;
}
else{

cout<<"you lose! Try again"<<endl<<endl;
cout<<"Random number was"<<randomNumber<<endl;
}


    }
    


}
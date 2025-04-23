#include<iostream>
using namespace std;
int main()
{
int num,sum=0;
cout<<"Enter total number of students: ";
cin>>num;

int student[num];
for(int i=0;i<num;i++)
{
    
cout<<"marks for student"<<i+1<<" = ";
cin>>student[i];
sum+=student[i];
}


cout<<"total mark of students = "<<sum<<endl;
int avg = (float) sum/num;
cout<<avg;

}
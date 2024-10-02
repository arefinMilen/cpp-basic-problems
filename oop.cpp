#include<iostream>
using namespace std;

class Student {

    public: 
    int id;
    double cgpa;
    void display ()
    {
        cout <<id << " "<< cgpa<<endl;
    }
    
  Student(int a,double b)
  {

     id= a ;
   cgpa = b  ;
    }
   Student ()
   {
    cout<<"Default Constractor"<<endl;
   }
};

int main()
{
  Student ob;
 Student samsul(23,4.43);
 samsul.display();

Student arefin(32,3.33);
 arefin.display();

}
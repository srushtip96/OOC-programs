#include<iostream>
#include<string>
using namespace std;
class InvalidAgeException
{
 public:
   string message;
   InvalidAgeException(string msg)
   {
     message=msg;
   }
};
class Person
{
 int age;
 public:
  void setAge(int a)
  {
    if(a<0 || a>120)
    {
        throw InvalidAgeException("Invalid age!must be between 0 and 120 !");
    }
    age=a;
  }
  void display()
  {
    cout<<"Age"<<age<<endl;
  }
};
int main()
{
 Person p;
 int age;
 cout<<"Enter Age";
 cin>>age;
 try
 {
   p.setAge(age);
   p.display();
 }
 catch(InvalidAgeException e) 
 {
    cout<<"Exception:"<<e.message<<endl;
 }
 return 0;
}
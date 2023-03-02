#include<iostream>
using namespace std;
class overloading
{
 public :
 //Add@2ii
  int Add(int a,int b)
  {
    cout<<"Addition of 2 integers\n";
    return a+b;

  }
  //Add@2ff
  float Add(float a,float b)
  {

    cout<<"Addition of float\n";
    return a+b;
  }
  double Add(double a, double b)
  {


    cout<<"Addition of double\n";
    return a+b;
  }
  //Add@3iii
 int Add(int a,int b, int c)
 {

    cout<<"Addition of 3 integer \n";
    return a+b+c;
 }
//fun@2if
 void fun(int a,float b)
 {}
 //fun@2fi
 void fun(float x,int y)
 {}
};
int main()
{
overloading obj;
int i;
float f;
double d;
 i=obj.Add(10,20);
 cout<<i<<"\n";
 i=obj.Add(10,20,30);
 cout<<i<<"\n";
d=obj.Add(10.3,55.3);
cout<<d<<"\n";

f=obj.Add(10.20f,44.22f);
cout<<f<<"\n";
 return 0;   
}
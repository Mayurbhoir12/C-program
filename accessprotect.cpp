#include<iostream>
using namespace std;
class base
{
public :
int i;
private :
int j;
protected :
int k;
public :
base()
{

  i=10;
  j=20;
  k=30;  
}



};
class derived : public base
{
public:
void fun()
{

cout<<"value of public i of base:"<<i<<"\n";
//cout<<"value of private j of base:"<<j<<"\n";
cout<<"value of protect k of base:"<<k<<"\n";

}


};
int main()
{
derived obj;
obj.fun();



    return 0;
}
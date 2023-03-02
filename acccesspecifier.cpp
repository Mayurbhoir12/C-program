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

void fun()
{
cout<<"value of public i:"<<i<<"\n";
cout<<"value of private j:"<<j<<"\n";
cout<<"value of protect k:"<<k<<"\n";

}

};
int main()
{

base obj;
//cout<<"value of i:"<<obj.i<<"\n";
//cout<<"value of j:"<<obj.j<<"\n";
//cout<<"value of k:"<<obj.k<<"\n";

obj.fun();



    return 0;
}
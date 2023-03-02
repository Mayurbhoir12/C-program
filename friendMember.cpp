#include<iostream>
using namespace std;
class hello
{
    public:
    void fun();//member 
    void gun();//member
};
class Demo
{
public :
int i;
private:
int j;
protected :
int k;
public :
Demo()
{
    i=10;
    j=20;
    k=30;
}
friend void hello::fun();
friend void hello::gun();
};
void hello::fun()//member funnction
{
    Demo obj;
    cout<<"value of i:"<<obj.i<<"\n";
    cout<<"value of j:"<<obj.j<<"\n";
    cout<<"value of k:"<<obj.k<<"\n";
}

void hello::gun()//member funnction
{
    Demo obj;
    cout<<"value of i:"<<obj.i<<"\n";
    cout<<"value of j:"<<obj.j<<"\n";
    cout<<"value of k:"<<obj.k<<"\n";
}
int main()
{
    hello obj1;
    obj1.fun();
    obj1.gun();
    return 0;
}
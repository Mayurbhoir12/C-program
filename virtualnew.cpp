#include<iostream>
using namespace std;
class base
{
public :
int a,b;
    void fun()  //defin
{
   cout<<"base fun\n"; 
}
   virtual void gun()  //define
{
cout<<"base gun\n";

}
 virtual  void sun()
{
    cout<<"base sun\n";
}
virtual void run()
{
    cout<<"base run\n";
}
};
class derived:public base
{
public :
int x,y;

 void gun()  //redefine
{
    cout<<"derived gun\n";
}
virtual void run()
{
    cout<<"derived run\n";
}
virtual void man()
{
    cout<<"derived man \n";
}

};

int main()
{

base *bp=NULL;
derived obj;
bp->fun();

    return 0;
}
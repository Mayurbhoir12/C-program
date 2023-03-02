#include<iostream>
using namespace std;
class base
{
public :
int a,b;
   virtual void fun()  //defin
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
};
class derived:public base
{
public :
int x,y;
void fun()
{
    cout<<"base fun'''''\n";
}
 void gun()  //redefine
{
    cout<<"derived gun\n";
}
void run()
{
    cout<<"derived run\n";
}
void man()
{
    cout<<"derived man \n";
}
void sun()
{cout<<"derive sun\n";}
};

int main()
{
//cout<<"size of base class:"<<sizeof(base)<<"\n";
//cout<<"size of base class :"<<sizeof(derived)<<"\n";
base *bp=NULL;
derived *dp=NULL;
base bobj;
derived dobj;
bp=&bobj;
dp=&dobj;
bp=&dobj; //upcasting
//dp=&bobj;
bp->fun();
bp->gun();
bp->sun();
dp->fun();
    return 0;
}
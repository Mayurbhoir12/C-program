#include<iostream>
using namespace std;
class base
{
public:    // acces specifier
int A,B;
void fun(){   //function def

    cout<<"base fun\n";

}
void gun(int i)  //fun def
{
    cout<<"base gun \n";

}
void gun(int i,int j)  //overloaded fun def
{
    cout<<"base gun \n";
}


};
class derived :public base
{
  public :
  int X,Y;
void fun()
{
    cout<<"derived fun \n";
}
};
class derivedx :public base 
{
 public :
 int m, s;
 void fun()
 {
    cout<<"derivedx fun \n";

 }
};

int main()

{
    derivedx   obj;
    obj.derivedx::fun();
    derived obj1;
    obj1.derived::fun();
    derivedx obj2;
    obj2.derivedx::fun();





    return 0;
}
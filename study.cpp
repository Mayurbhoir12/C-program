#include<iostream>
using namespace std;
class base
{
public :
int A,B;
base()
    {
cout<<"base constructor\n";
   

    }
    
    ~base()
    {
        cout<<"base destructor\n";
    }
    void fun()
    {

        cout<<"base fun \n";

    }

};
class derived :public base
{
public :
int X,Y;
derived()
{
    cout<<"derived  constructor\n";

}
~derived()
{
    cout<<"derived destructor\n";
}
void gun()
{
    cout<<"destructor  gun\n";
}
};
 int main()
 {

base obj;
obj.fun();
return 0;
 }
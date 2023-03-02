#include<iostream>
using namespace std;
class base1 
{ 
public :
int A;
base1()
{
    cout<<"inside base1 constructor\n";
}
~base1()
{

    cout<<"inside base1 destructor\n";
}
void fun()
{

    cout<<"inside base1 fun\n";
}


};
class base2
{
public:
int i,j,k;


base2()
{
    cout<<"inside base2 constructor\n";
}
~base2()
{

    cout<<"inside base2 destructor\n";
}
void gun()
{

    cout<<"inside base2 gun\n";
}
};
class derived :public base2,public base1
{
public :
int x,y;
derived()
{

    cout<<"inside derived constructor\n";
}
~derived()
{
    cout<<"inside derived desturctor\n";

}
void sun()
{


    cout<<"inside derived sun \n";
}
};
int main()
{

derived dobj;
dobj.fun();
dobj.gun();
dobj.sun();


    return 0;
}
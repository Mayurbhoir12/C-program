#include<iostream>
using namespace std;
  
class base
{
public :
int A,B;
  base()
  {
cout<<"inside base constructor\n";

  }
~base()
{
    cout<<"inside base destructor\n";
}
void fun()
{

cout<<"inside base fun\n";
}

};
class derived :public base
{
public :
int X,Y;

derived()
{

    cout<<"inside derived constructor\n";

}
~derived()
{

    cout<<"inside derived destructor\n";

}

void gun()
{

    cout<<"inside gun of derived \n";
}

};

int main()
{
class derived obj;
cout<<sizeof(obj)<<"\n";
derived * ptr=NULL;
ptr= new derived;
ptr->fun();
ptr->gun();


delete ptr;


    return 0;
}
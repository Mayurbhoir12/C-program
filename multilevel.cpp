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
class derivedx : public derived
{

public :

int M,S;
derivedx()
{

cout<<"inside derivedx constructor\n";

}
~derivedx()
{
    cout<<"inside derivedx destructor\n";
}
void sun()
{

    cout<<"inside derivedx sun\n";
}
};
int main()
{
cout<<"size of base:"<<sizeof(base)<<"\n";
cout<<"size of deriveed :"<<sizeof(derived)<<"\n";
cout<<"size of derivedx:"<<sizeof(derivedx)<<"\n";
derivedx dobj;
dobj.fun();
dobj.gun();
dobj.sun();


    return 0;
}
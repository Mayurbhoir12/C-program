#include<iostream>
using namespace std;
class sai
{
  public :
  int x;
  int y;
  sai()
  {

    x=0;
    y=0;

  }


sai(int X,int Y)
{

    x=X;
    y=Y;

}

int Addition()
{

    return x+y;

}
int  substraction()
{

    return x-y;


}

};
int main()

{

sai obj1;
sai obj2(66,99);
int  ret=0;
ret=obj1.Addition();
cout<<"Addition is :"<<ret<<"\n";
ret=obj2.substraction();
cout<<"substraction is :"<<ret<<"\n";





    return 0;
}
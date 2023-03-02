#include<iostream>
using namespace std;
class aai     //access specifier
{
public:     
int iNo1;  //characteristic
int iNo2; //characteri
aai()
{
    iNo1=0;
    iNo2=0;
}
aai (int A,int B)
{

    iNo1=A;
    iNo2=B;
}
int Addition()
    {

        return iNo1 + iNo2;
    }
int substraction()
    {

        return iNo1 - iNo2;
    }

};

int main()
{
 aai aobj1;
 aai aobj2(11,22);
 int Ret=0;
 Ret=aobj1.Addition();
 cout<<"Addition is :"<<Ret<<"\n";
 Ret=aobj2.substraction();
 cout<<"substraction is :"<<Ret<<"\n";


 return 0;
}
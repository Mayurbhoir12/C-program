#include<iostream>
using namespace std;
class mai
{
  public :
  int iNo1;
  int iNo2;

  mai()
  {
   iNo1=0;
   iNo2=0;


  }
  mai(int A,int B)
  {

  iNo1=A;
  iNo2=B;
  ~mai()
  {  

  cout<<"inside thr descontructor";
  }

  }
  int Addition()
  {

    return iNo1 + iNo2;

  }
int multiplication()
{


    return iNo1 * iNo2;

}
};
int main()
{
     mai obj1;
     mai obj2(30,55);
     int Demo=0;
     Demo=obj2.Addition();
     cout<<"Addition is :"<<Demo<<"\n";
     Demo=obj2.multiplication();
     cout<<"multiplication"<<Demo<<"\n";
    Demo=obj1.multiplication();
    cout<<"multiplication is :"<<Demo<<"\n";


    return 0;
}

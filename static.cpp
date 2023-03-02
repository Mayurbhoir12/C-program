#include<iostream>
using namespace std;
class Demo
{
public :
      int i;      
      int j;
      static int k;
      static int l;
      
   Demo()
   {
    i=0;
    j=0;
    }
   Demo(int a,int b)
   {
      i=a;
      j=b;
   }
   void fun()
   {

    cout<<"value of i :"<<this->i<<"\n";
   }
   static void gun()
   {

    cout<<"value in k:"<<k<<"\n";
   }
};
int Demo::k=0;
int Demo::l=0;

int main()
{
cout<<"value of k:"<<Demo::k<<"\n";
cout<<"value of l:"<<Demo::l<<"\n";
Demo::gun();
Demo obj1(10,20);
Demo obj2(30,40);
cout<<"value of i in obj1 :"<<obj1.i<<"\n";       //10
cout<<"value of j in obj1:"<<obj1.j<<"\n";        //20
cout<<"value of j in obj2 :"<<obj2.j<<"\n";       //40
cout<<"value of i in obj2 :"<<obj2.i<<"\n";       //30
obj1.fun();


return 0;
}
//size of object is summation of sizes of its non static characteristics
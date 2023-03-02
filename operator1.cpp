#include<iostream>
using namespace std;
class Demo
{
    public :
    int A,B;
    Demo(int i=0,int j=0)
    {
        A=i;
        B=j;
    }

};
int main()
{
Demo A;
Demo B(11);
Demo Ans(12,13);
Ans=A+B;
    return 0;

}
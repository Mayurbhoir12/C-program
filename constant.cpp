#include<iostream>
using namespace std;
class Demo
{
public:
int i;
int j;
const int k;
const int l;
Demo():k(10),l(20)
{

}
Demo(int a,int b,int c,int d):k(c),l(d)
{
    i=a;
    j=b;
}
};
int main()
{
Demo obj;
Demo obj1(11,12,13,14);

cout<<"addition"<<ret<<"\n";


obj.i++;
obj1.i++;
//obj.k++;
//obj1.k++;


    return 0;
}
#include<iostream>
using namespace std;
template <class T>
T Add(T a,T b)
{

    T ans;
    ans =a+b;
    return ans;
}
 int main()
 {
int i=10,j=90,iret=0;
float x=10.0f,y=90.0f,fret=0.0f;
iret=Add(i,j);
fret=Add(x,y);
cout<<"integer:"<<iret<<"\n";
cout<<"float:"<<fret<<"\n";
    return 0;
 }
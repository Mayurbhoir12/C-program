#include<iostream>
using namespace std;
template <class T>
T Add(T i,T j)
{
    T ans;
    ans=i+j;
    return ans;
}

int main()
{
int a=10,b=11,iret=0;
float x=90.0f,y=67.0f,fret=0.0f;
double p=90.1,q=67.8,dret=0.0;
iret=Add(a,b);
fret=Add(x,y);
dret=Add(p,q);
cout<<"addition of integer:"<<iret<<"\n";
cout<<"addition is float :"<<fret<<"\n";
cout<<"addition is double:"<<dret<<"\n";
return 0;
}
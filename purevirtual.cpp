#include<iostream>
using namespace std;
class circle
{

    public :
    float pi;
    float radius;
 circle()
 {

    pi=3.14;
    radius=0.0;

 }  
circle(float A,float B)
{
    pi=A;
    radius=B;
}
void display()
{
    cout<<"value of radius is :"<<radius<<"\n";

}
virtual float area()=0;//abstract method
virtual float circumfarance()=0;
};
class marvellous :public circle

{
public :
marvellous():circle()
{

}
marvellous(float x,float y):circle(x,y)
{

}
float area()
{
    float ans=0.0;
    ans=pi*radius *radius;
return ans;


}
float circumfarance()
{
    float ans=0.0;
    ans=2*pi*radius;
    return ans;


}
};
int main()
{
 marvellous obj;
 marvellous obj1(3.14,10.89);
 float fret=0.0;
 fret=obj1.area();
 cout<<"area is :"<<fret<<"\n";
 fret=obj1.circumfarance();
 cout<<"circumferance is:"<<fret<<"\n";
    return 0;
}

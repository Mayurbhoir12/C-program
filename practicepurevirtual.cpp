#include<iostream>
using namespace std;
class circle
{
    public :
    float si;
    float bi;
    circle()
    {
        si=10.10;
        bi=0.0;
    }
    circle(float A,float B)
    {
        si=A;
        bi=B;

    }
    virtual float area()=0;
    virtual float surface()=0;


};
class hello:public circle
{



public:
hello():circle()
{

}
hello(float x,float y):circle(x,y)
{}
float area()
{
    float ans=0.0;
    ans=si*2;
    return ans;

}
float surface()
{

float ans=0.0;
ans=2*si*bi;

return ans;

}
};
int main()
{
    hello obj;
    float demo=0.0;
    
    
    hello obj1(10.10,20.20);
   
    demo=obj1.area();
    cout<<"area is:"<<demo<<"\n";
     demo=obj1.surface();
    cout<<"surface :"<<demo<<"\n";
}
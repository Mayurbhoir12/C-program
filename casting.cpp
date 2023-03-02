#include<iostream>
using namespace std;
class base
{   

    public : //accesspecifier
    int A,B;
    
};
class derived :public base
{

    public :
    int X,Y;

};
int main()
{
base *bp=NULL;
derived *dp=NULL;
base obj;
derived obj1;
bp=&obj;
dp=&obj1;
bp=&obj1;//dp=&obj;


    return 0;
}
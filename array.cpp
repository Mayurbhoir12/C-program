#include<iostream>
using namespace std;

class Array
{
    public :
    int isize;
    int *Arr;
    Array (int ilength)
    {

        isize=ilength;
        Arr=new int[isize];
    }
    ~Array()
    {
        delete [Arr;]
    }

    
}
int main()
{
    Array obj1(4);


    return 0;
}
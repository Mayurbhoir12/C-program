#include<iostream>
//using namespace std;
namespace mayur
{
    class Demo
    {
        public :
        int i,j;
        void fun()
        {
            std::cout<<"inside fun of Demo from mayur \n";
        }
    };
         class hello
         {
            public :
               int x,y;
          };

}
namespace sanket
{
    class Demo
    {
        public :
        int a,b;
        void fun()
        {
            std::cout<<"inside fub of demo from sanket\n";
        }

    };
}
int main()
{
    mayur::Demo obj1;
    obj1.fun();
    sanket::Demo obj2;
    obj2.fun();
    return 0;
}
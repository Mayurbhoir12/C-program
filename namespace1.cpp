#include<iostream>
using namespace std;


namespace mayur
{
    class hello
    {
        public:
        int m,s;
        void sun()
        {
            cout<<"mayur\n";
        }
        void man()
        {
            cout<<"mayur1010\n";
        }

    };
}
namespace sanket 
{
    class hello
    {
        public:
        int q,w;
        void run()
        {
            cout<<"sai\n";

        }
        void kun()
        {
            cout<<"ram\n";
        }
    };
}

int main()
{
    /*mayur::hello obj;
    obj.sun();
    obj.man();
    sanket::hello obj1;
    obj1.run();
    obj1.kun();
     return 0;
     */
using namespace sanket;
hello obj;
obj.kun();



}



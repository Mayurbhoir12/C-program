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
    void display()
    {
        cout<<A<<"\n";
        cout<<B<<"\n";
    }
friend Demo operator +(Demo,Demo);
friend Demo operator -(Demo,Demo);
friend Demo operator *(Demo,Demo);

};
Demo operator +(Demo obj1,Demo obj2)
{
cout<<"inside + operator fun\n";
return Demo(obj1.A+obj2.A,obj1.B+obj2.B);
}
Demo operator -(Demo obj1,Demo obj2)
{
cout<<"inside - operator fun\n";
return Demo(obj1.A-obj2.A,obj1.B-obj2.B);
}
Demo operator *(Demo obj1,Demo obj2)
{
cout<<"inside * operator fun\n";
return Demo(obj1.A*obj2.A,obj1.B*obj2.B);
}
Demo operator /(Demo obj1,Demo obj2)
{
cout<<"inside / operator fun\n";
return Demo(obj1.A/obj2.A,obj1.B/obj2.B);
}
int main()
{
Demo X(11,22);
Demo Y(11,20);
Demo Ans(0,0);
Ans=X+Y;
Ans.display();
Ans=X-Y;
Ans.display();
Ans=X*Y;
Ans.display();
Ans=X/Y;
Ans.display();
    return 0;

}
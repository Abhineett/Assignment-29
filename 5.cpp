#include<iostream>
using namespace std;
class Invent1
{
public:

    int a,b;
public:
    Invent1(int x, int y)
    {
        a=x;
        b=y;

    }
    operator float()
    {
        return (a+b);
    }


};
class Invent2
{

    int x,y;
public:


   Invent2  (Invent1 s1)
    {
        //Invent2 temp;
        x=s1.a;
        y=s1.b;
        //cout<<temp.x<<" "<<temp.y<<endl;
        //return temp;

    }
    void dis()
    {
        cout<<x<<" "<<y<<endl;
    }
    //Invent2(){}

};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    d1.dis();
    cout<<tv<<endl;



    return 0;
}

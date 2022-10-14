#include<iostream>
using namespace std;
class complex
{
public:

    int x,y;
    void setdata(int x, int y)
    {

        this->x=x;
        this->y=y;
    }
    operator int()
    {
        return (x+y);
    }

};
int main()
{
    complex c1;
    c1.setdata(3,4);
    int x;
    x=c1;
    cout<<x;


}

#include<iostream>
using namespace std;
class complex
{

    int x;
    int y;
public:

    void display ()
    {

        cout<<x<<"+"<<y<<"!";
    }
    complex(int a)
    {
      x=a;
      y=a;

    }
};
int main()
{
    int x=5;
    complex c1=x;

    c1.display();
    return 0;
}

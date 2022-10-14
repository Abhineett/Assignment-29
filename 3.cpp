#include<iostream>
using namespace std;
class product
{

   public:
       int x,y;
       product (int a,int b)
       {
           x=a;
           y=b;
       }



};
class item
{
    int i;

public:
    void display()
    {
        cout<<i;
    }
    item(product p1)
    {
        i=p1.x+p1.y;
    }
    item(){}

};
int main()
{
   product p1(3,4);
   item i1;
   i1=p1;
   i1.display();
   return 0;



}

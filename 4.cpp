#include<iostream>
using namespace std;
class item
{
    int i;

public:
    void display()
    {
        cout<<i;
    }
    item(){}
    item(int i)
    {
      this->i=i;
    }

};
class product
{

   public:
       int x,y;
       product (int a,int b)
       {
           x=a;
           y=b;
       }
       operator item()
       {
          item i(x+y);
          return i;
       }



};

int main()
{
   product p1(3,4);
   item i1;
   i1=p1;
   i1.display();
   return 0;



}


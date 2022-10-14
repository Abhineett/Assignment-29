#include<iostream>
using namespace std;
class time
{
   int x,y;
   public:
       time(int duration)
       {
           x=duration;
           y=duration;
           this->x=this->x/60;
           this->y=this->y%60;


       }
       void display()
       {
           cout<<x<<" Minute"<<" "<<y<<" Second";
       }


};
int main()
{
   int duration;
   cout<<"Enter time duration second.";
   cin>>duration;
   time t1=duration;
   t1.display();
   return 0;

}

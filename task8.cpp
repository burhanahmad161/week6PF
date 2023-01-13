#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
string position(int h,int horizontal,int vertical);
main()
{
 int h,x,y;
 cout<<"Enter height:";
 cin>>h;
 cout<<"Enter x coordinate:";
 cin>>x;
 cout<<"Enter y coordinate:";
 cin>>y;
 int horizontal=h*3;
 int vertical=h*6; 
position(h,horizontal,vertical);
}
string position(int h,int horizontal,int vertical)
{
  if(horizontal>0 && horizontal<7 &&  vertical>=0 && vertical<9)
  {
    cout<<"Inside";
  }
   else if(horizontal==0 || horizontal==2 || horizontal==4 || horizontal==6 && vertical==2 || vertical==4 || vertical==0)
  {
    cout<<"Border";
  }
  else{
    cout<<"outside";
  }

}
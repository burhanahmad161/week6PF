#include<iostream>
#include<cmath>
using namespace std;
main()
{
  int math,chemistry,english,social,biology;
  cout<<"Enter Math marks:";
  cin>>math;
    cout<<"Enter Chemistrty marks:";
  cin>>chemistry;
    cout<<"Enter English marks:";
  cin>>english;
    cout<<"Enter Social Studies marks:";
  cin>>social;
    cout<<"Enter Biology marks:";
  cin>>biology;
  int obt_marks=math+chemistry+english+social+biology;
  float percentage=obt_marks*100/500; 
  if(percentage>=90)
  {
    cout<<"A+";
  }
   else if(percentage>=90 && percentage<90)
  {
    cout<<"A";
  }
     else if(percentage>=70 && percentage<80)
  {
    cout<<"B+";
  }
     else if(percentage>=60 && percentage<70)
  {
    cout<<"B";
  }
     else if(percentage>=50 && percentage<60)
  {
    cout<<"C";
  }
       else if(percentage>=40 && percentage<50)
  {
    cout<<"D";
  }
       else if(percentage<40)
  {
    cout<<"F";
  }
}
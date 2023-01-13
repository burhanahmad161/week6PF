#include<iostream>
#include<cmath>
using namespace std;
float bill(char code,int minutes,string time);
main()
{
   char code;
   string time;
   int minutes;
   cout<<"Enter which type of customer you are(r/p):";
   cin>>code;
   cout<<"Enter number of minutes you used service:";
   cin>>minutes;
   cout<<"Enter time of day";
   cin>>time;
   float charges=bill(code,minutes,time);
   cout<<"The charges are:"<<charges; 
}
float bill(char code,int minutes,string time)
{
    float charges;
    if(code=='r' || code=='R' && minutes>=50)
    {
        charges=minutes*10.00;
    }
    else if(code=='r' || code=='R' && minutes>50)
    {
        charges=minutes*0.20;
    }
    else if(code=='p' || code=='P' && minutes<=75 && time="day")
    {
        charges=0;
    }
    else if(code=='p' || code=='P' && minutes>75 && time="day")
    {
        charges=minutes*0.10;
    }
    else if(code=='p' || code=='P' && minutes<=100 && time="night")
    {
        charges=0;
    }
    else if(code=='p' || code=='P' && minutes>100 && time="night")
    {
        charges=minutes*0.05;
    }
  return charges;
}

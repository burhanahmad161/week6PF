#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
float coming_time(int hrs,int min,int hours,int minutes);
main()
{
    int hrs,min,hours,minutes;
    cout<<"Enter starting time(hour):";
    cin>>hrs;
    cout<<"Enter starting time(minutes):";
    cin>>min;
    cout<<"Enter arriving time(hour):";
    cin>>hours;
    cout<<"Enter arriving time(minutes):";
    cin>>minutes;
    coming_time(hrs,min,hours,minutes);
}
float coming_time(int hrs,int min,int hours,int minutes)
{
   float time;
   float time_hours,time_minutes;
   if(hours==hrs && minutes==min)
   {
      cout<<"On time!";
   }
     else if(hours==hrs)
    {
        if(minutes>min)
        {
            time_minutes=minutes-min;
            cout<<"Late"<<endl;
            cout<<time_minutes<<"minutes after the start";
        }
         if(minutes<min)
        {
            time_minutes=min-minutes;
            cout<<"Early"<<endl;
            cout<<time_minutes<<"minutes before the start";
        } 
    }
      else if(minutes==min)
    {
        if(hours>hrs)
        {
            time_hours=hours-hrs;
            cout<<"Late"<<endl;
            cout<<time_hours<<"hours after the start";
        }
         if(hours<hrs)
        {
            time_hours=hrs-hours;
            cout<<"Early"<<endl;
            cout<<time_hours<<"hours before the start";
        } 
    }
      else if(hours!=hrs && minutes!=min)
      {
        time_minutes=minutes-min;
        time_hours=hours-hrs;
        cout<<time_hours<<"hours"<<time_minutes<<"minutes earlier";
      } 
         else if(hours!=hrs && minutes!=min)
      {
        time_minutes=minutes-min;
        time_hours=hours-hrs;
        cout<<time_hours<<"hours"<<time_minutes<<"minutes late";
      } 

}
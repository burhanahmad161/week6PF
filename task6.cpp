#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
float rate_apartment(string month,string room,int days);
float rate_studio(string month,string room,int days);

main()
{
  string month,room;
  int days;
  cout<<"Enter month:";
  cin>>month;
  cout<<"Enter room type:";
  cin>>room;
  cout<<"Enter days of stay:";
  cin>>days;
  float amount=rate_apartment(month,room,days);
  cout<<"Apartment:"<<amount<<endl;
  float amount1=rate_studio(month,room,days);
  cout<<"Studio:"<<amount1;
}
float rate_apartment(string month,string room,int days)
{
    float amount;
    float bill;
   if(month=="May" || month=="October" && room=="studio"  && days>7)
   {
    bill=days*50;
    amount=bill*5/100;
   } 
   if(month=="June" || month=="September" && room=="studio"  && days>14)
   {
    bill=days*50;
    amount=bill*20/100;
   }
   if(month=="July" || month=="August" && room=="studio")
   {
    bill=days*50;
    amount=bill;
   }      
   return amount;
}
   float rate_studio(string month,string room,int days)
{
      float amount1;
      float bill;
      if(month=="May" || month=="October" && room=="apartment"  && days>14)
   {
    bill=days*65;
    amount1=bill*10/100;
   } 
   if(month=="June" || month=="September" && room=="apartment"  && days>14)
   {
    bill=days*68.70;
    amount1=bill*10/100;
   }
   if(month=="July" || month=="August" && room=="apartment" && days>14) 
   {
    bill=days*77;
    amount1=bill*10/100;
   }    
return amount1;
}
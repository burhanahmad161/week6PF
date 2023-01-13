#include<iostream>
#include<cmath>
using namespace std;
main()
{
  string temperature,humidity;
  cout<<"Enter Temperature:";
  cin>>temperature;
  cout<<"Enter humidity:";
  cin>>humidity;
  if(temperature=="warm" && humidity=="dry")
  {
    cout<<"Play tennis";
  }
  else if(temperature=="warm" && humidity=="humid")
  {
    cout<<"Swim";
  }
  else if(temperature=="cold" && humidity=="dry")
  {
    cout<<"Play basketball";
  }
  else if(temperature=="cold" && humidity=="humid")
  {
    cout<<"Watch TV";
  }

}
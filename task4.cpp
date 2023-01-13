#include<iostream>
#include<cmath>
using namespace std;
float rate(string fruit,string day,float quantity);
main()
{
    string fruit,day;
    float quantity;
    cout<<"Enter fruit name:";
    cin>>fruit;
    cout<<"Enter week day:";
    cin>>day;
    cout<<"Enter Quantity:";
    cin>>quantity;
    float price=rate(fruit,day,quantity);
    cout<<"Price is:"<<price;
}
float rate(string fruit,string day,float quantity)
{

    float price;
    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Banana")
    {
      price=quantity*2.50;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Apple")
    {
      price=quantity*1.20;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Orange")
    {
      price=quantity*0.85;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Grapefruit")
    {
      price=quantity*1.45;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Kiwi")
    {
      price=quantity*2.70;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Pineapple")
    {
      price=quantity*5.50;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" ||day=="Friday" && fruit=="Grapes")
    {
      price=quantity*3.85;
    }
    if(day=="Saturday" ||day=="Sunday" && fruit=="Banana")
    {
      price=quantity*2.60;
    }
    else if(day=="Saturday" ||day=="Sunday" && fruit=="Apple")
    {
      price=quantity*1.25;
    }
    else if(day=="Saturday" ||day=="Sunday" && fruit=="Orange")
    {
      price=quantity*0.90;
    }
    else if(day=="Saturday" ||day=="Sunday" && fruit=="Grapefruit")
    {
      price=quantity*1.60;
    }
    if( day=="Saturday" ||day=="Sunday" && fruit=="Kiwi")
    {
      price=quantity*3.00;
    }
    else if(day=="Saturday" ||day=="Sunday" && fruit=="Pineapple")
    {
      price=quantity*5.60;
    }
    else if(day=="Saturday" ||day=="Sunday" && fruit=="Grapes")
    {
      price=quantity*4.20;
    }
return price;
}
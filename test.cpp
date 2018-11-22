#include<iostream>

using namespace std;

int main()
{
int n1,n2,maxx;
cout<<"Enter the two no.\n";
cin>>n1>n2;

maxx=(n1>n2)?n1:n2;

 while(n1!=n2)
 {
  if(maxx%n1==0&maxx%n2==0)
  {
   cout<<"LCM="<<maxx;
   break;
  }
  else
  {
  maxx++;
   }

  }

 return o;
}






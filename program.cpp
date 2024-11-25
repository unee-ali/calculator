//heading file 
#include<iostream>
using nameapace std;
int main()
{ int a,b,ans;  // variable declaration 
char op;
cout<<"enter two number  "<<endl;     // taking valuess
cin>>a>>b;
cout<<"enter opertaor   "<<endl;     //taking opeator as input 
cin>>op;
switch (op)               // using switch case to make calculators
{  
case '-':{ ans=a-b;
cout<<ans;}
  case '+':{ ans=a+b;
cout<<ans;}
  case '*':{ ans=a*b;
cout<<ans;}
  case '/':{ ans=a/b;
cout<<ans;}
}}

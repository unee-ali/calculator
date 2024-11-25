#include<iostream>
using nameapace std;
int main()
{ int a,b,ans;
char op;
cout<<"enter two number  "<<endl;
cin>>a>>b;
cout<<"enter opertaor   "<<endl;
cin>>op;
switch (op)
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

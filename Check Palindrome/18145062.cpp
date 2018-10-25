#include<iostream.h>
#include<conio.h>
void main()
{
int cp,n,r,rev;
cout<<"enter the number you want to check for";
cin>>n;
cp=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
cout<<"reverse of num is"<<rev;
if(rev==cp)
cout<<"num is palindrome";
else
cout<<"not a palindrome";
getch();
}

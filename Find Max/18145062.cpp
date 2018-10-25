#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,m;
cout<<"enter the number of terms in array";
cin>>n;
int a[n];
for (int i=0;i<n;i++)
cin>>a[i];
m=a[0];
for (int i=1;i<n;i++)
if (a[i]>m)
m=a[i];
cout<<"max is"<<m;
getch();
}

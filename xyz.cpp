a#include<iostream>
using namespace std;
int main()
{
	int a[10],i,k;
	cout<<"Enter the eliment of number:-";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"-:Find number is:-"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	k=a[0];
	for(i=0;i<=10;i++)
	{
		if(a[i]<k)
		{
			k=a[i];
		}
	}
	cout<<"Minimum number:-\t"<<k<<endl;
	for(i=0;i<10;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
		}
	}
	cout<<"Maximium number is:-\t"<<k<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class Array
{
	private : 
		int a[10],b[10],i,j,n;
	public : 
		void getdata()
		{
			cout<<"\n Enter Number of Elements : ";
			cin>>n;
			cout<<"\n Enter Array 1 : ";
			for(i=0;i<n;i++)
			{
					cin>>a[i];		
			}
			cout<<"\n Enter Array 2 :  ";
			for(i=0;i<n;i++)
			{
					cin>>b[i];		
			}
		}	
		void putdata()
		{
			cout<<"\n Array 1 : ";
			for(i=0;i<n;i++)
			{
					cout<<a[i];		
			}
			cout<<"\n Array 2 : ";
			for(i=0;i<n;i++)
			{
					cout<<b[i];	
			}
		}
};
int main()
{
	Array obj;
	obj.getdata();
	obj.putdata();	
	return 0;
}

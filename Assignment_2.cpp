// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class String
{
	private : 
		char str[50],target;
		int i,count=0;
	public : 
	void getstr()
	{
		cout<<"\n Enter String : ";
		cin.get(str,50);
	}
	void putstr()
	{
		cout<<"\n Your String is : "<<str;
	}
	void occur()
	{
		cout<<"\n Enter Target : ";
		cin>>target;
		for(i=0;i<str[i] != '\0';i++)
		{
			if(str[i]==target)
			{
				count++;
			}
		}
		cout<<"'"<<target<<"'"<<" has occured "<<count<<" times in String";
	}
	void extract()
	{
		int start,length;
		cout<<"\n Enter Start : ";
		cin>>start;
		cout<<"\n Enter Length : ";
		cin>>length;
		cout<<"\n Extracted String is : ";
		for(i=start;i<length+start;i++)
		{
			cout<<str[i];
		}
	}
};
int main()
{
	String obj;
	obj.getstr();
	obj.putstr();
	obj.occur();
	obj.extract();

	return 0;
}
// OUTPUT
/*
 Enter String : Harshal Patil

 Your String is : Harshal Patil
 Enter Target : a
'a' has occured 3 times in String
 Enter Start : 3

 Enter Length : 5

 Extracted String is : shal
*/

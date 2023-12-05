#include<iostream>
using namespace std;
class Stack
{
  private:
  int arr[50];
  int maxcapacity;
  int top;
  
  public:
  Stack()
  {
    maxcapacity=50;
    top=-1;
  }
  
  int getTop();
  int pop();
  void push(int ele);
  int empty();
  int currsize();
  int IsFull();
};

int Stack :: getTop()
{
  if(top==-1)
   {
   cout<<"\nstack overflow";
   }
  else
  { 
    return(arr[top]);
  }  
}
int Stack :: pop()
{
   if(top==-1)
   {
     cout<<"\nstack underflow";
   }
   else
   {
    return(arr[top--]);
   }
}
void Stack :: push(int ele)
{
   if(top==-1)
    {
     cout<<"\nstack overflow";
    }
   else
   {
    top++;
    arr[top]=ele;
   }
}
int Stack :: empty()
{
  if(top==-1)
   {
    return 1;
   } 
  else
  { 
   return 0;
  }
}

int Stack :: currsize()
{
  cout<<"\nthe current size is";
  
  return(top+1);
}

int Stack :: IsFull()
{
  if(top == maxcapacity -1)
    {
     return 1;
    }  
  else 
    {
    return 0;
    }
}

int main()
{
   Stack obj;
  
   obj.push(1);
   obj.push(2);
   obj.push(3);
   obj.push(4);
   cout<<obj.empty()<<endl;
   cout<<obj.getTop()<<endl;
   cout<<obj.IsFull()<<endl;
   cout<<obj.pop()<<endl;
   return 0;
}  
   
                  
              
           

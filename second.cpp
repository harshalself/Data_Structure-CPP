#include <iostream>
#include<string.h>
using namespace std;

class Second{
    public:
    string str;
    char a;
    int count=0;  
    int index;
    int length;
    int j;
    int c=0;
    int k;
    string str2;
    char str3[100];
    string w;
    string x;
   
   
   
   
   
    void accept(){
        cout << "Enter a string"<<endl;
        getline(cin, str);
        cout << endl << "You entered: "<<str<<endl;
    }
   
    void one(){
        //1. To determine the frequency of occurence of a particular character in the string
       
        cout << "Enter the character that to be checked for frequency of occurence: "<<endl;
        cin >> a;
       
       
        for(int i=0; i<str.size(); i++){
       
          if(str[i]==a){
            ++count;
          }
       
        }
       
        cout << a<<" character occured " << count << " times in string "<<str<<endl;
       
    }
   
   
    void two(){
        //2.  Extract a new string from original string by accepting starting position and length
        cout << "Enter starting position: "<<endl;
        cin >> index;
        cout << "Enter Length of string"<<endl;
        cin >> length;
        //method 1
        while(c<length){
       
        str3[c]=str[index+c-1];
        c++;
       
        }
        str3[c]='\0';
        cout<<"Your substring is: "<<str3<<endl;
       
       
        //method 2
        for(j=0; str[index]!='\0' && length>0;index++,j++){   //\0 means append
       
        str2[j]=str[index];
        length--;
       
        }
        str2[j] = '\0';
        cout<<endl;
        cout<<"Your substring is: "<<endl;
        for(int k=0;str2[k]!='\0';k++)
           cout<<str2[k];
           cout <<endl;

    }
   
    void three(){
        //3. To accept any character and return the string with by removing all occurences of a character accepted  
        cout << "Removing character "<<a<< " from string "<< str<< endl;
          for(int l=0; l<str.size(); l++){
         
          if(str[l]!=a){
          cout<<str[l];
          }
 
  }
  cout<<endl;
    }
   
    void four(){
    //4. to make an inplace replacement of a substring w of a  string by the string x. note that w may not be of same size that pof x.
    cout <<"To make an inplace replacement of a substring w of a  string by the string x. note that w may not be of same size that pof x."<<endl;
   
    cout << "Enter the string to be replaced:" <<endl;
    cin>>w;
    cout<<"Enter the string to replace the given string:"<<endl;
    cin>>x;
    int sublength = str.size();
   
    for(int n=0; str[n]!='\0';n++)
    {
    if(str[n]==w[0]){
   
     bool b1;
     int r=n;
     
     for(int q=0; w[q]!='\0';q++){
        if(w[q]==str[r]){
          b1=true;
        }
        else{
          b1=false;
        }
          r++;
        }
        if(b1){
        n+=sublength;
        cout<<"Replacement: "<<n;
       
        for(int v=0;v<sublength;v++){
        if(str[v]==w[0]){
        cout<<x;
        v++;
        }
        cout<<str[v];
        }
       
     }
    }
    else{
    cout<<str[n];
    }
   
    }
   
    cout<<endl<<endl;
    }
   
 
 
  void five(){
       int lengths = str.length();  
       int flag=0;
       for(int m=0;m< lengths ;m++)
        {
                if(str[m] != str[lengths-m-1])
                {
                        flag = 1;
                        break;
                }
        }    
        if(flag)
        {
                cout<<" "<<str<<" is not a palindrome"<<endl;
        }    
        else
        {
                cout<<" "<<str<< " is a palindrome"<<endl;
        }
  }
   
};


int main(void){

Second s1;
s1.accept();


int ch;
cout << "Enter Your Choice: " << endl << "1. To determine the frequency of occurence of a particular character in the string" << endl << "2. Extract a new string from original string by accepting starting position and length" << endl << "3. To accept any character and return the string with by removing all occurences of a character accepted"<<endl<<"5. to check whether the string is palindrome or not"<<endl;
cin>>ch;
switch(ch){
    //1. To determine the frequency of occurence of a particular character in the string
    case 1:
    s1.one();
    //2. Extract a new string from original string by accepting starting position and length
    case 2:
    s1.two();
    //3. To accept any character and return the string with by removing all occurences of a character accepted
    case 3:
    s1.three();
    //4. to make an inplace replacement of a substring w of a  string by the string x. note that w may not be of same size that pof x.
    case 4:
    s1.four();
    //5. to check whether the string is palindrome or not
    case 5:
    s1.five();
    break;
    default:
    cout<<"Invalid Choice"<<endl;  
}
   return 0;
}

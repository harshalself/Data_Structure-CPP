// Shreeyan M Patil//
/* Sparse Matrix: Write a menu driven C++ program with class for Sparse
Matrix. Write functions to perform Sparse Matrix operations as listed
below
1. Read sparse matrix
2. Display sparse matrix
3. Add two sparse matrices
4. Find transpose using Simple transpose algorithm
5. Find transpose using Fast transpose algorithm
Compare complexity of simple and fast transpose using counter. 
*/

#include<iostream>
using namespace std;
class sparse
{
        public:
        int a[3][3],b[3][3],res[3][3];
        int f[3][3];
        int i,j,k,l;
        int zeros = 0;
        void read()
        {
               cout<<"\n\t enter the matrix 1";
               
                for(i=0;i<3;i++)
                {
                        
                        for(j=0;j<3;j++)
                        {
                                cout<<"\t";
                                cin>>a[i][j];
                        }
               }
               cout<<"\n ----------------------------------------------";
               cout<<"\n\t enter the matrix 2  :";
               for(i=0;i<3;i++)
               {
                        
                        for(j=0;j<3;j++)
                        {
                                cout<<"\t ";
                                cin>>b[i][j];
                                 if(a[i][j]== 0)
                                 {
                                    zeros++;

                                  }
                        }
            }
            if(zeros > (3*3)/2) 
            {
                 cout<<"The matrix 1 is a sparse matrix";
                 cout<<"\n\t";
            }

            else
            {   

                cout<<"The matrix 1 is not a sparse matrix";
                cout<<"\n\t";
            }
         for(i=0,zeros=0;i<3;i++)
         {
                for(j=0;j<3;j++)       
                {
                        if(b[i][j] == 0)
                         {

                                zeros++;

                        }
                }
          }
          if(zeros > (3*3)/2) 
          {
                 cout<<"The matrix 2 is a sparse matrix";
                 cout<<"\n\t";
           }
          else
          {   

                cout<<"The matrix 2 is not a sparse matrix";
                cout<<"\n\t";
         }

        }
        
        void display()
        {
                cout<<"\n\t matrix  1 is ";
                for(k=0;k<3;k++)
                {
                     cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<a[k][l]<<"\t";
                      }
                }
                cout<<"\n\t matrix 2 is ";
                cout<<"\n";
                for(k=0;k<3;k++)
                {
                     cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<b[k][l]<<"\t";
                      }
                }
        }
        void add()
        {
                for(i=0;i<3;i++)
                {
                        for(j=0;j<3;j++)
                        {
                           res[i][j] = a[i][j] + b[i][j];
                                
                        }
                }
                cout<<"\n\t matrix addition  is ";
                cout<<"\n";
                for(k=0;k<3;k++)
                {
                     cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<res[k][l]<<"\t";
                      }
                }
        }
        void transpose()
        {
            cout<<"\n\t matrix  transpose of 1  is ";
                for(k=0;k<3;k++)
                {
                      cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<a[l][k]<<"\t";
                      }
                }
                cout<<"\n\t matrix  transpose of 2  is ";
                for(k=0;k<3;k++)
                {
                     cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<b[l][k]<<"\t";
                      }
                }
                cout<<"\n\t matrix  transpose of addition  is ";
                for(k=0;k<3;k++)
                {
                     cout<<"\n";
                      for(l=0;l<3;l++)
                      {
                         cout<<res[l][k]<<"\t";
                      }
                }        
        }
        void fast()
        {
                  cout<<"\n\t fast transpose of matrix A is : ";
                for(i=0;i<3;i++)
                {
                        for(j=0;j<3;j++)
                        {
                             cout<<"\t";
                                
                                if(a[i][j]!=0)
                                {
                                        
                                        f[i][j] = a[i][j];
                                        
                                        cout<<f[i][j];
                                        
                                }
                                else
                                {
                                        f[i][j]= " ";
                                }
                                
                        }
                }
                cout<<"\n\t fast transpose of matrix B is : ";
                 for(i=0;i<3;i++)
                {
                        for(j=0;j<3;j++)
                        {
                                int c;
                                if(b[i][j]!=0)
                                {
                                        c=b[i][j];
                                        
                                        cout<<"\n\t"<<c;
                                }
                                else
                                {
                                        cout<<"  ";
                                }
                        }
        }
        }
};
int main()
{
        int ch;
        sparse s;
        
        
        cout<<"\n\t MENU  :";
        cout<<"\n\t read the matrix :  ---1 : ";
        cout<<"\n\t display the matrix : ----2: ";
        cout<<"\n\t add the matrix : ----3: ";
        cout<<"\n\t transpose the matrix : ----4: ";
        cout<<"\n\t fast transpose the matrix : ---5";
        cout<<"\n\t exit : ----6: ";
        
        
        do{
                cout<<"Enter your choice:"<<endl;
                cin>>ch;
          switch(ch)
          {
                case(1) :
                {
                        s.read();
                        
                        break;
                 }
                
                case(2) :
                {
                        s.display();
                        
                        break;
                }
                case(3) :
                {
                       s.add();
                       
                       break;
                }
                case(4) : 
                {
                        s.transpose();
                        
                        break;
                }
                case(6) :
                {
                        break;
                }
                case(5) :
                {
                        s.fast();
                        break;
                }
                default:
                {
                        cout<<"\n\t";
                        break;
                }
         }
       }while(ch!=5);
        
        return 0;
}

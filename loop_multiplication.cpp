#include <iostream>  
using namespace std;  
int main()  
{  
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k; 

      //input values of  rows and columns 
    cout<<" number of row=";    
    cin>>r;    
    cout<<"number of column=";    
    cin>>c;    

    //elements of 1st matrix
    cout<<"enter the first matrix element=\n";    
    for(i=0;i<r;i++)    

    for(j=0;j<c;j++)    
        cin>>a[i][j];     

    //elements of 2nd matrix   
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<r;i++)    
    {    
      for(j=0;j<c;j++)        
      cin>>b[i][j];    
    }    

    cout<<"multiply of the matrix=\n";    

    // 3-loop multiplication of 2 matrices
    for(i=0;i<r;i++)    
    {    
      for(j=0;j<c;j++)    
      {    
      mul[i][j]=0;    
        for(k=0;k<c;k++)    
        {    
          mul[i][j]+=a[i][k]*b[k][j];    
        }    
      }    
    }    

    //for printing result    
    for(i=0;i<r;i++)    
    {    
      for(j=0;j<c;j++)        
        cout<<mul[i][j]<<" ";    

      cout<<"\n";    
    }    
return 0;  
}

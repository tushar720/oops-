# include <iostream>
using namespace std;
void read(int matrix[100][100],int x,int y);
void display(int mat[100][100],int x,int y);
int main()
{
    int mat[100][100],m,n;
    cout<<"enter no of rows \n";
    cin>>m;
    cout<<"enter no of columns \n";
    cin>>n;
    
    cout<<"enter ur elements of matrix \n";
    read(mat,m,n);
    cout<<"u have entered the following matrix \n";
    display(mat,m,n);
    
    return 0;
}
void read(int matrix[100][100],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
         for(j=0;j<y;j++)
         {
             cin>>matrix[i][j];}
}
void display(int matrix[100][100],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
           for(j=0;j<y;j++)
           {
               cout<<matrix[i][j]<<" ";
           }
           cout<<endl;
    }
}

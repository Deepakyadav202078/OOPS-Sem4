/*C++ program to read matrix of size m x n using function*/
#include<iostream>
using namespace std;
void getarray(int a[10][10],int x,int y);
int main()
{
    int a[10][10],m,n,i,j;
    cout<<"Enter the value of m and n : ";
    cin>>m>>n;
    getarray(a,m,n);
    cout<<endl;
    cout<<"You have entered following matrix"<<endl;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
void getarray(int a[10][10],int x,int y)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cout << "Enter the element present at " << i << "row and "<< j << "column: ";
            cin>>a[i][j];
        }
    }
}

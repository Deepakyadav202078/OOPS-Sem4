/* Program to show the effect of default arguments can be alternatively achieved by overloading.*/
#include <iostream>
using namespace std;
int power(int n,int m)
{
    int i;
   int result=1;
    for(i=0;i<m;i++)
    {
        result=result*n;
    }
    return result;
}
int power(int n)
{
    int i;
    int m=2;
   int result=1;
    for(i=0;i<m;i++)
    {
        result=result*n;
    }
    return result;
}


int main()
{
    
cout<<power(3,4);
    return 0;
}

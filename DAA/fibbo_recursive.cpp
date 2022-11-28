#include<iostream>
using namespace std;
void fibbonacci(int n)
{
    static int n1=0,n2=1,n3=0;
    if(n>0)
       {
           n3=n1+n2;
           n1=n2;
           n2=n3;
           cout<<n3<<" ";
           fibbonacci(n-1);
       }
}
int main()
{
    int number;
    cin>>number;
    cout<<"0 "<<"1 ";
    fibbonacci(number-2);
}

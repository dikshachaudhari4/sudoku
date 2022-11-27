#include<iostream>
using namespace std;
int fibbonacci(int n)
{
    if(n<=1)
        return n;
    else
        return(fibbonacci(n-1)+fibbonacci(n-2));
}
int main()
{
    int number;
    cout<<"enter number : ";
    cin>>number;
    for(int i=0;i<number;i++)
        cout<<fibbonacci(i)<<" ";
}

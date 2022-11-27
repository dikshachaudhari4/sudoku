#include<iostream>
using namespace std;
void fibbonacci(int number)
{
    int num1=0,num2=1,temp=0;
    cout<<num1<<" "<<num2<<" ";
    for(int i=0;i<number;i++)
    {
        temp=num1+num2;
        cout<<temp<<" ";
        num1=num2;
        num2=temp;
    }

}
int main()
{
    int number;
    cout<<"enter number : \n";
    cin>>number;
    fibbonacci(number);
}

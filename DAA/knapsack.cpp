#include<bits/stdc++.h>
using namespace std;


//nlogn

struct Item{
int value,weight;
Item(int value,int weight)
{

    this->value=value;
    this->weight=weight;
}
};
bool cmp(struct Item a,struct Item b)
{
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return(r1>r2);

}
double fractionalknapsack(struct Item arr[],int limit,int arrsize)
{
    int currweight=0;
    double finalvalue=0.0;
    sort(arr,arr+arrsize,cmp);
    for(int i=0;i<arrsize;i++)
    {
        if(currweight+arr[i].weight<=limit)
        {
            currweight+=arr[i].weight;
            finalvalue+=arr[i].value;
        }
        else{
            int remain=limit-currweight;
            finalvalue+=arr[i].value*((double)arr[i].weight/remain);
            break;
        }
    }
    return finalvalue;
}
int main()
{
    int Limit=60;
    Item arr[]={{100,10},
                {280,40},
                {120,20},
                {120,24}
               };
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    cout<<fractionalknapsack(arr,Limit,arrsize);

}

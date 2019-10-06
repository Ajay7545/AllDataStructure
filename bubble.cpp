#include<iostream>
#include<bits/stdc++.h>
#include<assert.h>
using namespace std;

/*
    Invariant: At every round the largest value in the array will be placed at the last index
    Pre-condition: Array size should not be less than 0 for sorting
    Post-condition: The values in array will be shorted .
*/
void bubble(int a[],int n)          //Routine
{

    int temp;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
       {
        if(a[j]>a[j+1])
        {
        flag=1;             //checking value is swapped or not
        a[j+1]=a[j]+a[j+1];
        a[j]=a[j+1]-a[j];
        a[j+1]=a[j+1]-a[j];
        }

        //a=5 b=2 a=2 b=3
        //b=a+b =7 b=a+b=5
        //a=b-a =2 a=b-a=3
        //b=b-a=5  b=b-a=2
       }
//    k++;
    if(flag==0)
    {
        cout<<"round="<<i+1<<endl;
        return;
    }
    }

}
int main()
{
    int n;
    cin>>n;
    assert(n>0);
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //int a[n]={10,98,97,95,68,2,25,18,15};

    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

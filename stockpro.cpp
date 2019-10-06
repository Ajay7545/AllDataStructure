#include<iostream>
#include<bits/stdc++.h>
#include<assert.h>
using namespace std;
void funfind(int *a,int n);
int main()
{
     /*
    Invariant: At each point index of present val will always less than right index elements
    Pre-condition: Array size should not be less than 1
    Post-condition: The beginning index value should be min from all the value present at right indexes till the last index chosen
    */
   int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,index=0;
        cin>>n;
    assert(n>=1);           //Assertion
        int a[n];
        for(i=0;i<n;i++)
        {cin>>a[i];}


        funfind(a,n);
     }
}

 void funfind(int *a,int n)
     {  int j;
        int k=0,set=0,p=0;
        int index,i=0;
         for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j] && a[j-1]<a[j])
                {   p=1;
                    index=i;
                    k=j;
                    set=1;
                }
                else if(set && a[k]>a[j])
                { cout<<"("<<index<<" "<<k<<")"<<" ";
                  i=j;set=0; p=1;}
                else
                {i=j;set=0;}
        }
        if(set && a[i]<a[j-1] &&a[j-2]<a[j-1] && j==n)
        {cout<<"("<<index<<" "<<k<<")"<<" ";}
        if(p==0)
        cout<<"No Profit"<<" ";

        cout<<endl;
     }

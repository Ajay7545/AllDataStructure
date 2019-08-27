#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,index=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {cin>>a[i];}

        int k=0,set=0,p=0;
        i=0;
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
}

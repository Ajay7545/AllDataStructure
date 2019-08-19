#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n],b[3]={0,0,0};

        for(int k=0;k<n;k++)
        {cin>>a[k];}

        for(int j=0;j<n;j++)
        {
            if(a[j]==0)
            b[a[j]]++;
            else if(a[j]==1)
            b[a[j]]++;
            else
            b[a[j]]++;
        }
        int aa=b[0],bb=b[1],cc=b[2];
        while(aa>0)
        {cout<<0<<" ";
        aa--;}
        while(bb>0)
        {cout<<1<<" ";
        bb--;}
        while(cc>0)
        {cout<<2<<" ";
        cc--;}
        cout<<endl;

        }
}

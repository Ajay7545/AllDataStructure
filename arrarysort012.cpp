#include<iostream>
#include<bits/stdc++.h>
#include<assert.h>
using namespace std;
void printarr(int *a,int n);
int main()
{
     /*
    Invariant: At each index, at 0th index count 0s ,at 1th index 1s count  2s count at index 2.
    Pre-condition:vaues shoud not be other than 0,1,2
    Post-condition: a the eemnt in an array had stored 0,1,2 count ony.
    */
    int t;
    cout<<"Nmbr of testcase:";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"enter array size:";
        cin>>n;
        int av[n];
        cout<<"enter values in array 0,1,2:";
        for(int k=0;k<n;k++)
        {   int val;
            cin>>val;
            assert(val>=0);         //PRE CONDITION  INPUT VALUES SHOULD BE 0,1,2, IN AN ARRAY
            assert(val<=2);
            av[k]=val;
        }
        printarr(av,n);
    }
}

void printarr(int *a,int n)  //ROUTINES
{
    int b[3]={0,0,0};
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

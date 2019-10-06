#include<iostream>
#include<bits/stdc++.h>
#include<assert.h>

using namespace std;
int fab(int n);

int main()
{
     /*
    Invariant: Sum of previous 2 index value is value of present index value
    Pre-condition:Number should not be negative
    Post-condition: recursion call completed we had got the value
    */
    int t;
    cout<<"Number of testcases: ";
    cin>>t;

    while(t--)
    {   int val;
        int n;
        cout<<"enter array size:";
        assert(n>0);
        cin>>n;
        val=fab(n);
        cout<<"The value of fibonacci:"<<val;
        cout<<"\n";
    }
}

int fab(int n)
{
    if(n==2 || n==1)
        return 1;
    return fab(n-1)+fab(n-2);
}

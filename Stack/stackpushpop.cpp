
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _getMinAtPop(stack<int>s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;



	}
	return 0;
}

stack<int>_push(int arr[],int n)
{   stack<int> s;
    for(int i=0;i<n;i++)
    s.push(arr[i]);

    return s;
}
long long int minv(stack<int> s3)
{
    long long int min=s3.top();

    while(!s3.empty())
    {
        if(min>s3.top())
        {
            min=s3.top();
        }
    s3.pop();
    }
    return min;
}
void _getMinAtPop(stack<int>s)
{

    while(!s.empty())
    {
        stack<int> s2;
        s2=s;
        long long int val=minv(s2);

        cout<<val<<" ";

        s.pop();

    }
}

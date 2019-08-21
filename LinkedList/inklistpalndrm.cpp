#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

bool isPalindrome(Node *head)
{
    if(head==NULL)
    return 1;
    if(head->next==NULL)
    return 1;

    /*Node *s=NULL;
    Node *t=head;
    Node *u=head->next;
    */
    int a[50]={0},i=0;
    Node *t=head;
    while(t->next!=NULL)
    {
        a[i]=t->data;
        i++;
        t=t->next;
    }
    a[i]=t->data;

    int end=i;
    int val=1;
    i=0;
    while(i!=end && end!=0)
    {
        if(a[i]!=a[end])
        {
            val=0;
            break;
        }
        i++;end--;
    }

    //cout<<ca<<" ";
    /*while(u->next!=NULL)
    {   a[i]=u->data;
        i++;
        s=t;
        t=u;
        u=u->next;
        t->next=s;
        ca++;
    }*/
    /*ca=(ca+2)/2;
    head->next=NULL;
    u->next=t;
    int val=1,half=0;
    i=0;
    while(u->next!=NULL && ca!=i)
    {   cout<<a[i]<<" ";
        /*if(u->data!=a[i])
        {val=0; break;}
        ca--;
        u=u->next;i++;
    }*/
    return val;
}

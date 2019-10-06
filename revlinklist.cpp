#include<iostream>
#include<bits/stdc++.h>
#include<assert.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
{
    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
struct Node *reverseList(struct Node *head);
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}
/*
    Invariant: The pointer had pointed reversed till the ith index reached
    Pre-condition: the linked list should contain atleast 2 node to reverse or 1 node to return
    Post-condition: The link list had been reversed
*/

int main()
{
    int T,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        assert(n>1);            //Assertion
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
       head = reverseList(head);
       printList(head);
       cout << endl;
    }
    return 0;
}

Node* reverseList(Node *head)           //Routine
{
    Node *s=head;
    Node *t=head;
    Node *u=head;

    if(s->next==NULL)
    return s;                       //1 node in link list

    if(s->next->next==NULL)
    {
        t=s->next;
        t->next=s;
        t->next->next=NULL;
        return t;
    }
    s=NULL;
    t=head;
    u=t->next;

    while(u->next!=NULL)
    {
        s=t;
        t=u;
        u=u->next;
        t->next=s;
    }
    head->next=NULL;
    u->next=t;
    return u;
}

#include<iostream>
#include<bits/stdc++.h>

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
/* Driver program to test above function*/
int main()
{
    int T,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
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

// Should reverse list and return new head.
Node* reverseList(Node *head)
{
    Node *s=head;
    Node *t=head;
    Node *u=head;

    if(s->next==NULL)
    return s;

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

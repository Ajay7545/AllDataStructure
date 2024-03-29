#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head);
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
    printf("%d", getMiddle(head));
    }
    return 0;
}

int getMiddle(Node *head)
{
    Node * p1=head;
    Node * p2=head;

    if(head==NULL)
    return 0;
    else if(p1->next==NULL)
    return p1->data;
    else if(p1->next->next==NULL)
    return p1->next->data;

    else if(p1->next->next->next->next==NULL)
    return p1->next->next->data;
    p1=head->next;
    p2=head->next->next;

    while(p2->next!=NULL && p2->next->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;

        if(p2->next==NULL)
        return p1->data;
        else if(p2->next->next==NULL)
        return p1->next->data;



    }
}

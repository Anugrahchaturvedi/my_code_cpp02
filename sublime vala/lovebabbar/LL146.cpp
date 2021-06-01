#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node*next;
	node (int n)
	{
		data=n;
		next=NULL;
   }

};
void insertattail(node* &head,int data)
{
   node * n = new node(data);
   if(head==NULL)
   {
      head=n;
      return;
   }
   else{
      node *ptr=head;
      while(ptr->next!=NULL)
      {
         ptr=ptr->next;
      }
      ptr->next=n;
   }
}


void display(node *head)
{
   while(head!=NULL)
   {
      cout<<head->data<<"->";
      head=head->next;
   }
}


void interchange(node*head)
{
   node*ptr=head;
   node*prev=NULL;
   while(ptr->next!=NULL)
   {
       prev=ptr;
      ptr=ptr->next;

   }
   ptr->next=head;
   prev->next=NULL;
   head=ptr;
   display(head);
}
int main()
{
   node *head = NULL;
   insertattail(head,5);
     insertattail(head,4);      
      insertattail(head,8);
       insertattail(head,8);
        insertattail(head,2);
      // display(head);
      interchange(head);
   }
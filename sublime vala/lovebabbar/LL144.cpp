#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* next;

	node (int val)
	{
		data=val;
		next=NULL;
	}
};

void insertattail(node * &head, int data)
{
	node* n= new node(data);
	if(head==NULL)
	{
		head=n;
		return;
	}
node * ptr = head;
  while(ptr->next!=NULL)
  {
  	ptr=ptr->next;

  }
  ptr->next=n;
}

void display(node * head)
{
  node *temp = head;
   while(temp!=NULL)
   {

   	cout << temp->data <<"->";
   	temp = temp->next;
   
   }
   cout<<endl;
}
void duplicate(node * &head)
{
	node *ptr=head->next;
	node *prev=head;
	while(ptr!=NULL)
	{
		if(ptr->data==prev->data)
		{
           ptr=ptr->next;
           prev->next=ptr;
		}
		else
		{
            ptr=ptr->next;
            prev=prev->next;
		}
	}
	display(head);
}


int main()
{
	node *head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,3);
	insertattail(head,5);
	// display(head);
	duplicate(head);
	
}



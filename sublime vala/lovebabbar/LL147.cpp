#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int n)
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
		node * ptr= head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
	}
}


void display(node*head)
{
	while(head!=NULL)

	{
		cout << head->data <<"->";
		head=head->next;
	}

}

node* rev(node * head)
{
	node*prev=NULL;
	node *next=head;
	node*ptr=head;
	while(ptr!=NULL)
	{
		next=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=next;
		// ptr->next=prev;
	}
	return prev;
}

void increment(node *head)
{
	node * ptr=head;
	int carry=1;
	int sum=0;
	while(ptr!=NULL)
	{
	  sum=carry+(ptr? ptr->data:0);
	  carry = (sum>=10? 1:0);
	  ptr->data=sum;
	  ptr=ptr->next;
	  	
	} node *temp=head;

	rev(temp);
	display(temp);

}




int main()
{
	node*head=NULL;
	insertattail(head,5);
	insertattail(head,6);
	insertattail(head,7);
	insertattail(head,2);
	insertattail(head,8);
	display(head);
	node *prev =rev(head);
	cout<<endl;
	increment(prev);
	// display(prev);
}
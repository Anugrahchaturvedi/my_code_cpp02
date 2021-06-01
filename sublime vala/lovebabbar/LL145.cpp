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
};void insertattail(node * &head, int data)
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
void rem_dep(node*head)
{
	 map<int,int>m;
	 while(head!=NULL)
	 {
      m[head->data]++;
      head=head->next;
      
    }

 for(auto pr:m)
 {
 	cout << pr.first <<"->";
 }
}

int main()
{
	node * head=NULL;
	insertattail(head,5);
	insertattail(head,6);
	insertattail(head,2);
	insertattail(head,2);
	insertattail(head,1);
	rem_dep(head);
	// display(head);
}
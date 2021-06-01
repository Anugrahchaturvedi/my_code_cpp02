#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data ;
	node * next ;

	node(int val )
	{
		data= val;
		next=NULL;
	}

};

void insertattail(node* &head,int data)
{
	node* n = new node(data);
	if(head==NULL){
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
void display(node* head)
{
	node *temp = head;

   while(temp!=NULL)
   {

   	cout << temp->data <<"->";
   	temp = temp->next;
   
   }
   cout<<endl;
}

void rev(node* head)
{
	node * ptr= head;
	node * next= NULL;
	node * prev= NULL;
	while(ptr!=NULL)
	{
       next = ptr->next;
       ptr->next=prev;
       prev = ptr;
       ptr = next;
   }
   display(prev);
       
}


void rev2(node * head)
{
   if(head==NULL)
   	return NULL;
   if (head->NULL)
   	cout << head->data " ";
   node* next = head->next;
   head->next= NULL;
   
}

int main()

 {   
 	node* head=NULL;
 	insertattail(head,5);
 	insertattail(head,8);
 	insertattail(head,1);
 	insertattail(head,2);
 	insertattail(head,9);
 	display(head);
 	// rev(head);
 	rev2(head);
 

}
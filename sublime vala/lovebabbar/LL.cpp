#include <bits/stdc++.h>
using namespace std ;
class node{
public:
    int data;
    node *next = NULL;
    
    node(int n)
    {
    	data =n;
    	next = NULL;
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



int main()
{
    node * head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
}
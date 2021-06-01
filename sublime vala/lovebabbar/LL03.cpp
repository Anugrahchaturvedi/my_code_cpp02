#include <iostream>
using namespace std;
class node {
	public:
	int data ;
	node * next ;
    node(int val )
    {
    	data=val;
    	next =NULL;
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

void rev(node * head,int k)
{
	node * ptr = head;
	node * next= NULL;
	node * prev = NULL;
	int count=0;
	while(ptr!=NULL && count<k)
	{
		next = ptr->next;
		ptr->next =prev;
		prev =ptr;
		ptr=next;
		count++;
	}
	if(next!=NULL)
	{
		rev(next,k);
	}
	display(prev);

}


int main()
{
	int k =3;
	node * head=NULL;
    insertattail(head,1);
    insertattail(head,7);
    insertattail(head,6);
    insertattail(head,5);
    insertattail(head,8);
    insertattail(head,9);
    insertattail(head,2);
    display(head);
    rev(head,k);
}
/* %%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%% 
Author: Venkatesh N. Murthy
Program to reverse a linked list
%%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%%  */

# include <iostream>

using namespace std;

struct LNode {

int data;
struct LNode *next;

};
void push(struct LNode **tmp,int elem){

struct LNode *newnode = (struct LNode*) malloc(sizeof(LNode));
newnode->data=elem;
newnode->next=*tmp;
(*tmp)=newnode;
	
}

void printList(struct LNode *tmp)
{
while(tmp!=NULL)
{
cout<<tmp->data <<endl;
tmp=tmp->next;

}


}

void reverseList(struct LNode **head)

{
struct LNode*prev=NULL;
struct LNode *curr=*head;
struct LNode *next;
//struct LNode *newnode= (struct LNode *) malloc()(sizeof(LNode));

while(curr!=NULL)
{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;

}
*head=prev;

}

int main()
{

cout<<" Life is Beautiful"<<endl;

//struct LNode *tmp = (struct LNode*) malloc(sizeof(LNode));
struct LNode *head=NULL;
push(&head,5);
  push(&head, 4);
     push(&head, 15); 
     push(&head, 85);
printList(head);
reverseList(&head);
printList(head);
}

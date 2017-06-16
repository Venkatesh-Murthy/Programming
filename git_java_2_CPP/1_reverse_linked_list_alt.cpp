#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

//struct Node* head; //global variable

//---------- INSERT ----------//
Node* Insert(Node *head, int val)
{
  //Node *temp=(Node*) malloc(sizeof(Node*));
  Node *temp=new Node();
  temp->next=head;
  temp->data=val;
  head=temp;
  return head;
  
}
//---------- PRINT ----------//
void Print(Node *temp)
{
  cout<<"List: ";
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

//---------- REVERSE ----------//
Node* Reverse(Node *temp)
{
  Node *curr=temp, *prev=NULL, *next=temp;
  while(curr!=NULL)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
  
}



//---------- MAIN ----------//
int main() {
    struct Node* head = NULL; //local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    Print(head);
    head = Reverse(head);
    cout<<endl;
    Print(head);
}
 

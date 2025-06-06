//doubly linked lists
#include <iostream>
#include <map>

using namespace std;
class Node
{
public:
int value;
Node* next;
Node* prev;


Node(int value)
{
this->value= value;
this->next= NULL;
this->prev= NULL;
} //constructor
};

void insertHead(Node* &head, int v)
{
if(head==NULL){
    Node* temp= new Node(v);
   
    head= temp;
    }
    
    else
    {
    Node* temp= new Node(v);
    temp-> next=head;
    head->prev= temp;
    head=temp;
    }
    
    }
    
  void insertTail(Node* &tail, int v)
{
if(tail==NULL){
    Node* temp= new Node(v);
    tail=temp;
  
    }
    
    else
    {
    Node* temp= new Node(v);
    tail-> next=temp;
    temp->prev= tail;
    tail=temp;
    }
    
    }
    
    
    void print(Node *&head)
    {
    Node *temp= head;
    while(temp!= NULL)
    {
    cout<< temp->value<< " ";
    temp=temp->next;
    }
    cout<<endl;
    }
   
    int main()
    {
    Node* n1= new Node(11);
    
    
    Node* head=n1;
    Node* tail= n1;
    
    cout<<"Original:";
    print(head);
    
    insertHead(head,18);
    insertHead(head,6);
    cout<<"after insert at head:";
    print(head);
    
    insertHead(head,100);
    insertTail(tail,14);
       insertTail(tail,8);
    cout<<"after insert at tail:";
    print(head);
    
    return 0;
    }
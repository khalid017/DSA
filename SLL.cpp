#include<iostream>
using namespace std;

class Node{
   public:
       int data;
       Node* next;

       Node(int d)
       {
           data=d;
           next=NULL;
       }
};
void addAfterGivenNode(Node* prevNode)
{
     Node* newn = new Node(40);
  newn->next= prevNode->next;
  prevNode->next=newn;
}
void atLast(Node* prevNode)
{
    Node* newnode = new Node(100);
    prevNode->next=newnode;
}
void printLL(Node* n)
{
    while(n!=NULL){
        cout << n->data << "\n";
        n=n->next;
    }
}

int main()
{
  Node* head = new Node(10); // head stores the address of dynamically allocated object. thus it has *Node
  Node* second = new Node(20);
  Node* third = new  Node (30);
 
  head->next=second;// we used -> (arrow operator) for assigning value instead of dot op coz head is a pointer and -> uses pointer to assign values
  second->next=third;

  //addAfterGivenNode(second);
  atLast(third);

  cout << "printing LL"<< "\n";
  printLL(head);

}

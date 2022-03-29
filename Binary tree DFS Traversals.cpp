#include<iostream>
using namespace std;
class Node
{ public:
      int val;
      Node* right;
      Node* left;

    Node(int v)
    {
       val=v;
       right=NULL;
       left=NULL;
    }

};

void InOrder(Node* r)
{

    if(r!=NULL)
    {
      InOrder(r->left);
      cout<< r->val << " ";
      InOrder(r->right);
    }
}

void PreOrder(Node* r)
{
    if(r!=NULL)
    {
        cout << r->val << " ";
        PreOrder(r->left);
        PreOrder(r->right);
    }
}

void PostOrder(Node* r)
{
    if(r!=NULL)
    {
        PostOrder(r->left);
        PostOrder(r->right);
        cout << r->val << " ";
    }
}
int main()
{
    Node* root = new Node(10);
    
    root->left= new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(60);
    root->right->right = new Node(50);
    root->right->left = new Node(40);

    InOrder(root);
    cout << "\n";
    PreOrder(root);
    cout << "\n";
    PostOrder(root);

    return 0;

}

#include<iostream>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    
    Node(int v)
    {
        val=v;
        left=NULL;
        right=NULL;
    }

};
void InOrder(Node* n)
{
    if(n!=NULL)
    {
        InOrder(n->left);
        cout << n->val << " ";
        InOrder(n->right);
    }
}

int main()
{
    Node* root = new Node(8);
    root->left= new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(6);
    root->left->right->left=new Node(4);
    root->left->right->right=new Node(7);
    root->right = new Node(10);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);

    InOrder(root);


    

}

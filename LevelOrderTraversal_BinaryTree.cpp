#include<iostream>
#include<queue>
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

void LevelOrder(Node* n)
{
    queue<Node*> q;
    q.push(n);

    while(q.empty()==false)
    {
        
        Node* v = q.front();
        cout << v->val << " ";
        q.pop();
        if(v->left!=NULL)
        {
           q.push(v->left);
        }
        if(v->right!=NULL)
        {
             q.push(v->right);
        }
      
    }
}

int main()
{
    Node* root = new Node(10);
    
    root->left= new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(40);
    root->right->right = new Node(60);
    root->right->left = new Node(50);

    LevelOrder(root);

    return 0;

}

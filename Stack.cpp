#include<iostream>
using namespace std;
#define Max 50

class Stack{
    private:
    int top;
    int x;
    int s[Max];
    public:
       

    Stack()
    {
        top=-1;
    }   
       void push(int x)
       {
           if(top>=Max-1)
           {
               cout << "Overflow";
           }
           else
               s[++top]=x;   
       }
       int pop()
       {
           if(top<0)
           {
               cout << "underflow";
           }
           else 
               return s[top--];
       }
       int peek()
       {
           if(top<0)
           {
               cout << "underflow";
               return 0;
           }
           else
               return s[top];
            
       }
       bool isEmpty()
       {
           if(top==-1)
           {
               return true;
           }
           else 
              return false;
       }
};

int main()
{

    Stack s1;
    cout << "pushing elements into stack" << "\n";
    for(int i=1;i<6;i++)
    {
        cout << "pushing " << i << "\n";
        s1.push(i);
    }

    cout <<"popping all elements"<< "\n";

     for(int j=0;j<5;j++)
    {
        cout << s1.pop() << "\n";
    }
    cout << s1.peek() << "\n";
    cout << s1.isEmpty()<< "\n";

    
}

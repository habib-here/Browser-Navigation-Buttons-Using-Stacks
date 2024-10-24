#ifndef STACK_H
#define STACK_H

struct node
{
    string data;
    node* next;
};

class stack
{
    node* top;
    
public:
    void push(string s)
    {
        // new node to push
        node* newNode = new node();
        newNode->data = s;
        newNode-> next = NULL;

        if(top)
        {
            temp -> next = top;
            top = temp;
        }
        else
        {
            top = newNode;
        }

    }

    string pop()
    {
        if (top)
        {
            temp = top;
            string data = temp -> data;
            if (top-> next)
                top = top -> next;
            delete temp;
            temp = NULL;
            return data;
        }
    }


};

#endif
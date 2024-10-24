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
    stack()
    {
        top = NULL;
    }

    void push(string s)
    {
        // new node to push
        node* newNode = new node();
        newNode->data = s;
        newNode-> next = NULL;

        if(top)
        {
            newNode -> next = top;
            top = newNode;
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
            node* temp = top;
            string data = temp -> data;
            if (top-> next)
                top = top -> next;
            delete temp;
            temp = NULL;
            return data;
        }
    }

    void clear()
    {
        node* prev = NULL;
        node* curr = top;

        while(curr)
        {
            prev = curr;
            curr = curr ->next;
            delete prev;
        }

        top = NULL;
    }

};

#endif
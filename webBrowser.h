#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include "stack.h"

class NavigationButtons
{
    string currentUrl;
    stack historyStack;
    stack forwardStack;

public:

    void visit(string s)
    {
        if (currentUrl.length() == 0)
        {
            
            currentUrl = s;
            return;
        }
        else
        {
            historyStack.push(currentUrl);
            currentUrl = s;
            forwardStack.clear();
        }
    }

    void back()
    {
        forwardStack.push(currentUrl);
        currentUrl = historyStack.pop();
        cout << "You are navigated back to: " << currentUrl << endl;
    }
    
    void forward()
    {
        historyStack.push(currentUrl);
        currentUrl = forwardStack.pop();
        cout << "You are navigated forward to: " << currentUrl << endl;
    }

    string getCurrentUrl()
    {
        return currentUrl;
    }
};



#endif
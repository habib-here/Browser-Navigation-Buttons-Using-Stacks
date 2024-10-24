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
    

};



#endif
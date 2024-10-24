# include <iostream>
using namespace std;
#include "stack.h"

int main(void)
{
    stack t1;
    t1.push("First");
    t1.push("Second");
    t1.push("Third");
    cout << t1.pop() << endl;
    t1.clear();
    cout << "Working !" << endl;
    return 0;
}
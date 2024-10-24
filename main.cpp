# include <iostream>
using namespace std;
#include "webBrowser.h"

int main(void)
{
    NavigationButtons b1;
    b1.visit("https://example.com");
    b1.visit("https://example.com/page1");
    b1.visit("https://example.com/page2");

    b1.back();
    b1.forward();

    return 0;
}
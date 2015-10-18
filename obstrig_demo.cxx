// FILE: obstr_demo.cxx
// This is a small demonstration program showing how the obstring class is used.
#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS
#include "obstring.h"
using namespace std;
using namespace main_savitch_4;

// PROTOTYPES for functions used by this demonstration program:
void match(const obstring& variety, const obstring& mine, const obstring& yours);
// The two strings, mine and yours, are compared. If they are the same, then a 
// message is printed saying they are the same; otherwise mine is printed
// in a message. In either case, the string variety is part of the message.

int main( )
{
    const obstring BLANK(" ");
    obstring me_first("Demo"), me_last("Program");
    obstring you_first, you_last, you;
    
    cout << "What is your first name? ";
    cin >> you_first;
    match("first name", me_first, you_first);
    cout << "What is your last name? ";
    cin >> you_last;
    match("last name", me_last, you_last);

    you = you_first + BLANK + you_last;
    cout << "I am happy to meet you, " << you << "." << endl;
    return EXIT_SUCCESS; 
}

void match(const obstring& variety, const obstring& mine, const obstring& yours)
{
    if (mine == yours)
        cout << "That is the same as my " << variety << "!" << endl;
    else
        cout << "My " << variety << " is " << mine << "." << endl;
}

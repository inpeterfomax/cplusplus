#include <iostream>
#include <string>
#include <cctype>
#include "tacktp.h"

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    Stack<std::string> st;
    char ch;
    std::string po;
    cout << "Please enter A to add a purchase order, \n"  ;
    cout << "P to process a PO, or to quit.\n";

    while (cin >> ch && std::toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha (ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
            case 'a': 
            case 'A':
                cout <<  "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull())
                    cout << "Stack already full \n";
                else
                    st.push (po);
                break;
            case 'p':
            case 'P':
                if (st.isempty())
                    cout << "Stack already empty \n";
                else {
                    st.pop (po);
                    cout << "PO #" << po << "poped \n";
                    break;
                }
        }
        cout << "Please enter A to add a purchase order, \n" ;
        cout << "P to prcess a PO , or Q to quit. \n" ;
    }
    cout << "Byte\n";
    return 0;
}

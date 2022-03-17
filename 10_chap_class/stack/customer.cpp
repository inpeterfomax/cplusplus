#include<iostream>
#include"customer.h"

using namespace std;

Stack::Stack()
{
    top = 0;
    allpay = 0;
}

bool Stack::isempty() const{
    return (top == 0);
}

bool Stack::isfull() const{
    return (top == MAX);
}

bool Stack::pop(Item& item) {
    if (top >0) {
        allpay += items[top].payment;
        top--;
    } else {
        return false;
    }
    cout << "allpay : " << allpay << endl;
    return true;
}

bool Stack::push(const Item& item) {
    if (top < MAX) {
        items[top++] = item;
    } else {
        return false;
    }
    return true;
}

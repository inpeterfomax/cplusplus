#include"customer.h"
#include<iostream>
#include<cstring>

using namespace std;

int main (){

    Stack stk;
    customer s1,s2,s3;
    s1.payment = 100;
    strcpy(s1.fullname,"Mike");
    s2.payment = 200;
    strcpy(s2.fullname,"Jack");
    s3.payment = 300;
    strcpy(s3.fullname,"Hellen");
    if (stk.isempty()) {
        stk.push(s1);
        stk.push(s2);
        stk.push(s3);
    }
    if (stk.isfull()) {
        cout << "stack is full" << endl;
    } else  {
        cout << "going to pop out an item" << endl;
        stk.pop(s1);
    }
    
    return 0;
}

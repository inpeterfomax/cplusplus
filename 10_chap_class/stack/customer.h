#ifndef __CUSTOMER__H__
#define __CUSTOMER__H__

struct customer {
    char fullname [35];
    double payment;
};

typedef customer Item;

class Stack {
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top;
        double allpay;
    public:
        Stack();        
        bool isempty()const;
        bool isfull()const;
        bool pop(Item &item);
        bool push(const Item &item);
};

#endif

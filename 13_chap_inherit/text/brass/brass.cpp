#include <iostream>
#include <cstring>

#include "brass.h"

using std::cout;
using std::ios_base;
using std::endl;

Brass :: Brass (const char* s, long an, double bal)
{
    std::strncpy (fullName,s,MAX-1);
    fullName[MAX - 1] = '\0';
    acctNum = an;
    balance = bal;
}
void Brass :: Deposit (double amt)
{
    if (amt <0)
        cout << "Negative deposit not allowed;" << "deposit is cancelled.\n";
     else
        balance += amt;
}

double Brass::Balance ()const
{
    return balance;
}

void Brass::Withdraw (double amt)
{
    if (amt < 0)
    {
        cout << "Withdraw aount must be positive: withdrawal canceled.\n" ;
    } else if (amt <= balance) 
    {
        balance -= amt;
    } else 
    {
        cout << "Withdraw amount of $" <<amt << " exceeds your balance Withdraw canceled."
            << endl;
    }
}

void Brass::ViewAcct()const
{
    cout << "Brass ViewAcct...";
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    cout.setf(initialState);
}

/* Brassplus ===========================================================================*/
BrassPlus::BrassPlus (const char* s,long an, double hal, double ml, double r)
    : Brass (s,an,hal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
BrassPlus::BrassPlus (const Brass & ba, double ml, double r): Brass(ba)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
void BrassPlus::ViewAcct ()const
{
    cout << "BrassPlus ViewAcct ...";
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    
    Brass::ViewAcct();
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to back: $" << owesBank << endl;
    cout << "Loan Rate: " << 100*rate << "%\n";

    cout.setf(initialState);
}
void BrassPlus::Withdraw(double amt)
{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    } else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $ " << advance << endl;
        cout << "Fiance charge: $ " << advance * rate << endl;
        Deposit (advance);
        Brass::Withdraw (amt);
    } else 
    {
        cout << "Credit limit exceeded. Transaction caceled.\n";
    }
    cout.setf(initialState);
}

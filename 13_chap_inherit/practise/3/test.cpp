#include <iostream>
#include "dma.h"

const int CLIENTS = 4;
const int LEN = 40;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    ABC * p_clients[CLIENTS];

    int i;
    char temp[LEN];
    long tempnum;
    double tempbal;
    char kind;
    
    for(i = 0; i < CLIENTS; i ++)
    {
        char temp[LEN];
        long tempnum;
        double tempbal;
        char kind;
        cout << "Enter client's name: ";
        cin.getline (temp,LEN);
        cout << "Enter client's account number: ";
        cin >> tempnum;
        cout << "Enter openning balance: $";
        cin >> tempbal;
        cout << "Enter 1 for baseDMA Account or 2 for lacksDMA Account or 3 for hasDMA: ";
        while (cin >> kind && (kind !='1' && kind != '2' && kind != '3'))
        {
            cout << "Enter  1 or 2 or 3: ";
        }
        if (kind == '1')
        {
            p_clients[i] = new baseDMA (temp, tempnum);
        }
        else if (kind == '2')
        {
            double tmax, trate;
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            cout << "Enter the interest rate as a decimal fraction: ";
            cin >> trate;
            p_clients[i] = new lacksDMA ("lacksDMA",temp, tempnum);
        } else {
            p_clients[i] = new hasDMA ("hasDMA",temp, tempnum);
        }
        while (cin.get()!='\n')
        {
            continue;
        }
    }
    cout << endl;
    for (i = 0; i < CLIENTS; i ++)
    {
        p_clients[i]->View();
        cout << endl;
    }
    for (i = 0; i < CLIENTS; i ++)
    {
        delete p_clients[i];
    }
    cout << "Done. \n";

    return 0;
}

#include"plorg.h"
#include<iostream>
#include<cstring>

using namespace std;
/*
Plorg :: Plorg ()
{
    cout << "do nothing constructor" << endl;
}
*/
Plorg :: Plorg (int ci, const char *pname )
{
    CI = ci;
    if (pname!= NULL && strlen(pname) < MAX)
    {
        memset(name,'\0',MAX);
        strncpy(name,pname,strlen(pname));
    }
    cout << "constructor with default parameters" << endl;
    cout << endl;
}

void Plorg :: showName()
{
    cout << "the name is : " << name << endl;
    cout << endl;
}

void Plorg :: setName(const char*pname)
{
    if (pname!= NULL && strlen(pname) < MAX)
    {
        strncpy(name,pname,strlen(pname));
    }

    cout << "the new name is : " << pname << endl;
    cout << endl;
}

void Plorg :: setValue(int pnew)
{
   CI = pnew; 
   cout << "the new CI value is : " << CI << endl;
}

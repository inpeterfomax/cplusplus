#include "string2.h"
#include <iostream>
#include <cstring>

using namespace std;

String :: String ()
{
    cout << "default constructors!" << endl;
}
String :: String (const string s1)
{
    if (s1.length() > 0)
    {
        strcpy(raw,s1.c_str(),s1.length());
    }
}

String String::operator= (const String s1) const
{
    if (strlen(s1.raw) > 0)
    {
        strcpy(raw,s1.raw,strlen(s1.raw));
    }
    
    return *this;
}

String String::operator+ (const String s1) const
{
    String temp;

    if (strlen(s1.raw) > 0)
    {
        strcpy(temp.raw,s1.raw,strlen(s1.raw));
    }
        strcpy(temp.raw + strlen(s1.raw),raw,strlen(raw));
   
       return temp; 
}

void String::stringup()
{
    char temp;
    
    if (strlen(raw) > 0)
    {
        for (int = 0 ; i < strlen(raw); i++)
        {
            if (raw[i] >= 'a' && raw[i] <= 'z')
            {
                raw[i] = raw[i] + '0'; //to high characters
            }
        }
    }
}

void String::stringlow ()
{
    
    if (strlen(raw) > 0)
    {
        for (int = 0 ; i < strlen(raw); i++)
        {
            if (raw[i] >= 'A' && raw[i] <= 'Z')
            {
                raw[i] = raw[i] - '0'; //to low characters
            }
        }
    }
}

int String :: has (const char* c) const 
{
    int cout = 0;

    if (c==NULL)
    {
        cout << "wrong format of c \n";
        return 0;
    } else 
    {
        for (int i = 0; i<strlen(raw),i++) 
        {
            if (raw[i] == c)
            {
                count++;
            }
        }
    }

    return count;
}

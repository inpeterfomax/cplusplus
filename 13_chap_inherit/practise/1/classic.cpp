#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;

Cd::Cd (char *s1, char* s2, int n, double x)
{
    strncpy (performers,s1,strlen(s1));
    performers[strlen(s1)] = '\0';

    strncpy (label,s2, strlen(s2));
    label[strlen(s1)] = '\0';

    selections = n;
    playtime = x;
}

Cd::Cd (const Cd & d)
{
    strcpy (performers,d.performers);
    performers[strlen(d.performers)] = '\0';
    strcpy (label,d.label);
    label[strlen(d.label)] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

void Cd:: Report () const
{
    cout << "Cd -> Report : " << performers << label << endl;
}

Cd & Cd :: operator= (const Cd & d)
{
    if (this == &d) 
        return *this;
    else {
        strcpy (performers,d.performers);
        performers[strlen(d.performers)] = '\0';
        strcpy (label,d.label);
        label[strlen(d.label)] = '\0';
        
        selections = d.selections;
        playtime = d.playtime;
    }
    return *this;
}

Classic :: Classic (char* s3, char* s1, char* s2, int n, double x) : Cd (s1, s2, n, x)
{
    strcpy (composition, s3);
    composition[strlen(s3)] = '\0'; 
    
}
Classic :: Classic (char* s3,Cd &c) : Cd(c)
{
    strcpy (composition, s3);
    composition[strlen(s3)] = '\0'; 
}

void Classic :: Report () const 
{
    Cd :: Report ();
    cout << " Classic -> Report : " << composition << endl;
}

Classic & Classic ::operator= (const Classic & d)
{
    if (this == &d) 
        return *this;
    else {
        Cd::operator= (d);
        strcpy (composition,d.composition);
        composition[strlen(d.composition)] = '\0'; 
    }
}

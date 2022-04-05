#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;

Cd::Cd (char *s1, char* s2, int n, double x)
{
    performers = new char[MAX];
    strncpy (performers,s1,strlen(s1));
    performers[strlen(s1)] = '\0';

    label = new char[MAX];
    strncpy (label,s2, strlen(s2));
    label[strlen(s1)] = '\0';

    selections = n;
    playtime = x;
}

Cd::Cd (const Cd & d)
{
    performers = new char[MAX];
    strcpy (performers,d.performers);
    performers[strlen(d.performers)] = '\0';
    label = new char[MAX];
    strcpy (label,d.label);
    label[strlen(d.label)] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}
Cd :: ~Cd ()
{
    delete (performers); 
    performers = NULL;
    delete (label); 
    label = NULL; 
    cout << "~Cd () called" << endl;
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
        performers = new char[MAX];
        strcpy (performers,d.performers);
        performers[strlen(d.performers)] = '\0';
        label = new char[MAX];
        strcpy (label,d.label);
        label[strlen(d.label)] = '\0';
        
        selections = d.selections;
        playtime = d.playtime;
    }
    return *this;
}

Classic :: Classic (char* s3, char* s1, char* s2, int n, double x) : Cd (s1, s2, n, x)
{
    composition = new char[Cd::MAX];
    strcpy (composition, s3);
    composition[strlen(s3)] = '\0'; 
    
}
Classic :: Classic (char* s3,Cd &c) : Cd(c)
{
    composition = new char[Cd::MAX];
    strcpy (composition, s3);
    composition[strlen(s3)] = '\0'; 
}

void Classic :: Report () const 
{
    Cd :: Report ();
    cout << "Classic -> Report : " << composition << endl;
}

Classic & Classic ::operator= (const Classic & d)
{
    if (this == &d) 
        return *this;
    else {
        Cd::operator= (d);
        composition = new char[Cd::MAX];
        strcpy (composition,d.composition);
        composition[strlen(d.composition)] = '\0'; 
    }
}

Classic :: ~Classic ()
{
    delete (composition);
    composition = NULL;
//    Cd::~Cd(); //no need to.
    cout << "~Classic () called" << endl;
}

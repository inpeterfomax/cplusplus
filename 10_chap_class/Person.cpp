#include <iostream> 
#include <cstring> 

using namespace std;

class Person {
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];

    public:
        Person(){ lname = "long-name"; fname[0] = 'c'; }
        Person(const string &ln, const char* fn = "Heyyou");
        Person(const char* strf);
        void Show() const;
        void FormalShow() const;
};

Person::Person(const char*str2)
{
    strncpy(fname,str2,strnlen(str2,10));
}

Person::Person(const string &str1,const char*str2)
{
    lname = str1;
    strncpy(fname,str2,LIMIT);    
}
void Person::Show() const
{
    cout << "lname : " << lname << endl;    
    cout << "fname : " << fname << endl;    
}

void Person::FormalShow() const
{
    cout << "FormalShow()" << endl;    
}

int main ()
{
    Person one;
    Person two = ("Smythecraft");
    Person three("Dimwiddy","Sam");

    one.Show();
    cout << endl;
    one.FormalShow();

    cout << endl;
    three.Show();
    cout << endl;
    three.FormalShow();

   two.Show(); 

    return 0;
}

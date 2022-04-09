#include <iostream>
#include "stui.h"

using std::cin;
using std::cout;
using std::end;

void set(Student& sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    int i;
    for (i = 0; i < pupils; i++)
    {
        set(ada[i],quizzes);
    }
    cout << "\n Result: ";
    for (i = 0; i < pupils; i++)
    {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average()<< endl;
    }
    cout << "Done \n";
    return 0;
}

void set (Student& sa, int n)
{
    cout << "Please enter the student's name: ";
    getline (cin,sa);
    cout<< "Please enter " << n <<" quiz socres: \n";
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while (cin.get() != '\n')
        continue;
}

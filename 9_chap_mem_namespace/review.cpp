#include <iostream>

void call_sub()
{
    using namespace std;

    static int count = 0;
    count ++;
    cout << "count =" << count << endl;

    
}

int main(int argc, char* argv[])
{
    using namespace std;
    
    int i = 0, count = 0;
    cin >> count;

    for (i; i<count; i++)
    {
        call_sub();
    }  
}

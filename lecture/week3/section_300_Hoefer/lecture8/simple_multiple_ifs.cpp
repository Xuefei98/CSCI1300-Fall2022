#include <iostream>
using namespace std;

// program to check if a number is greater than 0

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    // 10
    if (num == 0)  
    {   
        cout << "the number is zero" << endl;
    }
    if (num > 0)
    {   
        cout << "the number is positive" << endl;
    }
    if (num < 0) 
    {   
        cout << "the number is negative" << endl;
    }

    return 0;
}
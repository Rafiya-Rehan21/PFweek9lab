#include <iostream>
using namespace std;
main()
{
    bool isFound = false;
    int size;
    int num;
    cout << "Enter size of array:";
    cin >> size;
    int number[size];
    for(int idx = 0; idx < size; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    cout << "Enter number you want to check:";
    cin >> num;
    for(int idx=0; idx<size ; idx++)
    {
        if(num==number[idx])
        {
            isFound= true;
            break;
        }
    }
    if(isFound ==true)
    {
        cout << "Number found!";
    }
    else
    {
        cout << "Number not found!";
    }
}
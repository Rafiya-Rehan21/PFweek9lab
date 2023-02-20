#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "Enter size of array:";
    cin >> size;
    int number[size];
    for(int idx =0; idx < size ; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    cout << "Enter number you want to multiply with array:";
    cin >> num;
    for(int idx =size -1; idx >=0; idx--)
    {
        cout << number[idx]*num << " ";
    }
}
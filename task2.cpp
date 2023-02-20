#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int number[size];
    for(int idx=0; idx <size; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    for(int idx= size-1; idx >=0 ; idx--)
    {
        cout << number[idx] << " ";
    }
}
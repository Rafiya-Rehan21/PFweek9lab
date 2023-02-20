#include <iostream>
using namespace std;
main()
{
    int n=0;
    cout << "Enter total numbers:";
    cin >> n;
    int number[n];
    for(int idx=0; idx<n; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    for(int x =n-1; x>=0; x--)
    {
        cout << number[x] << endl;
    }
}
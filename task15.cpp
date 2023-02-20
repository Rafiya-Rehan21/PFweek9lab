#include <iostream>
using namespace std;
main()
{
    int n=0;
    int num=0;
    int product=0;
    cout << "Enter total numbers:";
    cin >> n;
    int number[n];
    for(int idx=0; idx<n; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    cout <<"Enter any number:";
    cin >> num;
    for(int x=0; x<n; x++)
    {
    product =number[x]*num;
    cout << product << endl;
    }
    
}
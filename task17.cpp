#include <iostream>
using namespace std;
main()
{
    int n=0;
    int smallest=0;
    cout << "Enter total numbers:";
    cin >> n;
    int number[n];
    for(int idx=0; idx<n; idx++)
    {
        cout << "Enter number:";
        cin >> number[idx];
    }
    int same=number[0];
    for(int x=1; x<n; x++)
    {
        if(number[x]<same)
        {
            smallest= number[x];
        }
        same=number[x];
    }
    cout << smallest;
}
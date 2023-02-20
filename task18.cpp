#include <iostream>
using namespace std;
main()
{
    int n;
    float sum=0;
    cout << "Enter total resistances:";
    cin >> n;
    float resistance[n];
    for(int x=0; x<n; x++)
    {
        cout << "Enter resistance:";
        cin >> resistance[x];
    }
    for(int idx=0; idx<n; idx++)
    {
        sum= sum+resistance[idx];
    }
    cout << "Total resistance is:" << sum << "ohms";
}
#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string:";
    cin >> name;
    int idx=0;
    while(name[idx]!='\0')
    {
        cout << "Character " << name[idx] << " at index" << idx << endl;
        idx ++;
    }
}
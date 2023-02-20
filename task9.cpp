#include <iostream>
using namespace std;
main()
{
    string name;
    char letter;
    cout << "Enter any string:";
    getline(cin,name);
    cout << "Enter any alphabet:";
    cin >> letter;
    int counter= name.length();
    if(name[counter-1]==letter)
    {
        cout << "Same!";
    }
    else
    {
        cout << "Not same!";
    }
}
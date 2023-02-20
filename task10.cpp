#include <iostream>
using namespace std;
main()
{
    string name;
    char letter;
    bool isFound=false;
    cout << "Enter any string:";
    getline(cin,name);
    cout << "Enter any alphabet:";
    cin >> letter;
    int counter= name.length();
    for(int idx =0 ; idx < counter; idx++)
    {
        if(name[idx]==letter)
        {
            isFound =true;
            break;
        }
        else
        {
            isFound= false;
        }
    }
    if(isFound ==true)
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not found!";
    }
}
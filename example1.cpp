#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string:";
    getline(cin,name);
    int counter = name.length();
    cout << counter << endl;
}
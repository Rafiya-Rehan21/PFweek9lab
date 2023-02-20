#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string:";
    getline(cin,name);
    int idx=0;
    while(name[idx]!='\0')
    {
        idx =idx+1;
    }
    cout << "The total characters are:" << idx << endl;
    if(idx % 2 ==0)
    {
        cout << "The length is even!" << endl;
    }
    else
    {
        cout << "The length is odd!" << endl;
    }

}
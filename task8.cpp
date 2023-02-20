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
    for(int count = idx ; count >= 0; count--)
    {
        cout << name[count] << " ";
          
    }

}
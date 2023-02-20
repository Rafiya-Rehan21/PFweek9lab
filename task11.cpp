#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string:";
    getline(cin,name);
    int count =0;
    int x=0;
    while(name[x]!='\0')
    {
        if(name[x] =='a'|| name[x] =='e'|| name[x] =='i' || name[x] =='o' || name[x]=='u')   
        {
            count ++;
        }
        x++;
    }
    cout <<  "Total vowels are:" << count;
}

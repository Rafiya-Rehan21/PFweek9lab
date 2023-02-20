#include<iostream>
using namespace std;
main()
{
int s1[2];
int n;
cout << "Enter total numbers of second array:";
cin >> n;
int s2[n];
for(int x=0; x<2; x++)
{
    cout << "Enter number for first array:";
    cin >> s1[x];
}
for(int y=0; y<n ; y++)
{
    cout << "Enter number for second array:";
    cin >> s2[y];
}
cout << s1[0] << endl;
for(int idx =0; idx<n; idx++)
{   
    cout << s2[idx] << endl;
}
cout << s1[1] << endl;
}
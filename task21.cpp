#include <iostream>
using namespace std;
main()
{
    float amount[4];
    float price;
    for(int idx=0; idx<4; idx++)
    {
        cout << "Enter amount:";
        cin >> amount[idx];
    }
    cout << "Enter price of item:";
    cin >> price;
    float num1=amount[0]/0.25;
    float num2=amount[1]/0.10;
    float num3=amount[2]/0.05;
    float num4=amount[3]/0.01;
    float sum=0;
    sum= num1+ num2+ num3+ num4;
    if(sum>=price)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

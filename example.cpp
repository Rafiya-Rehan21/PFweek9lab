#include <iostream>
using namespace std;
main()
{
    int size;
    int sum=0;
    float avg=0;
    cout << "Enter the size of array:";
    cin >> size;
    int number[size];
    for(int idx =0; idx < size; idx++)
    {
    cout << "Enter number:";
    cin >> number[idx];
    sum=sum+ number[idx];
    }
    avg = sum/size;
    cout << "Sum is:" << sum << endl;
    cout << "Average is:" << avg << endl;

}
#include<iostream>
using namespace std;

bool isLeapYear(int year)
{
    if(year % 4 == 0 && year % 100 != 0)
        return true;
    if(year % 400 == 0)
        return true;
    return false;
}

int main()
{
    int year;
    cout << "Enter year : ";
    cin >> year;
    bool IsLeap = isLeapYear(year);
    if(IsLeap)
        cout << year << " is a leap year" << endl;
    else
        cout << year << " is not a leap year" << endl;
    return 0;
}
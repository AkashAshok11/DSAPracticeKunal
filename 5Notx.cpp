#include<iostream>
using namespace std;

int main()
{
    int number;
    int sum=0;
    do
    {
        cin >> number;
        if(number == -1)
            break;
        sum+=number;
        cout << sum << endl;
    }while(true);
    cout << "The sum is " << sum << endl;


    return 0;
}
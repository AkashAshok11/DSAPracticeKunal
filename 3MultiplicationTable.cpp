#include<iostream>
using namespace std;
void Multiplication(int num)
{
    for(int i=1; i<=10; i++)
        cout << num << " * " << i << " = " << i*num << endl;
}
int main()
{
    int number;
    cout << "Enter number for multiplication table : ";
    cin >> number;
    Multiplication(number);
    return 0;
}
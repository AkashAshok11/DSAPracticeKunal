#include<iostream>
using namespace std;
int Sum(int number1, int number2)
{
    return number1 + number2;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    int sum = Sum(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum;
    return 0;
}
#include<iostream>
using namespace std;

int GCD(int num1 ,int num2)
{
    int div,dvd;
    if(num1 == 0)
        return num2;
    if(num2 == 0)
        return num1;
    if(num1>num2)
    {
        dvd=num1;
        div=num2;
    }
    else
    {
        dvd=num2;
        div=num1;
    }
    while(dvd % div != 0)
    {
        int rem = dvd % div;
        dvd = div;
        div = rem;
    }
    return div;
}

int LCM(int num1, int num2)
{
    return num1 * num2 / GCD(num1 ,num2);
}

int LCMbf(int num1 ,int num2)
{
    int i,a,b;
    if(num1>num2){
        a=num1;
        b=num2;
    }    
    if(num2>num1)
    {
        a=num2;
        b=num1;
    }
    i=a;
    while(i%a!=0 || i%b!=0)
    {
        i++;
    }
    return i;
}

int main()
{
    int num1,num2;
    cin >> num1 >> num2;

    int gcd = LCM(num1, num2);
    cout << gcd;

    return 0;
}

#include<iostream>
using namespace std;

void printB(int n);

void printA(int n)
{
    if(n>15)
        return;

    cout << n << " ";
    printB(n + 1);
}

void printB(int n)
{
    if(n > 15)
        return;

    cout << n << " ";
    printA(n + 1);
}

int main()
{
    printA(0);
    return 0;
}


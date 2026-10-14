#include <iostream>
using namespace std;

void functionB(int n, int sum);

void functionA(int n, int sum)
{
    if(n > 7)
        return;

    sum = sum + n;
    cout << sum << " ";

    functionB(n + 1, sum);
}

void functionB(int n, int sum)
{
    if(n > 7)
        return;

    sum = sum + n;
    cout << sum << " ";

    functionA(n + 1, sum);
}

int main()
{
    functionA(1, 0);
    return 0;
}

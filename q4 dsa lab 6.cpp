/*Generate the following sequence using a recursive approach:
1, 3, 6, 10, 15, 21, 28, 
*/
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int generateSeries(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n + generateSeries(n - 1);
}

int main()
{
    int n = 7;

    for(int i = 1; i <= n; i++)
    {
        cout << generateSeries(i) << ", ";
    }

    return 0;
}


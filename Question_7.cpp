#include <bits/stdc++.h>
using namespace std;
int gcd_recursion(int x, int y)
{
    if (x == 0)
        return x;
    if (y == 0)
        return x;

    // base case
    if (x == y)
        return x;

    // recursive relation
    if (x > y)
        return gcd_recursion(x - y, y);
    else
        return gcd_recursion(x, y - x);
}
int gcd_without_recursion(int x, int y)
{
    int gcd = 1;
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    if (x == y)
        return x;
    if (x < y)
    {

        for (int i = 2; i <= x; i++)
        {
            if (y % x == 0)
                return x;

            if (x % i == 0 && y % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
    else
    {

        for (int i = 2; i <= y; i++)
        {
            if (x % y == 0)
                return x;

            if (x % i == 0 && y % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
}
int main()
{
    int x, y;
    cout << "enter the first number ";
    cin >> x;
    cout << "enter the second number";
    cin >> y;
    cout << "using recursion the gcd is " << gcd_recursion(x, y) << endl;
    cout << "without recursion the gcd is " << gcd_without_recursion(x, y) << endl;

    return 0;
}



#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int year;
    // cin >> year;

    // if (year > 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         cout << year / 100;
    //     }
    //     else
    //     {
    //         cout <<(year / 100)+1;
    //     }
    // }

    int n, x, y;

    cin >> n;
    cin >> x;
    cin >> y;

    if (n % x == 0 && n % y == 0)
    {
        // 1) n =   3, x = 1, y = 3 =>  true because   3 is divisible by 1 and 3

        cout << "n = " << n << ", x = " << x << ", y = " << y << " => true because " << n << "is divisible by " << x << " and" << y << "\n";
    }
    else if (n % x == 0 && n % y != 0)
    {
        // 3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3

        cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is not divisible by " << y << "\n";
    }
    else if (n % x != 0 && n % y == 0)
    {
        // 3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3

        cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is not divisible by " << x << "\n";
    }
    else
    {
        // 4) n =  12, x = 7, y = 5 => false because  12 is neither divisible by 7 nor 5

        cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is neither divisible by " << x <<" nor "<<y<< "\n";
    }
    return 0;
}
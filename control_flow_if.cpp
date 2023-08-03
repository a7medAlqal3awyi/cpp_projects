#include <iostream>
using namespace std;
int main()
{
    int age = 15;
    int points = 800;
    int grade = 8;
    if (age >= 20)
    {
        cout << "your age is ok\n";
    }
    else if (points > 500)
    {
        cout << "your points is ok\n";
    }
    else if (grade > 5)
    {
        cout << "your grade is ok\n";
    
    }
    else
    {
        cout << "Iam sorry \n";
    }

// ternary conditional
cout<<(age>=18 ? "age is ok ":"age is not ok ");
    return 0;
}
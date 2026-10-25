#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter C: ";
    cin >> C;

    bool result = (A == B || A == C || B == C);

    cout << boolalpha;
    cout << "Result: " << result << endl;

    if (result)
    {
        cout << "At least two numbers are equal." << endl;
    }
    else
    {
        cout << "All three numbers are different." << endl;
    }

    return 0;
}
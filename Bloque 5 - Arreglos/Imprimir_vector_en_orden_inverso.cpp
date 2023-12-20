#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < n; i++)
    {
        cout << A[n - i - 1] << endl;
    }
    return 0;
}
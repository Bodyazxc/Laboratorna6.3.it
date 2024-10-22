#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
void outputAr(T a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << setw(4);
    }
    cout << endl;
}

bool findMaxEven(int a[], int n, int& m)
{
    m = -1;
    for (int j = 0; j < n; ++j)
    {
        if (a[j] % 2 == 0)
        {
            if (m == -1 || a[j] > m)
            {
                m = a[j];
            }
        }
    }

    return m != -1;
}

int sumEvenElements(int a[], int n)
{
    int sum = 0;
    for (int j = 0; j < n; ++j)
    {
        if (a[j] % 2 == 0)
        {
            sum += a[j];
        }
    }
    return sum;
}

int main()
{
    const int n = 4;
    int a[n] = { 5, 6, 7, 8 };

    cout << "Array: ";
    outputAr(a, n);

    int m;
    if (findMaxEven(a, n, m)) {
        cout << "Largest even element: " << m << endl;
    }
    else {
        cout << "No even elements found." << endl;
    }

    int sumResult = sumEvenElements(a, n);
    cout << "Sum of even elements: " << sumResult << endl;
    return 0;
}

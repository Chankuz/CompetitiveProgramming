#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; // Number of rows
    if (n == 1)
    {
        cout << "*";
        return 0;
    }
    else if (n == 2)
    {
        cout << "*" << endl
             << "*";
        return 0;
    }
    if (n % 2 == 0)
    {
        int mid = n / 2;
        for (int i = 1; i <= n / 2 - 1; i++)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                if (mid + 1 == i + j || j == mid + i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < 2; i++)
        {
            cout << "*";
            for (int j = 1; j < n - 2; j++)
            {
                cout << "-";
            }
            cout << "*";
            cout << endl;
        }
        int width = n - 1;

        for (int i = 1; i <= n / 2 - 1; i++)
        {
            for (int j = 1; j <= width; j++)
            {
                if (j - 1 == i || j == width - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }
        return 0;
    }
    else
    {
        int mid = n / 2 + 1;
        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (mid + 1 == i + j || j == mid + i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < 1; i++)
        {
            cout << "*";
            for (int j = 1; j < n - 1; j++)
            {
                cout << "-";
            }
            cout << "*";
            cout << endl;
        }
        int width = n - 1;

        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 1; j <= width + 1; j++)
            {
                if (j - 1 == i || j == width + 1 - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }
        return 0;
    }
}
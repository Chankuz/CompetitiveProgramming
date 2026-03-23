#include <iostream>
using namespace std;

int main()
{
    string num1, num2;
    char op;
    cin >> num1 >> op >> num2;

    if (op == '*')
    {
        int len = num1.length() + num2.length() - 2;
        cout << "1";
        for (int i = 0; i < len; i++)
        {
            cout << "0";
        }
    }

    else
    {
        int id1 = num1.length();
        int id2 = num2.length();

        if (id1 == id2)
        {
            cout << "2";
            for (int i = 0; i < id1 - 1; i++)
            {
                cout << "0";
            }
        }

        else
        {
            int id1 = num1.length();
            int id2 = num2.length();

            if (id1 > id2)
            {
                cout << "1";
                for (int i = 1; i <= id1 - 1; i++)
                {
                    if (i == id1 - id2)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
            }

            else
            {
                cout << "1";
                for (int i = 1; i <= id2 - 1; i++)
                {
                    if (i == id2 - id1)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
            }
        }
    }
}
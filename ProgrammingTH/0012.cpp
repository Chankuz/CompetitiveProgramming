#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/* ..#...#...*..
   .#.#.#.#.*.*.
   #.D.#.O.*.G.*
   .#.#.#.#.*.*.
   ..#...#...*.. */
int main()
{
    string str;
    cin >> str;
    cout << ".";
    for (int i = 1; i < str.size() + 1; i++)
    { // line 1
        if (i % 3 == 0)
        {
            cout << ".*..";
        }
        else
            cout << ".#..";
    }
    cout << endl;

    cout << ".";
    for (int i = 1; i < str.size() + 1; i++)
    { // line 2
        if (i % 3 == 0)
        {
            cout << "*.*.";
        }
        else
            cout << "#.#.";
    }
    cout << endl;

    for (int i = 1; i < str.length() + 1; i++)
    { // line 3
        if (i % 3)
        {
            if ((i - 1) % 3 == 0 && i - 1 > 0)
            {
                cout << "*." << str.at(i - 1) << ".";
            }
            else
            {
                cout << "#." << str.at(i - 1) << ".";
            }
        }
        else
        {
            cout << "*." << str.at(i - 1) << ".";
        }
        if (i == str.length())
        {
            if (i % 3)
            {
                cout << "#" << endl;
            }
            else
            {
                cout << "*" << endl;
            }
        }
    }

    cout << ".";
    for (int i = 1; i < str.size() + 1; i++)
    { // line 4
        if (i % 3 == 0)
        {
            cout << "*.*.";
        }
        else
            cout << "#.#.";
    }
    cout << endl;

    cout << ".";
    for (int i = 1; i < str.size() + 1; i++)
    { // line 5
        if (i % 3 == 0)
        {
            cout << ".*..";
        }
        else
            cout << ".#..";
    }
    cout << endl;
}

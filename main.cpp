#include<iostream>
#include <map>
#include <string>
#include <windows.h>
#include <clocale>
#include<vector>
#include<set>
#include <iomanip>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    map <string, string> mp;
    set<string> Tsari;
    int n; cin >> n;
    string child;
    string parent;
    for (int i = 1; i < n; ++i)
    {
        cin >> child;
        cin >> parent;
        mp[child] = parent;
        Tsari.insert({ parent,child });
    }

    string current;
    int quantity;
    for (auto iterator = Tsari.begin(); iterator != Tsari.end(); ++iterator)
    {
        current = *iterator;
        quantity = 0;
        while(mp.count(current))
        {
            current = mp[current];
            ++quantity;
        }
        cout << *iterator<< " " << quantity<< endl;
    }
    return 0;
}
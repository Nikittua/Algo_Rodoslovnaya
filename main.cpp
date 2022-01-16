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
    for (int i = 1; i < n; i++)
    {
        cout << i << ") ";
        cin >> child;
        cin >> parent;
        mp[child] = parent;  // добавляем новые элемент
        Tsari.insert({ parent,child });
    }

    set<string>::iterator iter = Tsari.begin();
    map <string, string>::iterator it = mp.begin();


    for (it; it != mp.end(); it++)
    {
        string current = it->first;
        int quantity = 0;
        while( Tsari.count(current) )
        {
            current = mp[current];
            quantity++;
        }
        cout << it->first<< " " /*<<"    \t"*/ << quantity - 1 << endl;
    }


    return 0;
}
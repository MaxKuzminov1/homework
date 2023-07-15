#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char num[100000];
    while (!cin.eof())
    {
        cin.getline(num, 100000);
        for (int y = strlen(num); y >= 0; y--)
        {
            cout << num[y];
        }
    }
}
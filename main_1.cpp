#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char num[100000];
    while (num[0] != '0')
    {
        cin.getline(num, 10000);
        for (int i = strlen(num); i >= 0; i--)
        {
            cout << num[i];
        }
    }
    return 0;
}
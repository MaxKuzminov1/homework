#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[10000];
    char str_new [10000];
    

    while (!cin.eof())
    {
        cin.getline(str, 10000);
        int counter = 0;

        for (int i = 0; i < strlen(str)+1; i++)
        {
            str_new[i+counter] = str[i];

            if(str[i+1] == ' ' or str[i+1] == '\0')
            {
                str_new [i+counter+1] = 'A';
                counter++; 
            }   
        }
        for (int i = 0; i < strlen(str_new); i++)
        {
            cout << str_new[i];
        }
    }  
}
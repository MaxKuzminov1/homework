#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100000];
    char str_new [10000];
    int count;
    
    while (!cin.eof())
    {
        cin.getline(str, 100000);
        for (int i = 0; i < strlen(str); i++)
        {
            int j = 0;
            if (str[i+1] == ' ' or str[i+1] == '\0')
            {
                count = i;
                for (; j <= i; j++)
                {
                    str_new[j] = str[count--];
                    

                }
                
                str_new[j] = ' ';
                j++;
            }    
        }
        for (int i = 0; i < strlen(str_new); i++)
        {
            cout<<str_new[i];
        }
             
    }
}
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[10000];
    char str_new [10000];
    const char vowels[] = "aeiouyAEIOUY";
    

    while (!cin.eof())
    {
        cin.getline(str, 10000);

        bool ret = false;

        for (int i = 0; i < strlen(str); i++)
        {    
           for (int j = 0; j < strlen(vowels); j++){ //Checking a letter for a vowel
                if (str[i] == vowels[j])
                    ret = true;                            
            }
            if(ret == 1)
                break;
        }
        cout<<ret<<endl;
    }  
}
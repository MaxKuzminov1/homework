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
        int wer = 0;
        for (int i = 0; i < strlen(str); i++)
        {    
            if(str[i-1] == ' ' or wer == 1){
                cout << str[i];
                wer = 1;
            }   
        }
        cout<<endl;     
    }  
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[10000];
    char str_new [10000];
    char vowels[] = "aeiouyAEIOUY";
    

    while (!cin.eof())
    {
        cin.getline(str, 10000);

        for(int ii = 0; ii <strlen(str);){

            int  vowel_counter = 0;
            int max_vowel = 0;
            int index1 = 0;
            int index2 = 0;
            int letter_counter = -1;

            for (int i = 0; i < strlen(str); i++){

                letter_counter++;

                 if(max_vowel<=vowel_counter){

                        max_vowel = vowel_counter;
                        index2 = i;
                        index1=index2-letter_counter;
                    }

                if(str[i]==' '){        //If there is a space, then this is a new word.
                    
                    letter_counter = 0;
                    vowel_counter = 0;  
                }
            
                for (int j = 0; j < strlen(vowels); j++){ //Checking a letter for a vowel
                    if (str[i] == vowels[j])
                        vowel_counter++;                    
                }
            }
        
            for (int i = index1; i < index2; i++){
                str_new[ii] = str[i];   //Writes a word in order to a new array
                cout<<str_new[ii];
                ii++;                
                str[i] = ' ';           //Changes the largest word to empty
            }
        }
    }  
}
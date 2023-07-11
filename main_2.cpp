#include <iostream>
#include <cstring>

using namespace std;

int number_vowels(char* word){
    int number = 0;
    char vowels[] = "aeiouyAEIOUY";
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 0; j < strlen(vowels); j++){
            if (word[i] == vowels[j])
                number++;                
        }
    }
    return number;
}
void swapWords(char* sentence) {
    
    char* word = strtok(sentence, " ");

    int word_Length_vowels = number_vowels(word);
    
    char* nextWord;

    while (nextWord = strtok(NULL, " ")) {
        int nextWord_Length_vowels = number_vowels(nextWord);
        
        if (nextWord_Length_vowels == word_Length_vowels) {
            char* temp = word;
            word = nextWord;
            nextWord = temp;
        }

        cout << word << " ";
        word = nextWord;
        word_Length_vowels = nextWord_Length_vowels;
    }

    cout << word << endl;
}

int main()
{
    int numerator = 0;
    char str[10000];

    while (!cin.eof())
    {
        cin.getline(str, 10000);
        swapWords(str);
    }
    
    return 0;
}
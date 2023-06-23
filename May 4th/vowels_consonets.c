#include <stdio.h>

int main() {
    char ch;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int is_vowel = 0;
    
   
    scanf("%c", &ch);
    
    for (int i = 0; i < 10; i++) {
        if (ch == vowels[i]) {
            is_vowel = 1;
            break;
        }
    }
    
    if (is_vowel) {
        printf("Vowel.");
    } else {
        printf("Consonant.");
    }
    
    return 0;
}
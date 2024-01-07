//Program to remove occurences of character(s)

#include <stdio.h>
#include <ctype.h>

void removeChar(char *string, char c) {
    int pos = 0;

    while(string[pos] != '\0') {
        if(string[pos] == c) {
            int newpos = pos;
            while(string[newpos] != '\0') {
                string[newpos] = string[newpos+1];
                newpos++;
            }
        } else
            pos++;
    }
}

int isVowel(const char c) {
    char lower = tolower(c);
    int result = 0;
    char vowels[] = "aeiou";
    for(int i=0; i<5; i++)
        if(lower == vowels[i]) {
            result = 1;
            break;
        }
    return result;
}

void removeVowels(char *string) {
    int pos = 0;

    while(string[pos] != '\0') {
        if(isVowel(string[pos])) {
            int newpos = pos;
            while(string[newpos] != '\0') {
                string[newpos] = string[newpos+1];
                newpos++;
            }
        } else
            pos++;
    }
}

int main() {
    char str[] = "oobaffoooozxxxasooohjhjkjooo oodfsgolkgooo0sd0ogh";
    printf("Original String str = \"%s\"\n", str);
    removeChar(str, 'o');
    printf("After removing all o's str = \"%s\"\n", str);
    char str2[] = "abCDEFghijklMNOpqrstuVWXYZ";
    printf("Original String str2 = \"%s\"\n", str2);
    removeVowels(str2);
    printf("After removing all vowels str2 = \"%s\"\n", str2);


    return 0;
}

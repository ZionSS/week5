#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000], vowel = 0, alphabet = 0;
    int len = 0;
    scanf("%[^\n]", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabet++;
        }

    }
    printf("\"%s\"\nThere are %d alphabets in this sentence.\nThere are %d vowels in this sentence.", str, alphabet, vowel);

    return 0;
}
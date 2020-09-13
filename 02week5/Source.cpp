#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>

int main() {

    char str[1000];
    int len;
    scanf("%[^\n]", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            continue;
        }
        else
        {
            printf("%c", str[i]);
        }

    }
}
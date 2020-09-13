#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main() {
    char str[1000];
    int len = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (str[i] != '\n')
        {
            len++;
        }
        else
        {
            break;
        }

    }
    scanf("%[^\n]", str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'w') || (str[i] >= 'A' && str[i] <= 'W'))
        {
            str[i] = str[i] + 3;
        }
        else if (str[i] == 'x' || str[i] == 'y' || str[i] == 'z' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
        {
            str[i] = str[i] - 23;
        }
        else
        {
            continue;
        }
    }
    printf("%s", str);
}
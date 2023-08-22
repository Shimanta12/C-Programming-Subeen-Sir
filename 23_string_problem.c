#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter the sentence: ");
    gets(str);
    bool is_word_started = false;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (!is_word_started)
            {
                is_word_started = true;
                printf("%c", 'A' + (str[i] - 'a'));
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (!is_word_started)
            {
                is_word_started = true;
            }
            printf("%c", str[i]);
        }
        else
        {
            if (is_word_started)
            {
                is_word_started = false;
                printf("\n");
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

void reverse(char *string) 
{
    char temp;
    for (int i = 0; i < strlen(string) / 2; i++) 
    {
        temp = string[i];
        string[i] = string[strlen(string) - 1 - i];
        string[strlen(string) - 1 - i] = temp;
    }
}

int main() 
{
    char string[100];
    printf("Digite uma palavra: ");
    scanf("%s", string);
    printf("String original: %s\n", string);
    reverse(string);
    printf("String alterada: %s\n", string);

    return 0;
}
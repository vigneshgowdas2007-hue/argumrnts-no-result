#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[50];
    int i;
    int upper = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int len = strlen(password);


    for (i = 0; i < len; i++)
    {
        if (isupper(password[i]))
            upper = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else if (ispunct(password[i]))
            special = 1;
    }


    if (len < 8 || len > 15)
    {
        printf("Password is INVALID (length should be 8–15 characters and must contain upper,numericand special character)\n");
        return 0;
    }

    int strength = upper + digit + special;

    if (strength < 2)
    {
        printf("Password is INVALID\n");
    }
    else
    {
        printf("Password is VALID\n");

        if (strength == 2)
            printf("Password Strength: WEAK\n");
        else if (strength == 3)
            printf("Password Strength: MODERATE\n");
        else
            printf("Password Strength: STRONG\n");
    }

    return 0;
}

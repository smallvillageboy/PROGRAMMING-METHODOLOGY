#include <stdio.h>

int main()
{
        char ch;
        printf("Enter 1 character ");
        scanf("%c", &ch);
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57))
        {
            printf("%c is a alphanumeric", ch);
        }
        else
        {
            printf("%c isn't a alphanumeric", ch);
        }    
        return 0;
}
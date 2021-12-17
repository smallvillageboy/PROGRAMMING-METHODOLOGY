#include <stdio.h>
#include <string.h>

int main() {
    printf("nhap ten ");
    char name[100];
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0';

    int i;
    if (!strchr(name, ' ')) {
        printf("%s", name);
        printf("\nfirst name = last name");
        return 0;
    } 
    printf("first name ");
    while (i<strlen(name)) {
        if (name[i] == ' ') {
            break;
        }
        else {
            printf("%c", name[i++]);
        }
    }
    printf("\nlast name ");
    i = strlen(name);
    while (i>=0) {
        if (name[i] == ' ') {
            for (int j = i+1; j<strlen(name); j++) {
                printf("%c", name[j]);
            }
            break;
        }
        i--;
    }
    return 0;
}
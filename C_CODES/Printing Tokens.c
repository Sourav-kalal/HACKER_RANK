#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(i=0;s[i]!='\0';i++){
        //ASCII value of space is 32
        if(s[i]==32)
            printf("\n");
        else
        putchar(*(s+i));
    }
    return 0;
}

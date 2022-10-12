#include "cstdio"

int main(){
    char s[80];
    fgets(s, 80, stdin);
    for (int i = 0; s[i] != '\n'; i++)
        printf("%d",i);
    return 0;
}
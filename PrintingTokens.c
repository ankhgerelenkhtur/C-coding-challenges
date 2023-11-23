#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char *s;
s = malloc(1024 * sizeof(char));
scanf("%[^\n]", s);
s = realloc(s, strlen(s) + 1);

int len = strlen(s);
char c;
for(int i=0;i<len;i++){
    c = *(s+i);
    *(s+i) = *(s+i)==' '?'\n':c;
}
printf("%s",s);
return 0;
}
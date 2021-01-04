#include <stdio.h>
#include <string.h>
int main(void){
    char array[31];
    fgets(array, 31, stdin);
    printf("%s", array);

    return 0;
}
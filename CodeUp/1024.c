#include <stdio.h>
int main(void){
    int i = 0;
    char word[21];
    scanf("%s", word);
    while(word[i] !=  '\0'){
        printf("'%c'\n",word[i]);
        i++;
    }
    return 0;
}
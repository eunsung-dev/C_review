#include <stdio.h>
int main(void){
    char array[1001];
    scanf("%s", array);
    for(int i = 0; i < 1001; i++){
        if(('a' <= array[i]) & ('z' >= array[i]))
            array[i] -= 'a' - 'A';
        else if(('A' <= array[i]) & ('Z' >= array[i]))
            array[i] += 'a' - 'A';
    }
    printf("%s", array);
    return 0;
}
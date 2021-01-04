#include <stdio.h>
int main(void){
    int k = 0;
    scanf("%d", &k);
    int array[k];
    for(int i = 0; i < k; i++){
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < k; i++){
        printf("%d\n",array[i]);
    }
    for(int i = 0; i < k; i++){
        printf("%d\n",array[i]);
    }

    return 0;
}
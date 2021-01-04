#include <stdio.h>
int main(void){
    int n = 0, k = 0;
    int array[24] = {0,};
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&k);
        array[k-1] += 1;
    }
    for(int i = 0; i < 24; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
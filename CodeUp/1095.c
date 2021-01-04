#include <stdio.h>
#include <limits.h>
int main(void){
    int n = 0, k = 0, temp = INT_MAX;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        if(temp > k)
            temp = k;
    }
    printf("%d",temp);
    return 0;
}
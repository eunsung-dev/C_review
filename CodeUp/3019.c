#include <stdio.h>
#include <string.h>
struct schedule{
    char name[100];
    int year, month, date;
    int total;
};
int main(void){
    int n = 0, temp = 0;
    char temp_name[100];
    scanf("%d", &n);
    struct schedule list[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d %d %d", list[i].name, &list[i].year, &list[i].month, &list[i].date);
        list[i].total = list[i].year * 10000 + list[i].month * 100 + list[i].date;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(list[j].total > list[j+1].total){
                temp = list[j].total;
                strcpy(temp_name,list[j].name);
                list[j].total = list[j+1].total;
                strcpy(list[j].name,list[j+1].name);
                list[j+1].total = temp;
                strcpy(list[j+1].name,temp_name);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s\n", list[i].name);
    }


    return 0;
}
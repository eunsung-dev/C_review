#include <stdio.h>
#include <string.h>
struct student{
    char name[10];
    int score;

};
int main(void){
    int n = 0, m = 0, temp_score = 0;
    char temp_name[10];
    scanf("%d %d", &n, &m);
    struct student list[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d", list[i].name, &list[i].score);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(list[j].score < list[j+1].score){
                temp_score = list[j].score;
                strcpy(temp_name,list[j].name);
                list[j].score = list[j+1].score;
                strcpy(list[j].name,list[j+1].name);
                list[j+1].score = temp_score;
                strcpy(list[j+1].name,temp_name);
            }
        }
    }
    for(int i = 0; i < m; i++){
        printf("%s\n",list[i].name);
    }

    return 0;
}
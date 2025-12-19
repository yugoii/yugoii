#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int intelligence, stamina,charisma;
    char *job;
    
    intelligence = (rand() % 20) + 1;                 
    stamina = (rand() % (20 - intelligence)) + 1;     
    charisma = 20 - intelligence - stamina; 

    if (intelligence >= stamina && intelligence >= charisma) {
        job = "magi";
    } else if (stamina >= intelligence && stamina >= charisma) {
        job = "knight";
    } else {
        job = "thief";
    }

    printf("クラス(class): %s\n", job);
    printf("記憶力(intelligence): %d\n", intelligence);
    printf("瞬発力(stamina): %d\n", stamina);
    printf("魅力(charisma): %d\n", charisma);

    return 0;
}
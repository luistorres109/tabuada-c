#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 1; i <= 10; i++){
        printf("Tabuada do %d\n", i);
        for(int j = 1; j <= 10; j++){
            printf("- %d X %d = %d\n", i, j, i * j);
        }
        printf("-------------------\n");
    }

    return 0;
}

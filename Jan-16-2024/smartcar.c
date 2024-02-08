#include <stdio.h>

int main(void){
    unsigned char lights = 237;

    for(int i = 0;i<8;i++){
        if((lights & (1 << i)) == (1 << i)){
            printf("Light %d is on\n", i+1);
        }
    }
    return 0;
}
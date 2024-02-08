#include <stdio.h>

int main(void){
    unsigned char lights = 0; //0000 0000
    //lights = lights | light1; //turns on light 1
    //lights = lights | light5; //turns on light 7
    while(1){
        int option;
        printf("1. Switch lights\n2. Print state\n Pick an option: ");
        scanf("%d",&option);
        if(option == 1){
            printf("Which light would you like to toggle: ");
            scanf("%d",&option);
            lights = lights | (1 << option-1);
        }else if(option == 2){
            printf("The lights, which are on are: ");
            for (int i=7;i>=0;i--){
                if((lights >> i) & 1){
                    printf("%d", i+1);
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
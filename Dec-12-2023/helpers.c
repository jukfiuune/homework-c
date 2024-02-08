#include "helpers.h"

double sum(double number){
    double result = 0;
    for(int i = 0; i < number; i++){
        result = result + number - i;
        
    }
    return result;
}
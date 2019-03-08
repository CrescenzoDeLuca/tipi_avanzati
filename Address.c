#include <stdio.h>

int main(){

float var = 5.6;

float *p_var = &var;

printf("la variabile e' == %f\n ", *p_var);

return 0;
}
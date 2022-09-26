#include <stdio.h>
 
int main() {
 
    float x , y;
    float result;
    scanf("%f%f",&x,&y);


    result = x / y;

    printf("%.3f km/l\n",result);

    return 0;
}
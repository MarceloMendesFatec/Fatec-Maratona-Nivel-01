#include <stdio.h>
 
int main() {
 
    float n1,n2,n3,n4,n5,n6;
    float media = 0;
    int sum = 0;

    scanf("%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6);

    n1 > 0 ? (sum += + 1 , media += n1) : sum + 0;
    n2 > 0 ? (sum += + 1 , media += n2): sum + 0;
    n3 > 0 ? (sum += + 1 , media += n3) : sum + 0;
    n4 > 0 ? (sum += + 1 , media += n4) : sum + 0;
    n5 > 0 ? (sum += + 1 , media += n5): sum + 0;
    n6 > 0 ? (sum += + 1 , media += n6): sum + 0;

    

    printf("%d valores positivos\n",sum);
    printf("%.1f\n",(media / sum));

    return 0;
}
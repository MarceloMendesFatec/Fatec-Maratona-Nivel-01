#include <stdio.h>
 
int main() {
 
   int num;
   int i;
   int sum = 0; 
  
   for(i = 0 ; i <= 4 ; i++){

        scanf("%d",&num);
        if(num % 2 == 0){
            sum++;
        }
        
   }

   printf("%d valores pares\n",sum);

    return 0;
}

#include <stdio.h>

int main() {
  
float value;

    printf("Enter the value : ");
    scanf("%f",&value);
    printf("orignal value %.2f \n",value);

 int value1=(int)value*1;
 printf("After converting into intager %d \n",value1);

 float difference=value-value1;
    printf("Difference is here %.2f \n",difference);
           
    return 0;
        }
    
#include <stdio.h>

int main() {
  
int a;
    int b;


    printf("enter first intager ");
    scanf("%d",&a);

  printf("enter second intager ");
    scanf("%d",&b);

    float result1=a/b;
     printf("First casting  %.2f\n",result1);

      float result2=(float)a/b;
     printf("second casting  %.2f\n",result2);

     float result3=(float)(a/b);
     printf("third casting  %.2f\n",result3);

    


    

    return 0;
}
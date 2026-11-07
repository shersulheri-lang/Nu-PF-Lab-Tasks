#include <stdio.h>

int main() {
    int subject1;
   int subject2;
  int subject3;

    printf("Enter a first subject marks: ");
    scanf("%d", &subject1);

    printf("Enter a second subject marks: ");
    scanf("%d", &subject2);

    printf("Enter a second subject marks: ");
    scanf("%d", &subject3);

    int total=subject1+subject2+subject3;
    printf("Total marks %d\n",total);

    float avg=(subject1+subject2+subject3)/3;
    printf("The average of marks %.2f",avg);
    
  return 0;
}
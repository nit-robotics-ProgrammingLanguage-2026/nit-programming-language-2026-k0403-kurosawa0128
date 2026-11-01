#include <stdio.h>

int main(void) {
   int input;
   double calculation;
   int result;
   scanf("%d", &input);
   calculation = input * 1.08;
   result = (int)calculation;
   printf("%d\n", result);
    
    return 0;
}

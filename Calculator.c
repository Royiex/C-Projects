#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    next: {
        double num1 = 0;
        char oper = '\0';
        double num2 = 0;
        double ans = 0;
        printf("Input your Calculation:\n");
        scanf("%ld %c %ld", &num1, &oper, &num2);
        switch (oper)
            {
            case '+': ans = num1+num2;
                break;
            case '-': ans = num1-num2;
                break;
            case '*': ans = num1*num2;
                break;
            case '/': ans = num1/num2;
                break;
            case '^': ans = pow(num1, num2);
                break;
            default: goto fail;
            }   
            printf("The answer is: %1.3ld\n", ans);
            goto next;
        }
            fail: {
                printf("Not a calculation!");
                return 0;
            }
}
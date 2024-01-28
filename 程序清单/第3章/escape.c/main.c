/*escape.c -- 使用转义序列*/
#include <stdio.h>

int main() {
    float salary;
    printf("\aEnter your desired monthly salary:"); /*1*/
    printf(" $_____________\b\b\b\b\b\b\b\b\b\b");/*2*/
    scanf("%f", &salary);
    printf("\r$%.2f a month is $%.2f a year.\n", salary, salary * 12.0); /*3*/
    printf("\rGee!\n"); /*4*/
    return 0;
}

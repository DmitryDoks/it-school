//
//  less_1.c
//  
//
//  Created by Дмитрий Докукин on 15.11.18.
//

#include <stdio.h>
#include <math.h>
long unsigned int func(int a) {
    int i = 0, flag=0, b = a;
    long unsigned int t=0;
    while (b>1) {
        b=b/2;
        flag++;
    }
    if (b==1) flag++;
    b=0;
    for (i=flag; i>=0; i--) {
        if (a % 2 == 1) t=t+pow(10,b);
            a=a/2;
            b++;
    }
    return t;
}

int main(void) {
    printf("Для прекращения работы программы зажмите control+C\n");
    while (1) {
        unsigned int a=0;
        long unsigned int s;
        printf("Введите натуральное число не более 65535: ");
        scanf("%d", &a);
        s = func(a);
        printf("Введённое число в двоичном представлении: %lu\n", s);
    }
}


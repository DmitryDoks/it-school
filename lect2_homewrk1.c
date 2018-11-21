//
//  homewrk1.c
//  
//
//  Created by Дмитрий Докукин on 20.11.18.
//

#include <stdio.h>
#include <math.h>
int main(void) {
    char flag = 3, m=0;
    int a=0, b = -pow(2, sizeof(int)/2*8), c = pow(2, sizeof(int)/2*8)-1;
    printf("Введите число от %d до %d: ", b, c);
    scanf("%d", &a);
           while (a<b || a>c) {
               if(flag==0) {
                   printf("Проверка на дебила пройдена!\n");
                   return 0;
               }
               printf("Нерабочее значение. Осталось попыток(%d): ", flag);
               scanf("%d", &a);
               flag-=1;
           }
    if (a<0) a=-a;
    while(a>0) {
        m+=1;
        a/=10;
    }
    printf("Десятичных знаков в числе: %d\n", m);
    return 0;
}

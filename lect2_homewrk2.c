//
//  homewrk3.c
//  
//
//  Created by Дмитрий Докукин on 20.11.18.
//
// Наслаждайся!

#include <stdio.h>

int main(void) {
    int t = 0, a=0, b=0, c = 0, i=0, j=0, u=0;
    printf("Какую фигуру вы хотите получить: Икс(1), Полый ромб(2), или заполненный ромб(3)?\nЗначение: ");
    scanf("%d", &t);
    switch(t) {
        case 1:
            printf("Введите размер: ");
            scanf("%d", &a);
            b = a;
            c = 1;
            for (i=a; i>0; i--) {
                for(j=a; j>0; j--) {
                    if (j==b) {
                        printf("*");
                        continue;
                    }
                    else if (j==c) {
                        printf("*");
                        continue;
                    }
                    else {
                        printf(" ");
                    }
                }
                b-=1;
                c+=1;
                printf("\n");
            }
            break;
        case 2:
            printf("Введите размер: ");
            scanf("%d", &a);
            b = a/2+1;
            c = b;
            u=a;
            for (i=a; i>a/2; i--) {
                for(j=a; j>0; j--) {
                    if (j==b) {
                        printf("*");
                        continue;
                    }
                    else if (j==c) {
                        printf("*");
                        continue;
                    }
                    else {
                        printf(" ");
                    }
                }
                b-=1;
                c+=1;
                printf("\n");
            }
            if (u%2==0) {
                b+=1;
                c-=1;
                u=a;
            }
            else {
                b+=2;
                c-=2;
                u=a-1;
            }
            for (i=i; i<u; i++) {
                for(j=a; j>0; j--) {
                    if (j==b) {
                        printf("*");
                        continue;
                    }
                    else if (j==c) {
                        printf("*");
                        continue;
                    }
                    else {
                        printf(" ");
                    }
                }
                b+=1;
                c-=1;
                printf("\n");
            }
            break;
        case 3:
                printf("Введите размер: ");
                scanf("%d", &a);
                b = a/2+1;
                c = b;
                u=a;
                for (i=a; i>a/2; i--) {
                    for(j=a; j>0; j--) {
                        if (j>=b && j<=c) {
                            printf("*");
                        }
                        else {
                            printf(" ");
                        }
                    }
                    b-=1;
                    c+=1;
                    printf("\n");
                }
                if (u%2==0) {
                    b+=1;
                    c-=1;
                    u=a;
                }
                else {
                    b+=2;
                    c-=2;
                    u=a-1;
                }
                for (i=i; i<u; i++) {
                    for(j=a; j>0; j--) {
                        if (j>=b && j<=c) {
                            printf("*");
                        }
                        else {
                            printf(" ");
                        }
                    }
                    b+=1;
                    c-=1;
                    printf("\n");
                }
                break;
            default:
                printf("Мимо! Запускай всё заново!\n");
                break;
        }
    return 0;
}




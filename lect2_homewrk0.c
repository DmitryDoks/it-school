//
//  homewrk0.c
//  
//
//  Created by Дмитрий Докукин on 20.11.18.
//

#include <stdio.h>
int main(void) {
    float t=-5.0F, F=0.0F, R = 0.0F;
    while (t<=5.0F)  {
        F = t * 9.0F/5.F + 32.0F;
        R = t * 4.0F/5.0F;
        printf("t(C) = %.2fºC\nt(F) = %.2fºF\nt(R) = %.2fºR\n\n", t, F, R);
        t+=1.25F;
    }
    return 0;
}

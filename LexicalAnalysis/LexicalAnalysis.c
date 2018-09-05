/**
 * Copyright (c) 2015 Abelardo López Lagunas
 *
 * @file    MatrixMultiplication.c
 *
 * @author  Carlos "Charlo" Melgoza Gutierrez
 *
 * @date    Fri Apr 13 14:30 CST 2018
 *
 * @brief   Multiply two matrix with the producer - consumer technique
 *
 * References:
 *          Derived from ProdCons.c which is the basic solution for
 *          the Producer - Consumer problem.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>                 // For thread management
#include <string.h>
#include <math.h>


int main(int argc, const char * argv[])
{
    int p = 53, q=57;
/*    printf("Ingresa p: ");
    scanf("%d\n", &p);
    printf("Ingresa q: ");
    scanf("%d\n", &q);*/

    if(p<0 || q<0){
        return 1 ;
    }
    else{
        double n = 0, pn =0, e=0;
        double d=0, d1=0;
        double mod = 0;
        n=p*q;
        pn=(p-1)*(q-1);
        srand(time(NULL));

        e=rand()%(int)pn;


        int done =0;
        int k = 0;
        while (done==0){
            k++;
            d=(1+k*pn)/e;
            mod =fmod(d,1 );
            if(mod==0){
                done = 1;
            }
        }
        printf("N= %lf; PN=%lf; e=%lf; d=%lf; k=%d\n", n, pn, e, d, k);
    }




}
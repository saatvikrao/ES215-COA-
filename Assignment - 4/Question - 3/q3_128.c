#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 128;

int main(){
    double a[N][N], b[N][N], c[N][N];

    // Order -> (i, j, k)

    // initializing a, b, c
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) { 
            a[i][j] = rand()/2.54; 
            b[i][j] = rand()/2.12; 
        }
    }

    struct timespec tsp1;
    struct timespec tsp_1;

    char st1[100], en1[100];

    timespec_get(&tsp1, TIME_UTC);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    // getting time
    timespec_get(&tsp_1, TIME_UTC);
    strftime(st1, sizeof st1, "%D %T", gmtime(&tsp1.tv_sec));    
    strftime(en1, sizeof en1, "%D %T", gmtime(&tsp_1.tv_sec));  

    // printing execution time  
    printf("%s.%09ld\n",st1,tsp1.tv_nsec);
    printf("%s.%09ld\n",en1, tsp_1.tv_nsec);


    ////////////////////////////////////////


    // Order -> (i, k , j)
    for (int i = 0; i < N; i++){for (int j = 0; j < N; j++) { a[i][j] = rand()/2.54; b[i][j] = rand()/2.12; }}

    struct timespec ts2;
    struct timespec ts22;

    char start2[100], end2[100];

    timespec_get(&ts2, TIME_UTC);

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            for (int j = 0; j < N; j++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    timespec_get(&ts22, TIME_UTC);
    strftime(start2, sizeof start2, "%D %T", gmtime(&ts2.tv_sec));    
    strftime(end2, sizeof end2, "%D %T", gmtime(&ts22.tv_sec));  

    printf("%s.%09ld\n",start2,ts2.tv_nsec);
    printf("%s.%09ld\n",end2, ts22.tv_nsec);


    ////////////////////////////////////////


    // Order -> (j, i, k)
    for (int i = 0; i < N; i++){for (int j = 0; j < N; j++) { a[i][j] = rand()/2.54; b[i][j] = rand()/2.12; }}

    struct timespec ts3; struct timespec ts23;
    char start3[100], end3[100];

    timespec_get(&ts3,TIME_UTC);

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            for (int k = 0; k < N; k++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    timespec_get(&ts23, TIME_UTC);
    strftime(start3, sizeof start3, "%D %T", gmtime(&ts3.tv_sec));    
    strftime(end3, sizeof end3, "%D %T", gmtime(&ts23.tv_sec));  

    printf("%s.%09ld\n", start3, ts3.tv_nsec);
    printf("%s.%09ld\n", end3, ts23.tv_nsec);


    /////////////////////////////////////


    // Order -> (j, k, i)
    for (int i = 0; i < N; i++){for (int j = 0; j < N; j++) { a[i][j] = rand()/2.54; b[i][j] = rand()/2.12; }}

    struct timespec ts4; struct timespec ts24;
    char start4[100], end4[100];

    timespec_get(&ts4,TIME_UTC);

    for (int j = 0; j < N; j++) {
        for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    timespec_get(&ts24, TIME_UTC);
    strftime(start4, sizeof start4, "%D %T", gmtime(&ts4.tv_sec));    
    strftime(end4, sizeof end4, "%D %T", gmtime(&ts24.tv_sec));  

    printf("%s.%09ld\n", start4, ts4.tv_nsec);
    printf("%s.%09ld\n", end4, ts24.tv_nsec);


    /////////////////////////////////////


    // Order -> (k, i, j)
    for (int i = 0; i < N; i++){for (int j = 0; j < N; j++) { a[i][j] = rand()/2.54; b[i][j] = rand()/2.12; }}

    struct timespec ts5; struct timespec ts25;
    char start5[100], end5[100];

    timespec_get(&ts5, TIME_UTC);

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    timespec_get(&ts25, TIME_UTC);
    strftime(start5, sizeof start5, "%D %T", gmtime(&ts5.tv_sec));    
    strftime(end5, sizeof end5, "%D %T", gmtime(&ts25.tv_sec));  

    printf("%s.%09ld\n",start5, ts5.tv_nsec);
    printf("%s.%09ld\n",end5, ts25.tv_nsec);


    //////////////////////////////////////


    // Order -> (k, j, i)
    for (int i = 0; i < N; i++){for (int j = 0; j < N; j++) { a[i][j] = rand()/2.54; b[i][j] = rand()/2.12; }}

    struct timespec ts6; struct timespec ts26;
    char start6[100], end6[100];

    timespec_get(&ts6, TIME_UTC);

    for (int k = 0; k < N; k++) {
        for (int j = 0; j < N; j++) {
            for (int i = 0; i < N; i++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    timespec_get(&ts26, TIME_UTC);
    strftime(start6, sizeof start6, "%D %T", gmtime(&ts6.tv_sec));    
    strftime(end6, sizeof end6, "%D %T", gmtime(&ts26.tv_sec));  

    printf("%s.%09ld\n",start6, ts6.tv_nsec);
    printf("%s.%09ld\n",end6, ts26.tv_nsec);


    ////////////////////////////////////


    return 0;
}

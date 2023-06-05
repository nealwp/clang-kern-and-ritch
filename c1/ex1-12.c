#include <stdio.h>
// histogram of words in input
int main()
{
    int c, i, wl;
   
    wl = 0;
    // buckets < 3, 3 - 7, 8 - 12, > 12
    int hist[4];
   
    for (i = 0; i < 4; ++i) {
        hist[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if(wl > 0 && wl < 4) {
                hist[0] += 1;
            } else if (wl > 4 && wl < 8) {
                hist[1] += 1;
            } else if (wl > 8 && wl < 13) {
                hist[2] += 1;
            } else if (wl > 12) {
                hist[3] += 1;
            }
            wl = 0;
        } else {
            ++wl;
        }
    }
    

    printf("[ 1-3  ]: ");
    for (i = 0; i < hist[0]; ++i) {
        printf("%s", "#");
    }
    printf("%c", '\n');
    printf("[ 3-7  ]: ");
    for (i = 0; i < hist[1]; ++i) {
        printf("%s", "#");
    }
    printf("%c", '\n');
    printf("[ 8-12 ]: ");
    for (i = 0; i < hist[2]; ++i) {
        printf("%s", "#");
    }
    printf("%c", '\n');
    printf("[ 12+  ]: ");
    for (i = 0; i < hist[3]; ++i) {
        printf("%s", "#");
    }
    printf("%c", '\n');
}

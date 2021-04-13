#include <assert.h>
#include <stdio.h>

#include "rp_md.h"

int main(int argc, char *argv[]) {

    for (int i = -100; i < 101; i++) {
        for (int j = -100; j < 101; j++) {
            
            printf("%d * %d = %d | %d\n", i, j, i*j, rp_mult(i, j));
            assert(i*j == rp_mult(i, j));

            if (j == 0)
                continue;

            printf("%d / %d = %d | %d\n", i, j, i/j, rp_div(i, j));
            assert(i/j == rp_div(i, j));
        }
    }

    return 0;
}

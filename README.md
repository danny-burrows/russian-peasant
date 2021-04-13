# Russian Peasant Multiplication and Division
A fast algorithm for integer multiplying and dividing using bitshifts.

## Test It Out
Clone the repo and use make to run through some tests...
```sh
make test
```

## Using the Code
Here's a little example of the usage.
```c
#include <stdio.h>

#include "rp_md.h"

int main(void) {
    int a, b;

    a = 42;
    b = 18;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    return 0;
}
```
```
42 * 18 = 756
42 / 18 = 2
```

You can also run the above example with...
```sh
make example
```
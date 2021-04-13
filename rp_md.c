/* 
Russian Peasant Multiplication and Division
*/

unsigned int rp_umult(unsigned int a, unsigned int b) {
    unsigned int result = 0;

    while (a > 0) {
        if (a & 1) {
            result += b;
        }
        a = a >> 1;
        b = b << 1;
    }

    return result;
}

unsigned int rp_udiv(unsigned int a, unsigned int b) {
    unsigned int result = 0;
    unsigned int x = 0;

    if (a == b)
        return 1;

    while (b <= a) {
        if (b < 1) // Bad things :/
            return -1;   
        b = b << 1;
        x++;
    }

    while (x > 0) {
        b = b >> 1;
        x--;
        
        if (a >= b) {
           a -= b;
           result += 1 << x; 
        }
    }

    // Remainder is held in variable a.
    return result;
}

int rp_mult(int a, int b) {
    int res;

    if (a < 0 && b < 0) {
        return rp_umult(-a, -b);
    } else if (b < 0) {
        return -rp_umult(a, -b);
    } else if (a < 0) {
        return -rp_umult(-a, b);
    } else {
        return rp_umult(a, b);
    }
}

int rp_div(int a, int b) {
    int res;

    if (a < 0 && b < 0) {
        return rp_udiv(-a, -b);
    } else if (b < 0) {
        return -rp_udiv(a, -b);
    } else if (a < 0) {
        return -rp_udiv(-a, b);
    } else {
        return rp_udiv(a, b);
    }
}
#include <stdio.h>

void extended_euclid(int a, int b) {
    int uold  = 1, vold = 0;
    int u = 0, v = 1;
    int q = 0, utmp = 0, vtmp = 0, r = 0;
    while (b != 0) {
        r = a % b;
        q = a / b;
        a = b;
        b = r;

        utmp = u;
        u = uold - q * u;
        uold = utmp;

        vtmp = v;
        v = vold - q*v;
        vold = vtmp;
    }
    int d = a;
    u = uold;
    v = vold;
    //assert(d == a*u + b*v);
    printf("%d %d %d\n", u, v, d);
    return;
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    extended_euclid(a, b);
    return 0;
}
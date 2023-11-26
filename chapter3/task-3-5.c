

void decode(long *xp, long *yp, long *zp) {

    long r8 = *xp;
    long rcx = *yp;
    long rax = *zp;

    *yp = r8;
    *zp = rcx;
    *xp = rax;
    return 0;
};

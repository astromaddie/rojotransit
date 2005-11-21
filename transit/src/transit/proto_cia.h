#if __STDC__ || defined(__cplusplus)
#define P_(s) s
#else
#define P_(s) ()
#endif

/* src/transit/cia.c */
extern int interpolatecia P_((struct transit *tr));
extern int bicubicinterpolate P_((double **res, double **src, double *x1, long nx1, double *x2, long nx2, double *t1, long nt1, double *t2, long nt2));
extern void ciaerr P_((int max, char *name, int line));

#undef P_
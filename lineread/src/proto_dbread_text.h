#if __STDC__ || defined(__cplusplus)
#define P_(s) s
#else
#define P_(s) ()
#endif

/* src/dbread_text.c */
extern long dbread_text P_((char *filename, struct linedb **lines, float wlbeg, float wlend, char *Zfilename, double ***Z, double **T, double ***isocs, double **isomass, int *nT, int *nIso, char ***isonames));

#undef P_
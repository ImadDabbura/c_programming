#include <stdio.h>

/* copy input file to output file */
void filecopy(FILE *ifp, FILE *ofp)
{
    int c;

    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);
}

/* concatenate files */
int main(int argc, char const *argv[])
{
    FILE *fp;

    if (argc == 1)      // read from stdin
        filecopy(stdin, stdout);
    else               // read from files
        while (argc-- > 1){
            if ((fp = fopen(*++argv, "r")) == NULL){
                printf("can't open %s\n", *argv);
                break;
            }
            else {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    return 0;
}

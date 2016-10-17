// 
// reads the log file and makes it easier to collect data
// William Weng
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s File\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    FILE *in = fopen(argv[1],"r");
    if (in == NULL) {
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    FILE *out = fopen("compact","w");
    if (out == NULL) {
        perror("compact");
        exit(EXIT_FAILURE);
    }

    char line[200];

    while(fgets(line,200,in) != NULL) {

        if(line[0] == 'T') {
            fputs(line, out);
        } else if(line[0] == '#') {
            fputs(line, out);
        } else if(line[0] == '>') {
            fputs(line, out);
        }
    }
    fclose(in);
    fclose(out);
    return EXIT_SUCCESS;
}
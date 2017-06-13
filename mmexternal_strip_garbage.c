#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_working = 1;

int
main(int argc, char **argv)
{
        char buf[64*1024];

         do {
                unsigned int idx;
                if (fgets(buf, sizeof(buf), stdin) == NULL) {
                    is_working = 0; /* end of file means terminate */
                }
                for (idx = 0; idx < sizeof(buf) && buf[idx] != '|'; idx++);
                if (idx+3 < sizeof(buf)) {
                    fprintf(stdout, "{ \"msg\" : \"%s\" }\n", buf+idx+3);
                    fflush(stdout);
                }
        } while (is_working != 0);

        return EXIT_SUCCESS;
}

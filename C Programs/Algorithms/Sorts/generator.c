#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    FILE *fp;
    int i, random_number, count, max;

    if(argc == 3) {
        count = atoi(argv[1]);
        max = atoi(argv[2]);

        if(count <= 0 || max <= 0) {
            printf("Use numbers greater than zero as argument.\n");
            printf("Terminating...\n");
        } else {

            fp = fopen("input.txt", "w");

            fprintf(fp, "%d\n", count);

            srand(time(NULL));

            for (i = 0; i < count; i++) {
                random_number = rand() % max;
                fprintf(fp, "%d ", random_number);
            }

            fclose(fp);
            printf("\nDone.\n");
            printf("Please check the file input.txt for the generated file.\n");
        }
    } else if(argc > 3) {
        printf("Too many arguments supplied. Two expected.\n");
    } else {
       printf("Exactly two arguments expected.\n");
   }
    return 0;
}

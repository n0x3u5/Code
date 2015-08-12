#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int*, int);

int main(int argc, char const *argv[]) {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    char n_str[255];
    int* data;
    int n, i;
    FILE* fp;

    if(argc == 2) {

        fp = fopen(argv[1], "r");

        if(fp != NULL) {
            fgets(n_str, 255, (FILE*)fp);

            n = atoi(n_str);

            data = (int*)malloc(sizeof(int) * n);

            for (i = 0;i < n;i++) {
                fscanf(fp, "%d", &data[i]);
            }

            fclose(fp);
        } else {
            printf("Incorrect filename entered as argument.\n");
            printf("Please input the full file name.\n");
            exit(1);
        }

        insertion_sort(data, n);

        fp = fopen("insertion_out.txt", "w");

        for (i = 0;i < n;i++) {
            fprintf(fp, "%d ", data[i]);
        }

        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        fprintf(fp, "\nTime taken: %lf\n", cpu_time_used);
        printf("\nTime taken: %lf\n", cpu_time_used);
        printf("Please check the file insertion_out.txt for the output.\n");

        fclose(fp);
    } else if(argc > 2) {
        printf("Too many arguments supplied. One expected.\n");
    } else {
       printf("Exacty one argument expected.\n");
   }

    return 0;
}

void insertion_sort(int data[], int n) {
    int i, j;

    for (i = 1; i < n; i++) {
        j = i;

        while (j > 0 && data[j-1] > data[j]) {
            data[j] = data[j] + data[j-1];
            data[j-1] = data[j] - data[j-1];
            data[j] = data[j] - data[j-1];
            j--;
        }
    }

    return;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// void insertion_sort(int*, int);
//
// void insertion_sort(int data[], int n) {
//     int i, j;
//
//     for (i = 1; i < n; i++) {
//         j = i;
//
//         while (j > 0 && data[j-1] > data[j]) {
//             data[j] = data[j] + data[j-1];
//             data[j-1] = data[j] - data[j-1];
//             data[j] = data[j] - data[j-1];
//             j--;
//         }
//     }
//
//     return;
// }

#include <stdio.h>
#include <string.h>
int main(){
    int i,j;
    char str[10][50],temp[50];
    printf("Enter 10 words:\n");
    for(i=0;i<10;++i)
        gets(str[i]);
    for(i=0;i<9;++i)
       for(j=i+1;j<10 ;++j){
          if(strcmp(str[i],str[j])>0)
          {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
          }
    }
    printf("In lexicographical order: \n");
    for(i=0;i<10;++i){
       puts(str[i]);
    }
return 0;
}

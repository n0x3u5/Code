#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, L[1000],qty_temp,i,count10,count7,count5,count1;
   scanf("%d",&N);
   if(N>=1 && N<=1000) {
       for(i=1;i<=N;i++) {
           scanf("%d",&L[i]);
       }
       /*for(i=1;i<=N;i++) {
           printf("%d ",L[i]);
       }*/
       for(i=1;i<=N;i++) {
           qty_temp = L[i];
           count10=0,count7=0,count5=0,count1=0;
          //  printf("%d\n",qty_temp);
           while(qty_temp) {
               if(qty_temp >= 10) {
                  //  printf("in 10th %d\n",qty_temp);
                   count10 = qty_temp / 10;
                   qty_temp = qty_temp - (count10 * 10);
               }
               else if(qty_temp >= 7) {
                  //  printf("in 7th %d\n",qty_temp);
                   count7 = qty_temp / 7;
                   qty_temp = qty_temp - (count7 * 7);
               }
               else if(qty_temp >= 5) {
                  // printf("in 5th %d\n",qty_temp);
                   count5 = qty_temp / 5;
                   qty_temp = qty_temp - (count5 * 5);
               }
               else if(qty_temp >= 1) {
                   // printf("in 1th %d\n",qty_temp);
                   count1 = qty_temp / 1;
                   qty_temp = qty_temp - (count1 * 1);
               }
           }
           printf("%d\n", (count1+count5+count7+count10));

       }


   }
   else {
      //  printf("Invalid N! N = %d\n",N);
   }
   printf("\b");
   return 0;
}

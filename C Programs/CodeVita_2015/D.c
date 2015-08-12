#include<stdio.h>
#include<stdlib.h>
int sort(int,int[],int[],int[],int*);
int main(){
  int N;int time=0,i;
    scanf("%d",&N);

    int *W =(int*) malloc(N * sizeof(int));
    int *x = malloc(N * sizeof(int));
    int *y = malloc(N * sizeof(int));

    for(i=0;i<N;i++) {
      scanf("%d",&W[i]);
    }

    for(i=0;i<N;i++) {
      scanf("%d",&W[i]);
    }

    for(i=0;i<N;i++) {
      scanf("%d",&W[i]);
    }

    sort(N,W,x,y,&time);

    printf("%d",time);
}

int sort(int N,int W[],int x[],int y[],int* time){
  int i,j;
   if (sort(N,W,x,y,time) == 1)
       return ;
  else{
      for(i=0;i<N;i++){
         for(j=i+1;j<N;j++){
           if(W[i]>=W[j]){
             W[i]=W[i]-y[i];
             time++;
             sort(N,W,x,y,time);
           }
           else if(W[i]>W[j]){
             W[i]=W[i]-y[i];
             W[j]=W[j]+x[j];
             time++;
             sort(N,W,x,y,time);
           }
           else
            return 1;
         }
      }

    }
}

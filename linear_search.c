#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int arr[10],choice,target;
    int comparisons=0,position=-1,i;
    scanf("%d",&choice);
    if(choice==1){
        printf("manual input");
        for(int i=0;i<10;i++){
            scanf("%d",&arr[i]);
        }
    }else{
        printf("random generated input");
        srand(time(NULL));
        for(int i=0;i<10;i++){
            arr[i]=rand()%100;
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    scanf("%d",&target);
    clock_t start=clock();
    for(int i=0;i<10;i++){
        comparisons++;
        if(arr[i]==target){
            position=i+1;
            break;        }
    }
    clock_t end=clock();
    double time_taken=((double)(end-start)/CLOCKS_PER_SEC)/1000;
    if(position!=-1){
        printf("target %d found at position %d\n",target,position);
        printf("time taken %.3f\n",time_taken);
        printf("total comparisons made %d\n",comparisons);
    }else{
        printf("target not found");
    }
    return 0;
}
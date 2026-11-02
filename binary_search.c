#include<stdio.h>
int main(){
    int i,j,temp,found=-1,comparisons=0,target;
    int high,low,mid,arr[10];
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    scanf("%d",&target);
    low=0;high=9;
    while(low<=high){
        mid=(low+high)/2;
        comparisons++;
        printf("comparisons: %d, low= %d, high= %d, mid= %d, value= %d\n",comparisons,low,high,mid,arr[mid]);
        if(arr[mid]==target){
            found=mid;
            break;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(found!=-1){
        printf("target %d found at position %d\n",target,found+1);
    }else{
        printf("target not found");
    }
    printf("no. pof comparisons = %d",comparisons);
    return 0;
}
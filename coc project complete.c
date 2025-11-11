#include <stdio.h>
//creating or declaring functions
float averge(int arr[],int n);
int max_score(int arr[],int n);
int min_score(int arr[],int n);

int main() {
    int n;
    printf("enter total no. of scores\n");
    scanf("%d\n", &n);
    printf("total no. of scores %d",n);
    printf("enter all marks obtained by students");
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter %d th value\n",i);
        scanf("%d\n",&arr[i]);
        printf("%d score is %d\n",i+1,arr[i]);
        
    }
    printf("Class average is %f\n",averge(arr,n));
    printf("maximum score of class is %d\n",max_score(arr,n));
    printf("minimum score of class is %d\n",min_score(arr,n));
   
}
// defining functions
float averge(int arr[],int n){
    int total=0;
    int j;
    for(j=0;j<n;j++){
        total=total+arr[j];
    }
    printf("Total score is %d\n",total);
    float avg=(float)total/n;
    return avg;
}
int max_score(int arr[],int n){
    int max_score_so_far = arr[0];
    int k;
    for(k=0;k<n;k++){
        if(max_score_so_far<arr[k]){
            max_score_so_far=arr[k];
        }
    }    
    return max_score_so_far;    
}
int min_score(int arr[],int n){
    int min_score_so_far = arr[0];
    int l;
    for(l=n-1;l>=0;l--){
        if(min_score_so_far>arr[l]){
            min_score_so_far=arr[l];
        }
    }    
    return min_score_so_far;    
}


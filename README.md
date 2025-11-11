# COC-Project-Student-Score-Analyzer
It is a student score analyzer based on c language used to find average, highest and lowest score of student  by using the input of total no. Of scores and scores provided by the user 
first we ask user the no. of students whose score he wants to enter which is stored as integer n
After entering of the no. of student we ask the score of each student one by one.
This score is stored in form of array.
by calling functions averge(),max_score(),min_score(),we print the value of maximum, minimum and average acore from given dataset
these functions operate on for and if statement to find the required result.  

code of project is given below






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

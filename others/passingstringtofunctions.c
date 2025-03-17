#include<stdio.h>
#define MAX 10
int read_intarray(int scores[],int lim){
    int n, count = 0;
    printf("Type Scores, EOF to quit\n");
    while ((count < lim) && scanf("%d",&n)!=EOF)
    {
        scores[count] = n;
        count++;
    }
    return count;
}
void print_intarray(int scores[], int lim){
    int i;
    for(i = 0; i < lim; i++){
        printf("%d\n", scores[i]);
    }
}
int main(){
    int n, exam_scores[MAX];
    printf("***List of Exam Scores***\n\n");
    n= read_intarray(exam_scores, MAX);
    print_intarray(exam_scores, n);
}

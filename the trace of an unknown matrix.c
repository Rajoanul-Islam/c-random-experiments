//Finding the trace of a n*n matrix
#include<stdio.h>
int main(){

int i,j,n;
printf("Enter the value of row and column of the matrix: ",n); //Entering the value of n
scanf("%d",&n);

printf("\nThe following matrix is a %d*%d matrix.\n",n,n);//Printing the value of n
int matrix[n][n];//Declaring the matrix
printf("\nThe elements of the %d*%d matrix is: \n",n);
for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           printf("[%d][%d]: ",i,j);//Entering the values
           scanf("%d",&matrix[i][j]);
        }

}
printf("The decisive matrix is: \n");
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        printf("%d\t",matrix[i][j]);//printing the columns with space
    }
    printf("\n");//Creating new line for rows
}
int t=0;//Initializing the value of trace
for (i=0; i<n; i++){
        t+=matrix[i][i];//Calculating the elements required for a trace
}
printf("The trace of the matrix= %d",t);//Printing the trace
return 0;
}

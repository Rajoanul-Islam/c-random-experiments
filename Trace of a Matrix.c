#include<stdio.h>
int main(){

int matrix[3][3]={

    {5,8,7},
    {6,8,9},
    {2,4,9},

};
    int i,j, sum;
    printf("The elements of the 3*3 matrix are: \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){

    printf("[%d][%d]= %d\n", i, j, matrix[i][j]);
    }
}

printf("Given,\nMatrix[1][1]=%d,   ", matrix[0][0]);
printf("Matrix[2][2]=%d,   ", matrix[1][1]);
printf("& Matrix[3][3]=%d   \n", matrix[2][2]);
printf("So, the trace of the matrix is=%d", sum= matrix[0][0] + matrix[1][1] + matrix[2][2]);

return 0;
}

#include<stdio.h>
int main()
{
int rows, columns;
printf("Enter the number of rows : ");
scanf("%d",&rows);
printf("Enter the number of columns : ");
scanf("%d",&columns);

int matrix1[rows][columns],matrix2[rows][columns],result[rows][columns];

printf("Enter the elements of first matrix:\n");

for(int i=0; i<rows; i++)
{
for(int j=0; j<columns; j++)
{
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter the elements of second matrix:\n");

for(int i=0; i<rows; i++)
{
for(int j=0; j<columns; j++)
{
scanf("%d",&matrix2[i][j]);
}
}
for(int i=0; i<rows; i++)
{
for(int j=0; j<columns; j++)
{
result[i][j]=matrix1[i][j]-matrix2[i][j];
}
}
printf("Result of matrix substraction :\n");

for(int i=0; i<rows; i++)
{
for(int j=0; j<columns; j++)
{
printf("%d",result[i][j]);
}
printf("\n");
}
return 0;
}
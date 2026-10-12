#include <stdio.h>

int main()
{
    int mat[3][3];
    int mat2[3][3];
    int mat3[3][3];
    int mat4[3][3];
    int mat5[3][3];
    int sum1 = 0;
    int sum2 = 0;
     printf("Enter matrix 1: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {  
            scanf("%d", &mat[i][j]);
        } 
    }
     printf("Enter matrix 2: \n");
    for(int k=0;k<3;k++)
    {  
        for(int l=0;l<3;l++)
        {
            scanf("%d", &mat2[k][l]);
        } 
    }
    printf("Sum is: \n");    //sum
    for(int m=0;m<3;m++)
    {  
        for(int n=0;n<3;n++)
        {
            mat3[m][n] = (mat[m][n] + mat2[m][n]);
            printf("%d ",mat3[m][n]);
        }
        printf("\n");
    }

    printf("Product is: \n");    //product
    for(int i=0;i<3;i++)                      //per row loop
    {                                       
        for(int j=0;j<3;j++)                                //per coloumn loop
        {
            mat4[i][j] = 0;    
            for(int k=0;k<3;k++)
            {                                                              //per element loop
                mat4[i][j] = mat4[i][j] + ( mat[i][k] * mat2[k][j]);               
            }
            printf("%d ", mat4 [i][j]);
        }
        printf("\n");
    }

    printf("Transpose of sum matrix is: \n");  //Transpose
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           mat5[i][j]= mat3[j][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d ", mat5[i][j]);

        } printf("\n");
    }
    
    for(int i=0;i<3;i++)  //ood even indices element sum
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)%2 == 0)
            {
                sum1 = mat5[i][j] + sum1;
            }
            else
            {
                sum2 = mat5[i][j] + sum2;
            }
        }
    }
    printf("Sum of even indices elements of sum matrix is: %d\n", sum1);
    printf("Sum of odd indices elements of sum matrix is: %d\n", sum2);
    
return 0;
}
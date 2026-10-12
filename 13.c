//matrix product
#include <stdio.h>
int main()
{
    int mat[3][3];int mats[3][3];int matss[3][3];

    printf("Enter elements of first matrix : \n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter elements of second matrix : \n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d", &mats[i][j]);
        }
    }
    printf("Product is: \n");    //product
    for(int i=0;i<3;i++)                      //per row loop
    {                                       
        for(int j=0;j<3;j++)                                //per coloumn loop
        {
            matss[i][j] = 0;    
            for(int k=0;k<3;k++)
            {                                                              //per element loop
                matss[i][j] = matss[i][j] + ( mat[i][k] * mats[k][j]);               
            }
            printf("%d ", matss [i][j]);
        }
        printf("\n");
    }
return 0;
}
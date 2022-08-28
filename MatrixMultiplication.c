#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10][10], b[10][10], pro[10][10], r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter elements of first matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Product of the matrices: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            pro[i][j]=0;
            for(int k=0; k<c; k++){
                pro[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t", pro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

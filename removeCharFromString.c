//C program to remove all characters from a string keeping all numbers

#include<stdio.h>

int main(){
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str );
    
    int j=0;
    for(int i=0; i<str[i]; i++){
        if(str[i]>='0' && str[i]<='9'){
            str[j]=str[i];
            j++;
        }
    }
    
    str[j] = '\0';
    
    printf("String after modification: ");
    printf("%s", str);
    
    return 0;
}

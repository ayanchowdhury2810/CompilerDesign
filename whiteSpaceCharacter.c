#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    int res;

    printf("Enter a character: ");
    scanf("%c", &c);
    
    res = isspace(c);
    if (res == 0){
        printf("Not a white-space character.");
    }else{
        printf("White-space character.");
    }
  
    return 0;
}

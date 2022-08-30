//Construct a DFA to accept a string containing a zero followed by a one.

#include<stdio.h>
#define max 100

int main(){
    char str[max], f='a';
    int i;
    printf("Enter the string to be checked: ");
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++){
        switch(f){
            case 'a': if(str[i]=='0') f='b';
                else if(str[i]=='1') f='a';
            break;
            case 'b': if(str[i]=='0') f='b';
                else if(str[i]=='1') f='c';
            break;
            case 'c': if(str[i]=='0') f='b';
                else if(str[i]=='1') f='a';
            break;
        }
    }
    
    if(f=='c')
        printf("String is accepted ");
    else printf("String is not accepted");
    return 0;
}

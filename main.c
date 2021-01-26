#include <stdio.h>
#define max 1000
void toggleCase(char * str);
int main(){
    char str[max];
    printf("enter the string: \n",str);
    gets(str);
    toggleCase(str);
    printf("string after togglecase:%s\n",str);
    return 0;
    
    
    
}
void toggleCase(char * str){
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z')
        {str[i]=str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
        
        str[i]=str[i] +32;
        
        }
    i++;
        }
}

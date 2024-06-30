#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i=1;i<argc;i++){
        char *letter = argv[i];
        for(int j=0;letter[j]!='\0';j++){
            if(letter[j]>='A'&&letter[j]<='Z') letter[j]=letter[j]-'A'+'a';
        }
        printf("args : %d is : %s\n",i,letter);
    }
    return 0;
}
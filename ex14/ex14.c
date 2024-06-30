#include <stdio.h>
#include <ctype.h>

// forward declarations

void print_letters(char arg[],int arg_len);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 0; i < argc; i++) {
        print_letters(argv[i],strlen(argv[i]));
    }
}

void print_letters(char arg[],int arg_len )
{
    int i = 0;

    for(i = 0;i<arg_len; i++) {
        char ch = arg[i];

        if(isdigit(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}



int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
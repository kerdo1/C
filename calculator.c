#include <stdio.h>
#include <cs50.h>
#include <string.h>

int math(int a,int b, const char* operator);

int main(void)
{
    int x = get_int("What is x?: \n");
    int y = get_int("What is y?: \n");
    const char* operator = get_string("What equation do you want to do?: \n");

    printf("The outcome is %i \n",math(x,y, operator) );
}

int math(int a,int b,const char* operator)
{
    if (strcmp(operator, "+")== 0) {
        return a + b;
    }
    else if (strcmp(operator, "-") == 0) {
        return a - b;
    }
    else if (strcmp(operator, "*") == 0) {
        return a * b;
    }
    else if (strcmp(operator, "%")== 0) {
        return a % b;
    }
    else {
        printf("Error, wroong operator\n: ");
        return 0;
    }
}
#include <stdio.h>


int create(int x){

    x += 5;
    return x;

}

int main23() {
    printf("Hello, World!\n");
    int variable;
    variable = 5;
    variable = create(variable);
    printf("%d",variable);
    return 0;
}

#include <stdio.h>


int create(int x){

    x += 5;
    return x;

}

int main() {
    printf("Hello, World!\n");
    int variable;
    variable = 10;
    variable = create(variable);
    printf("%d",variable);
    return 0;
}

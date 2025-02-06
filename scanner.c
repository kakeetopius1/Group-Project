#include <stdio.h>

typedef struct node {
    int num;
    struct node* n; 
}node;

int main(void) {

    printf("I love git\nVery much\n");

    node n1;

    n1.num = 8;

    printf("n1.num is %d\n", n1.num);
    
    n1.n = &n1;
    
    return 0;

}
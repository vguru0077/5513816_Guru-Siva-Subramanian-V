#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int main() {
    int stack1[MAX_SIZE], stack2[MAX_SIZE];
    int top1 = -1, top2 = -1;
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            int x;
            scanf("%d", &x);
            stack1[++top1] = x;
        } else if (type == 2) {
            if (top2 < 0) {
                while (top1 >= 0) {
                    stack2[++top2] = stack1[top1--];
                }
            }
            if (top2 >= 0) {
                top2--;
            }
        } else if (type == 3) {
            if (top2 < 0) {
                while (top1 >= 0) {
                    stack2[++top2] = stack1[top1--];
                }
            }
            if (top2 >= 0) {
                printf("%d\n", stack2[top2]);
            }
        }
    }
    return 0;
}
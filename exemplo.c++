#include <cstdio>
#include <iostream>

int main(){
    int x;

    for (x=2; x<=10; x = x+2) {
        printf("%d ", x);
    }

    for (;;) {
        printf("%d ", x);
        x++;
        if (x>=100) {
            break;
        }
    }
}
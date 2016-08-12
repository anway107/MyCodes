#include<stdio.h>


int recursive(int a) {

    printf("%d",a);

    if(a >= 100)
    return;
    else  {
        a = a + 1;
        recursive(a);
        return a;
    }

}

int main() {

    recursive(1);
return 0;
}

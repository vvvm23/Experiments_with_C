#include <stdio.h>

extern int d;
int main() {
    auto int a = 128;
    register int b = 128;
    static int c = 128;
    int d = 128;

    printf("This variable was stored in the default storage class auto : %d\n", a);

    printf("This variable was stored in a register using storage class register : %d\n", b);

    printf("This variable is static this variable is kept in existence during the lifetime of \
this program and its scope is restricted to the program. Only one copy of this var\
iable is kept : %d\n", c);

    printf("This variable has been given a reference to a global variable that is visible to a\
ll program files. When d was defined it is stored in the memory location previousl\
y defined at the extern keyword : %d\n\n", d);

    printf("Address of auto a %X \n", &a);
    printf("No Address for register b as register do not have addresses\n");
    printf("Address of static c %X \n", &c);
    printf("Address of extern d %X \n\n", &d);

    int *e = &a;

    printf("This value is obtained by referencing a pointer stored in *e : %d\n",*e);

    return 0;
}
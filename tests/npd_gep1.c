#define NULL (void*)0

struct S {
    int x;
};

union U {
    int* p;
    struct S s;
};

int main() {
    int y;
    int* p;
    struct S s;
    union U u;

    y = 5;
    p = &p;
    u.p = p;;

    s = (struct S) { .x = 6 };
    u.s = s;

    /////
    //u.p = NULL;
    //(void*) u.s.x;

    return 0;
}
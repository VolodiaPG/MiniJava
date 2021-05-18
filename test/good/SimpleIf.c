/*
class Equal {
  public static void main(String[] args) {
    System.out.println(new Check().check());
  }
}
class Check {
  public int check() {
    int a;
    int b;
    int ret;
    a = 1;
    b = 43;
    if (b == 43) {
      ret = 1;
    }
    if (a == 1) {
      ret = 42;
    }
    return ret;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct Check;
void* Check_check(struct Check* this);
struct Check {
  void* (**vtable)();
};
void* (*Check_vtable[])() = { Check_check };
void* Check_check(struct Check* this) {
  int a;
  int b;
  int ret;
  a = 1;
  b = 43;
  if ((b == 43)) {
    ret = 1;
  }
  if ((a == 1)) {
    ret = 42;
  }
  return (void*)(ret);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct Check* tmp1 = ({ struct Check* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Check_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}

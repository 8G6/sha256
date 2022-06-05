#include <stdio.h>
#include "bench.c"
#include "padding.c"

int main(){
    int u=0;
    for(u=0;u<10;u++){
      bench("hi how are you",100000000,15,bin64loop,"loop");
      bench("hi how are you",100000000,15,bin64,"without");
    }
}

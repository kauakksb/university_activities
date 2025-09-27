#include <stdio.h>

#include "instant.h"

const int NINSTANTS = 5;
int main(void) {
  struct instant v[NINSTANTS];
  instant_read_vector(v, NINSTANTS);

  for(int i = 0; i < NINSTANTS; i++)
  {
    printf("%d:%d:%d\n",v[i].hour,v[i].minute,v[i].second);
  }
  
  struct instant maior = instant_largest(v, NINSTANTS);
  printf("Maior instante: %02d:%02d:%02d\n",
         maior.hour, maior.minute, maior.second);
}
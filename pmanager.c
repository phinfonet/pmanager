#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char name;
} project;

int main() {
  char choice;
  project *p;
  p = malloc(sizeof (project));
  printf("Type a to add a project or q to quit: ");
  scanf("%c", &choice);
  while (strcmp(&choice, "a") == 0) {
    printf("Type the project id: ");
    scanf("%i", &p->id);
    puts("==========<end>==========");
    printf("Type a to add a project or q to quit: ");
    scanf("%c", &choice);
  }
}

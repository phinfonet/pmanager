#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char name;
} project;

int main() {
  int choice;
  project *p;
  p = malloc(sizeof (project));
  printf("Type 1 to add a project or 2 to quit: ");
  scanf("%i", &choice);
  while (choice == 1) {
    printf("Type the project id: ");
    scanf("%i", &p->id);
    printf("==========<end>==========\n");
    printf("Type 1 to add a project or 2 to quit: ");
    scanf("%i", &choice);
  }
}

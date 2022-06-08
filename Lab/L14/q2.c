#include <stdio.h>
#define NCourse 3

////////////////////////////////////////////////////////
//                 Start of your code                 //
////////////////////////////////////////////////////////

/*
    TODO: 
        1. Define a structure of structure to store 
        Instructor information.

        2. Write two self-defined functions:
          2.1. get_info:   a function to get instructor
                           information from a terminal.
          2.2. print_info: a function to print instructor
                           information to a terminal.
        
        You can find the function definition 
        from the code in the main function.
*/
struct Instructor{
  char name[100];
  char sex;
  char room[100], room2[100], room3[100];
  int c1, c2, c3, h1, h2, h3;
};

struct Instructor get_info(){
  struct Instructor a;
  scanf("%s %c %s %d %d %s %d %d %s %d %d",
  a.name, &a.sex, a.room, &a.c1, &a.h1, a.room2, &a.c2, &a.h2
  , a.room3, &a.c3, &a.h3);
  return a;
};

void print_info(struct Instructor b){
  printf("%s (%c)\n- %s (%d credits, %d hours)\n- %s (%d credits, %d hours)\n- %s (%d credits, %d hours)\n",
  b.name, b.sex, b.room, b.c1, b.h1, b.room2, b.c2, b.h2, b.room3, b.c3, b.h3);
}
////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////

int main() {
    int n;  // n: number of instructors
    scanf("%d", &n);
    struct Instructor instructors[n];
    for (int i=0 ; i<n ; i++) {
        instructors[i] = get_info();
    }
    for (int i=0 ; i<n ; i++) {
        print_info(instructors[i]);
    }
    return 0;
}
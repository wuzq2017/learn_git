#include <stdio.h>
int sum(int a, int b)
{
  return a+b;
}
typedef struct {
  char name[255];
  unsigned int age;
  /* boolean sex; */
}student_info_t;
void main(void)
{
  int sum1;
  sum1 = sum(1,3);
  printf("%d\n",sum1);
  printf("hello\n");
  printf("the end\n");
}

int sub(int a, int b)
{
  int diff = a - b;
  return diff;
}
/*
<<<<<<< HEAD
branch main modify!
1111111111111111111111111
*/

/*
=======
  branch dev modified
>>>>>>> dev
*/
/*
  issue_0002 fixed
 */


/*
  this budy modify.
 */

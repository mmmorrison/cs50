#include <stdio.h>
#include <cs50.h>
#include <ctype.h>


int main(int argc, string argv[])
{

  if (argc > 1)
  {
    string initials = " ";
    for (int i = 0; i < argc; i++)
    {
      initials += argv[i][0];
    }
  printf("%s\n", initials);
  }


}

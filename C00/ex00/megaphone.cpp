#include <iostream>
#include <cctype>

#define PUTENDL(x) std::cout << x << std::endl
#define PUT(x) std::cout << x

int main(int argc, char const *argv[])
{
  if(argc == 1 && PUT("* LOUD AND UNBEARABLE FEEDBACK NOISE *"))
    ;
  for (int i = 1; i < argc; i++)
    for(int j = 0; j < (int)strlen(argv[i]); j++)
      PUT((char)toupper(argv[i][j]));
  PUTENDL("");
  return 0;
}

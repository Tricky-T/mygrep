#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char*argv[])
{
  FILE * fp;
  char * line = NULL;
  size_t len=0;
  ssize_t read;
  
  if (argc < 2)
  {
    printf("my_grep: searchterm{file ...]\n");
    exit(EXIT_FAILURE);
  }
  int i;
  for(i=2;i<argc;i++)
  {
    fp = fopen(argv[i], "r");
    if (fp = NULL)
    {
      prinf("my_grep: cannot open file\n")
      exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, fp))!=-1)
    {
      if (strstr(line, argc[1]) != NULL)
        printf("%s\n", line);
    }
  fclose(fp);
  }
  exit(EXIT_SUCCESS)
}

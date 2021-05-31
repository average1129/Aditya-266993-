#include<stdio.h>
#include<stdlib.h>

char* find_end (char * in_str)
{
	for (char * i =in_str; i!=NULL; i++)
	{
		if (*i==';')
		return i;
	}
return NULL;
}

char * find_start (char* in_str, char * r_ptr)
{
char * max = in_str; 
	for (char * i= in_str; i<=r_ptr; i++)
	{
		if (*i=='$')
		{
			max=i;
		}
	}
return max; 
}

void breakstring(char * input_str )
{
char * r_ptr = find_end(input_str);
char * l_ptr = find_start(input_str, r_ptr);

	for(char * i =l_ptr+1; i<r_ptr; i++)
	{
		printf("%c", *i); 

	}
printf("\n\n");
return ;}

void main()
{
    char * line = NULL;
    size_t len =0;
    ssize_t read;
    FILE *fptr;
    fptr= fopen("test1.txt", "r");
    if (fptr==NULL)
    {
        exit (EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, fptr))!=-1)
    
    //printf("%s\n",line);
    breakstring(line);
    return ;
}

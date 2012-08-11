/* 
 * Thousand-line OperSpam
 * A really stupid tool
 *
 * Copyright (c) 2012 The Little Beige Box
 * www.beige-box.com 
 *
 */
#ifdef _WIN32
	#define _CRT_SECURE_NO_WARNINGS 4 //shut up cl386
#endif
 
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	printf("thousand-line operspam\ncopyright (c) 2012 The Little Beige Box\nwww.beige-box.com\n\n");

	if(argc != 4)
	{
		printf("usage: %s <text> <number of lines> <filename>\n",argv[0]);
		return 0;
	}
	else
	{
		//int lines;
		unsigned int numlines,lines;
		char words[128];

		lines = atoi(argv[2]);

		sprintf(words,"%s\n",argv[1]);

		FILE *file;
		file = fopen(argv[3],"a+");

		for(numlines = 0; numlines < lines; numlines++)
		{
			fprintf(file,words);
		}
		fclose(file);
	}
	printf("saved to %s\n",argv[3]);
	return 0;
}
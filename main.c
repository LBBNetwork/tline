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
        printf("thousand-line operspam\ncopyright (c) 2012-2013 The Little Beige Box\nwww.beige-box.com\n\n");

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
		FILE *filename;

                lines = atoi(argv[2]);
                sprintf(words,"%s\n",argv[1]);                
                filename = fopen(argv[3],"a+");

                for(numlines = 0; numlines < lines; numlines++)
                {
			printf("writing line %d of %d... ",numlines, lines);
                        fprintf(filename,words);
			printf("done.\n");
                }
                fclose(filename);
        }
        printf("saved to %s\n",argv[3]);
        return 0;
}
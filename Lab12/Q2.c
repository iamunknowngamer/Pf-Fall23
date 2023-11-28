/* Programmer: Syed Saif ur Rehman Shah
* Description: Comparing two files and indicating whether they are equal or not.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>
#include <stdlib.h>

int compare_files(FILE *fptr1, FILE *fptr2) {
    unsigned long pos;
    int c1, c2;
    for (pos = 0;; pos++) {
        c1 = getc(fptr1);
        c2 = getc(fptr2);
        if (c1 != c2 || c1 == EOF)
            break;
    }
    if (c1 == c2) {
        printf("files are identical and have %lu bytes\n", pos);
        return 0;  // files are identical
    } else
    if (c1 == EOF) {
        printf("file1 is included in file2, the first %lu bytes are identical\n", pos);
        return 1;
    } else
    if (c2 == EOF) {
        printf("file2 is included in file1, the first %lu bytes are identical\n", pos);
        return 2;
    } else {
        printf("file1 and file2 differ at position %lu: 0x%02X <> 0x%02X\n", pos, c1, c2);
        return 3;
    }
}

int main()
{

	FILE* fptr1;
	FILE* fptr2;
	fptr1= fopen("t1.docx", "w");
	fptr2=fopen("t2.docx","w");
	fprintf(fptr1,"%s %s %s %s","this","is","a","test");
	fprintf(fptr2,"%s %s %s %s","this","is","a","test");
	fptr1= fopen("t1.docx", "rb");
	fptr2=fopen("t2.docx","rb");
	compare_files(fptr1,fptr2);
}

//First Fit
#include <stdio.h>
#define max 25

int main()
{
    int frag[max], b[max], f[max], i, j, nb, nf, temp;
    static int bf[max], ff[max];
    printf("\nEnter the number of blocks:");
    scanf("%d", &nb);
    printf("Enter the number of files:");
    scanf("%d", &nf);
    printf("\nEnter the size of the blocks:-\n");
    for (i = 1; i <= nb; i++)
    {
		printf("Block %d:", i);
		scanf("%d", &b[i]);
    }
    printf("Enter the size of the files :-\n");
    for (i = 1; i <= nf; i++)
    {
		printf("File %d:", i);
		scanf("%d", &f[i]);
    }
    for (i = 1; i <= nf; i++)
    {
		for (j = 1; j <= nb; j++)
		{
			if (bf[j] != 1)
			{
				temp = b[j] - f[i];
				if (temp >= 0)
				{
					ff[i] = j;
					break;
				}
			}
		}
		frag[i] = temp;
		bf[ff[i]] = 1;
    }
    printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement");
    for (i = 1; i <= nf; i++)
		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, f[i], ff[i], b[ff[i]], frag[i]);
}
/*
OUTPUT

Enter the number of blocks:3
Enter the number of files:2

Enter the size of the blocks:-
Block 1:5
Block 2:2
Block 3:7
Enter the size of the files :-
File 1:1
File 2:4

File_no:	File_size :	Block_no:	Block_size:	Fragement
1		1		1		5		4
2		4		3		7		3
*/
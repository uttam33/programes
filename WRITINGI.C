#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
FILE *fp;
char *filename = "UTTAM.txt";
char *contant= "uttam plese don't waste time.";
fp=fopen(filename,"w");
if(fp==NULL)
{
printf("%s : failed to open .\n",filename);
}
else
{
printf("%s : opened in write mode.\n",filename);
}
fprintf(fp,"%s\n",contant);
if(!fclose(fp))
printf("%s,closed successfully.n",filename);
getch();
}
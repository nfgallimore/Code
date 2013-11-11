#include<stdio.h>
int main()
{
int spaces,pound,height;
height = 10;
//replace 10 by any no. you need
for(pound=height-spaces; pound < height; pound++)
{
for(spaces = height - pound; spaces < height; spaces--)

{
printf(" ");
}
for(pound= 2z;pound < height ;pound++)//here also
printf("#");
printf(" \n");
}
}

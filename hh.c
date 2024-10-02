#include<stdio.h>
#include<math.h>
void tower(int n,char srcpeg,char auxpeg,cha destnpeg);
void main
{
    int n;
    printf("ente the total no of discks:\n");
    scanf("%d"&n);
    tower(n,'A','B','c');
    printf("tota no of moves=%0.f",pow(2,n)-1);
}
void tower(int n,char srcpeg,char auxpeg,cha destnpeg);
{
    if(n==1)
    {
        printf("moves the disk %d from %C peg to peg %c",n,srcpeg,destnpeg);
        return;
    }
    tower(n-1,srcpeg,destnpeg,auxpeg);
    printf("moves the disk %d from %C peg to peg %c",n,srcpeg,destnpeg);
    tower(n-1,srcpeg,destnpeg,auxpeg);
}
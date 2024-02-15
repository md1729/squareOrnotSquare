/*
Example 8: Write Program C that finds whether a quadrilateral with sides A,B,C,D is a square.
*/
#include<stdio.h>
int main(){
int A,B,C,D;	
printf("Enter the side lengths of the quadrilateral:\n");
scanf("%d %d %d %d",&A,&B,&C,&D);
if(A==B&&B==C&&C==D)
printf("This quadrilateral is a square.\n");	
else
printf("This quadrilateral is not a square.\n");
return 0;
}

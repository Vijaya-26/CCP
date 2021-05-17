//find distance between two points
#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2,y1,y2,S;
	printf("enter the coordinates of point 1:");
	scanf("%f %f",&x1,&y1);
	printf("enter coordinates of point 2:");
	scanf("%f %f",&x2,&y2);
	S=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between points are:%f", sqrt(S));
	return 0;
}

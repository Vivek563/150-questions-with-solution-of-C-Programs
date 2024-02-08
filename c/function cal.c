int sq(int);
int cu(int);

main()
{
	int x,y,z;
	printf("enter any no. ");
	scanf("%d",&x);
 	y=sq(x);
	z=cu(x);
	printf("sq = %d\n",y);
	printf("cu = %d",z);
	getch();
}
int sq(int x)
{
	int g;
	g=x*x;
	return(g);
}
int cu(int x)
{
	int h;
	h=x*x*x;
	return(h);
}


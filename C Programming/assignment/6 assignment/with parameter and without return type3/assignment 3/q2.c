void table(int,int);
void main()
{
	int num=5,i=1;
	table(num,i);
}
void table(int x,int y)
{
    while(y<=10)
	{
		printf("%d*%d=%d\n",x,y,x*y);
		y++;
		
	}
}
void leapyear();
void main()
{
  leapyear();
}
  	void leapyear()
  {
  
	int year=2004;
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("the year is leap year");
	}
	else
	{
		printf("the year is not leap year");
	}
}

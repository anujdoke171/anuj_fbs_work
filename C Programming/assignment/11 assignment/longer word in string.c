void main()
{
	char str[]="RCB left the IPL trophy after 18 years";
	
	char*tok=strtok(str," ");
	
	int max=0;
	char*add='\0';
	while(tok!='\0')
	{
		printf("%s ",tok);
		int len=strlen(tok);
		if(max<len)
		{
			max=len;
			add=tok;
		}
		
		
		
		
		
		
		
	tok=strtok('\0'," ");
	
}
printf("\n%s is maximum string with length %d",add,max);
}
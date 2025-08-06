void main()
{
	char ch='x';
	char *chptr=&ch;
	char* ptrchptr=&chptr;
	*ptrchptr='y';
	printf("\nvalue of ch=%c",*ptrchptr);
	printf("\nvalue of ch=%c",*chptr);
	printf("\nvalue of ch=%c",ch);
}
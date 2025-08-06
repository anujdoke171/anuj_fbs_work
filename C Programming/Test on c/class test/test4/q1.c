

int main() 
{
    int number, start, end;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("enter the start no ");
    scanf("%d", &start);

    printf("Enter the end no ");
    scanf("%d", &end);
    if (start > end) 
	{
        printf("Invalid range: start should be less than or equal to end.\n");
        return 1;
    }

    printf("Factors of %d in the range [%d, %d] are\n", number, start, end);
    
    for (int i = start; i <= end; i++) 
	{
        if (i != 0 && number % i == 0) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


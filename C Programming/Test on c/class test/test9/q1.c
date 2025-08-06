include <stdio.h>

int main() {
    char str[10] = "annuuuj";
    int i, j, k;
    int n = 10;  
#
    for (i = 0; i < n; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (str[i] == str[j]) 
			{
                for (k = j; k < n - 1; k++) 
				{
                    str[k] = str[k + 1];
                }
                n--;        
                str[n] = '\0'; 
                j--;       
            }
        }
    }
    printf("%s", str);
    return 0;
}

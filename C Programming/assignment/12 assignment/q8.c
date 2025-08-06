struct product
{
	int id;
	int quantity;
	int price;
	char name[20];
};
void main()
{
	struct product s1,s2;
	printf("enter the id,quantity,price,name");
	scanf("%d",&s1.id);
	scanf("%d",&s1.quantity);
	scanf("%d",&s1.price);
	scanf("%s",&s1.name);
	printf("enter the id,quantity,price,name");
	scanf("%d",&s2.id);
	scanf("%d",&s2.quantity);
	scanf("%d",&s2.price);
	scanf("%s",&s2.name);
	printf("id=%d\nquantity=%d\nprice=%d\nname=%s",s1.id,s1.quantity,s1.price,s1.name);
    printf("id=%d\nquantity=%d\nprice=%d\nname=%s",s2.id,s2.quantity,s2.price,s2.name);
}

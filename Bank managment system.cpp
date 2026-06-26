#include<stdio.h>
#include<stdlib.h>
struct Book{
	int id;
	char title[50];
    char name[50];
    char author[50];
    int quantity;
    
};
int main(){

struct Book book[5];
int n=0,choice=0,i,id,found;
while(1)
{
	printf("Enter choice=");
	scanf("%d",&choice);
	printf("Library managment system=");
	printf("1.Add books");
	printf("2.Display books");
	printf("3.Search books");
	printf("4. Delete books");
	printf("5.Exit books");
	printf("Enter choice=");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
			printf("Enter book id=");
			scanf("%d",&book[n].id);
			printf("Enter book  Title=");
			scanf("%s",&book[n].title);
			printf("Enter Author name=");
			scanf("%s",& book[n].author);
		   printf("Enter  quantity=");
		   scanf("%d",& book[n].quantity);
		   n++;
		   printf("book added successfully");
		   case 2:
		   	if(n==0)
		   	{
		   		printf("No books Availaval.\n");
		   		
			}
			   else{
			   	printf("\n Book list:\n");
			   	for(i=0;i<n;i++)
			   	{
			   		printf("\n Book id:%d ",book[i].id);
			   		printf("\n Book title: %d",book[i].title);
			   		printf("\n Book Author name:%d",book[i].author);
			   		printf("\n  Quantity :%d\n",book[i].quantity);
				   }
			   }
			   break;
			   case 3:
			   	printf("Enter book Id to search:");
			   	
			   	scanf("%d",&id);
			   	found=0;
			   	for(i=0;i<n;i++)
			   	{
			   		if(book[i].id==id)
			   		{
			   			printf("\n Book found");
			   		    printf("\n Titel :%s\n",book[i].title);
			   		    printf("\n Author :%s",book[i].author);
			   		    printf("\n Quantity :%d\n", book[i].quantity);
			   		    found=1;
			   		    break;
			   		    
					   }
				   }
				   if(found==0);
				   printf("Book not found.\n");
				   break;
				   case 4:
				   	printf("Enter book id to  delete:");
				   	scanf("%d",&id);
				   for(i=0;i<n;i++)
				   {
				   	if(book[i].id==id)
				   	{
				   		int j;
				   		for(j=1;j<n-1;j++)
				   		{
				   			book[j]=book[j+1];
						   }
						   n--;
						   found=1;
						   printf("Book deleted succesfully");
						   break;
						   case 5:
						   	printf("Exit succesfully");
						   	return 0;
						   	default:
						   		printf("Invaild choice!\n");
						   	}
						   }
						   return 0;
					}
				}
				
		}

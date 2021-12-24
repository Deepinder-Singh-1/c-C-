//Setting up Environments ->Header files Required
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//Define String Size using Macro
#define MAX_PRODUCT_NAME_LEN 30 
//Creating All Structures Globally 
//Creating Date Structure
struct Date
{
	int day;
	int month;
	int year;
}date;

// creating structure for  ProductSales 
struct ProductSalesList
{ 
	char productName[MAX_PRODUCT_NAME_LEN];
	int numberSold;
	double salePrice;
	struct Date saleDate;//inherit structure Date 
}prodlist;
//Creating structure for  DailySales
struct DailySalesList
{ 
	char productName[MAX_PRODUCT_NAME_LEN];
	int numberSold;
	double salePrice;
	struct Date saleDate;//inherit structure Date
}dailysales;
//creating structure for SingleSale
struct SingleSaleRecord
{
	int numberSold;
	double salePrice;
	struct Date saleDate;//inherit Structure Date
};
int k=0;
//Used to print the String 
void stringp(char ch[20])
	{	
for(int x=0;x<strlen(ch);x++)//strlen to find the length of string  
	{ 
	if(ch[x]!='\n')
	printf("%c",ch[x]);
	}
	}

//the precedding function used to print data of structure
void printing(struct DailySalesList* dailySales ,int o)
{
	char str[MAX_PRODUCT_NAME_LEN];
	strcpy(str,dailySales[o].productName);//strcpy used to coppy the values 
	printf("%d    %d    %d ",dailySales[o].saleDate.day,dailySales[o].saleDate.month,dailySales[o].saleDate.year);
	stringp(str);//function calling stringp
	printf("  %d",dailySales[o].numberSold);
	printf("\t%0.2lf\n",dailySales[o].salePrice);
}
//the precedding function used to sort date
int cmp(const void* c, const void* c1)
{
	if (((struct DailySalesList*)c)->saleDate.year < ((struct DailySalesList*)c1)->saleDate.year)
	{
	return 0;	
	}
	if (((struct DailySalesList*)c)->saleDate.year == ((struct DailySalesList*)c1)->saleDate.year && ((struct DailySalesList*)c)->saleDate.month < ((struct DailySalesList*)c1)->saleDate.month)
	{
	return 0;	
	}
	
	if (((struct DailySalesList*)c)->saleDate.year == ((struct DailySalesList*)c1)->saleDate.year && ((struct DailySalesList*)c)->saleDate.month == ((struct DailySalesList*)c1)->saleDate.month && ((struct DailySalesList*)c)->saleDate.day < ((struct DailySalesList*)c1)->saleDate.day)
	{
		return 0 ;
	}
	
	return 10;
}
//this function used to sort date and print revenue
//The sorting technice is used : Quick Sort
void Sortion(struct DailySalesList* dailySales ,int n)
{
	qsort(dailySales, n, sizeof(struct DailySalesList), cmp);//sorting technique is used 
	printf("REVENUE DAY MONTH YEAR ");
	printf("\n");
	double d=0.0;
	for(int j=0;j<=5;j+=1)
	{
if(dailySales[j].saleDate.day==dailySales[j+1].saleDate.day && dailySales[j].saleDate.month==dailySales[j+1].saleDate.month &&dailySales[j].saleDate.year==dailySales[j+1].saleDate.year )
	{
	d=d+dailySales[j].numberSold*dailySales[j].salePrice;
	}
else{
	
	d=d+dailySales[j].numberSold*dailySales[j].salePrice;
	printf("%0.2f 0%d 0%d %d\n",d,dailySales[j].saleDate.day,dailySales[j].saleDate.month,dailySales[j].saleDate.year);
	d=0.0;	
	}
	}
}
//the precedding function used to add data into structure
void addSale(struct ProductSalesList* prodList,struct DailySalesList* dailySales,char productName[MAX_PRODUCT_NAME_LEN],struct SingleSaleRecord *saleRec)
{
//populating the prodlist struct using data 
//function is used to copy this data in the prodlist using structure method ->
	strcpy(prodList[k].productName,productName);//strcpy is used to copy 
	//copy the values in the array from structure 
	prodList[k].salePrice=saleRec->salePrice;
	prodList[k].numberSold=saleRec->numberSold;
	prodList[k].saleDate.day=saleRec->saleDate.day;
	prodList[k].saleDate.month=saleRec->saleDate.month;
	prodList[k].saleDate.year=saleRec->saleDate.year;
//populating the dailysales struct using data 
	//used to copy the data in dailysales using structure method ->
	strcpy(dailySales[k].productName,productName);
	dailySales[k].salePrice=saleRec->salePrice;
	dailySales[k].numberSold=saleRec->numberSold;
	dailySales[k].saleDate.day=saleRec->saleDate.day;
	dailySales[k].saleDate.month=saleRec->saleDate.month;
	dailySales[k].saleDate.year=saleRec->saleDate.year;
		k++;
}
// Using the given function As it is no change
int readSalesFile(FILE* fp, struct ProductSalesList* prodList,struct DailySalesList* dailySales)
{
	int numberSalesRead = 0, valuesRead;
	struct SingleSaleRecord saleRec = { 0 };
	char productName[MAX_PRODUCT_NAME_LEN];
while (!feof(fp))
{
	valuesRead = fscanf(fp, "%[^/]/%d/%lf/%d/%d/%d%*c",
	productName, &saleRec.numberSold, &saleRec.salePrice, &saleRec.saleDate.month, &saleRec.saleDate.day,&saleRec.saleDate.year);
if (valuesRead > 0)
{
	addSale(prodList, dailySales, productName, &saleRec);
	numberSalesRead++;
}
}
return numberSalesRead;
}
//Function ViewAllSales
//to view the 1st choice Sales of the products 
void viewAllSales(struct DailySalesList* dailySales ,int n)
{
	printf("DAY MONTH YEAR                       PRODUCT #SOLD   PRICE\n");
	struct DailySalesList d =dailySales[3];
	dailySales[3] =dailySales[2];
	dailySales[2]=d;
	struct DailySalesList x =dailySales[2];
	dailySales[2] =dailySales[1];
	dailySales[1]=x;
//print Dailysales
for(int j=0;j<5;j++)
	{
	printing(dailySales ,j);
	}
}
//view Allproducts
//used to View sale product wise if choice==2
void viewAllproduct(struct ProductSalesList* dailySales ,int n)
{
	printf("PRODUCT   \t#SOLD \t REVENUE\n");
	struct ProductSalesList t =dailySales[3];
	dailySales[3] =dailySales[2];
	dailySales[2]=t;
	struct ProductSalesList t1 =dailySales[2];
	dailySales[2] =dailySales[1];
	dailySales[1]=t1;
	int k=0;
	double y=0.0;
for(int j=0;j<2;j++)
{
	k=k+dailySales[j].numberSold;
	y=y+(dailySales[j].salePrice*dailySales[j].numberSold);
}
	stringp(dailySales[0].productName);
	printf(" \t%d\t%0.2lf\n",k,y);
for(int j=2;j<n-1;j++)
	{
	stringp(dailySales[j].productName);
	printf(" \t%d\t%0.2f\n",dailySales[j].numberSold,dailySales[j].salePrice*dailySales[j].numberSold);
	}
}
	
int main()
{
	FILE *file ;
	struct ProductSalesList prodList[50];   
	struct DailySalesList dailySales[50];
    
	//opening the file in reading mode 
	file=fopen("bhatia.txt", "r") ; 
	//calling Function 
	int read=readSalesFile(file,prodList,dailySales); 
	//Choose
 	printf(" \n*** Seneca Gardens ***\n");
	printf("Select one of the following options:\n");
	printf("1-View All Sales\n");
	printf("2-View Sales By Product\n");
	printf("3-View Sales by Date sorted by revenue\n");
	printf("0-Exit\n");
    // int choice;
	// 	scanf("%d",&choice);
    // do{
    //     switch (choice)
    //     {
    //         case(1):{
    //         viewAllSales(dailySales ,read);
    //         break;
    //     }       
    //     case(2):{
    //         viewAllproduct(prodList ,read);
    //         break;
    //     }
    //     case(3):{
    //         Sortion(dailySales,read);
    //         break;
    //     }
    //     case(0):{
    //         printf("Good bye");
    //         break;
    //     }
    //     while(choice!=0);
    // }
    
	while(1)
		{
		int choice;
		scanf("%d",&choice);
	if(choice==1)
		{ 
	viewAllSales(dailySales ,read);
	printf("\nSelect one of the following options:\n");
	printf("1-View All Sales\n");
	printf("2-View Sales By Product\n");
	printf("3-View Sales by Date sorted by revenue\n");
	printf("0-Exit\n");
		}
	else if(choice==2)
		{
		viewAllproduct(prodList ,read);
		printf("\nSelect one of the following options:\n");
		printf("1-View All Sales\n");
		printf("2-View Sales By Product\n");
		printf("3-View Sales by Date sorted by revenue\n");
		printf("0-Exit\n");
		}
	else if(choice==3)
		{
		Sortion(dailySales,read);
		printf("\nSelect one of the following options:\n");
		printf("1-View All Sales\n");
		printf("2-View Sales By Product\n");
		printf("3-View Sales by Date sorted by revenue\n");
		printf("0-Exit\n");
		}
	else if(choice==0)
		{
		printf("Good Bye");
		break;
		}
	else
		{
		printf("Enter a valid integer between 0 and 3: ");
		}
		}
		return 0;
}
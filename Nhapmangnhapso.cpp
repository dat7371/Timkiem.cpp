#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void nhapMang(int a[],int &n);
void xuatMang(int a[],int &n); 
int main()
{
	int a[20],n;
	nhapMang(a,n);
	printf("Mang vua phat sinh la:\n ");
	xuatMang(a,n);

}
void nhapMang(int a[],int &n)
{
	printf("Nhap so pt mang: ");
	scanf("%d",&n);
	srand(time(0));
	for(int i=0;i<n;i++)
		a[i]=1+rand()%(20-1+1); 
}
void xuatMang(int a[],int &n)
{
	for(int i=0;i<n;i++) 
		printf("%d\t",a[i]);
	printf("\n"); 
}


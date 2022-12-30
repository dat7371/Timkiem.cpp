#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void nhapMang(int a[],int n);
void xuatMang(int a[],int n); 
int timKiem(int a[],int n,int X); 
int main()
{
	int a[20],n,X,vt;
	printf("Nhap so pt mang: ");
	scanf("%d",&n);
	nhapMang(a,n);
	printf("Mang vua nhap la:\n ");
	xuatMang(a,n); 
	printf("Nhap gia tri can tim: ");
	scanf("%d",&X);
	vt=timKiem(a,n,X);
	if(vt==-1)
		printf("Khong tim thay\n");
	else
		printf("Tim thay tai vi tri thu %d\n", vt+1); 
}
void nhapMang(int a[],int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
		a[i]=1+rand()%(20-1+1); 
}
void xuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");	
} 
int timKiem(int a[],int n,int X)
{
	for(int i=0;i<n;i++)
			if(a[i]==X)
				return i;
	return -1; 
			
}

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef struct class{
    int ClassID;
    char CourseName[30];
    char Room[10];
    int Day;
    char slots[10];
}lop_hoc;
void nhap_lop(lop_hoc *K, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Moi ban nhap ma lop hoc [%d]:\n",i+1);
        scanf("%d",&K[i].ClassID);
        printf("Moi ban nhap ten hoc phan [%d]:\n");
        gets(K[i].CourseName);
        printf("Moi ban nhap so phong [%d]:\n",i+1);
        gets(K[i].Room);
        printf("Moi ban nhap ngay hoc cua lop [%d]:\n",i+1);
        scanf("%d",&K[i].Day);
        while(K[i].Day<2 || K[i].Day>7){
            printf("Moi nhap lai ngay hoc cua lop [%d]:\n",i+1);
            scanf("%d",&K[i].Day);
        }
        printf("Moi ban nhap ca hoc cua lop [%d]:\n");
        gets(K[i].slots);
    }
}
void bo_sung(lop_hoc *K, int n, int j){
    int i;
	for(i=n-j;i<n;i++)
	{
		printf("Moi nhap ma lop hoc [%d]:\n",i+1);
		scanf("%d",&K[i].ClassID);
		printf("Nhap tenhoc phan [%d]:\n",i+1);
		gets(K[i].CourseName);
		printf("Nhap so phong [%d]:\n",i+1);
		gets(K[i].Room);
		printf("Nhap ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		while(K[i].Day<2||K[i].Day>7)
		{
		printf("moi nhap lai ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		}
		printf("Nhap ca hoc cua lop [%d]:\n",i+1);
		gets(K[i].slots);
	    while(K[i].slots[1]!=45)
	    {
	    	printf("Nhap lai ca hoc cua lop [%d]:\n",i+1);
	       	gets(K[i].slots);
		}
	}
}
int inra(lop_hoc *K,int n){
    int i;
    printf("%-10s | %-30s | %-10s | %-10s | %-10s  | \n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
    for(i=0;i<n;i++){
        printf("%-10d | %-30s | %-10s | %-10d | %-10s  |\n",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
    }
}


int main()
{
	int m,n=0,j=0;
	lop_hoc K[50];
	while(m!=6)
	{
		printf("\nChuong trinh quan li lop hoc:\n1.Bo sung lop hoc\n2.In ra thong tin cac lop hoc\n3.Tim kiem theo phong\n4.Sap xep\n5.Kiem tra trung phong\n6.Thoat\n");
		scanf("%d",&m);
		switch(m){
			case 1: 
                if(n==0){
				    printf("Nhap so lop muon in thong tin:\n");
				    scanf("%d",&n);
				    while(n<1||n>200){
				        printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin:\n");
				        scanf("%d",&n);
				    }
				nhap_lop(K,n);
			    }
			else
			{
				printf("Nhap so lop muon nhap them :\n");
				scanf("%d",&j);
				while(j<=0)
				{
				printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin:\n");
				scanf("%d",&j);
			    }
			    while(n+j>200)
			    {
				printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin them:\n");
				scanf("%d",&j);
			    }
			    n+=j;
				bo_sung(K,n,j);
			}

                break;
			case 2:
				inra(K,n);
			    break;
			case 3: 
			    break;
			case 4:
			    break;
			case 5:
			    break;
			case 6:
			    break;
			default: printf("Error, please enter again!\n");
	    }
    }
}


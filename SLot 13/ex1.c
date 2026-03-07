#include<stdio.h>
#define Max 100
int addvalue(int n, int a[]){
 if(n>=Max){
 	printf("Mang day!");
 }
		printf("nhap phan tu: ");
		scanf("%d",&a[n]);
		return n+1;
	}
int searchValue(int a[],int n, int x){
	int i;
	for (i=0;i<=n;i++){
		if(a[i]==x)
		return i;
	}return -1;
}
int removeFirst(int a[],int x, int n){
	int i,j;
	for(i=0;i<n;i++){
		if (a[i]==x){
			for(j=i;j<n-1;j++){
				a[j]=a[j+1];}
				return n-1;
		}
	}
	printf("khong tim thay!\n");
	return n;
}
int removeAll(int a[],int n,int x){
	int i,j;
	int found=0;
	for(i=0;i<n;i++){
		if (a[i]==x){
			found=1;
			for (j=i;j<n-1;j++){
				a[j]=a[j+1];}
				n--;
				i--;
			}
		}
		if(!found)
		printf("Khong tim thay!\n");
		return n;
	}
void printArr(int a[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d",a[i]);
}
void printAscending(int a[],int n){
	int i, j, temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void printDescending(int a[], int n){
	int i, j, temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main (){
	int a[Max];
	int n=0;
	int choice,x,pos;
do {
    printf("\n1. Add\n");
    printf("2. Search\n");
    printf("3. Remove first\n");
    printf("4. Remove all\n");
    printf("5. Print\n");
    printf("6. Print ascending\n");
    printf("7. Print descending\n");
    printf("0. Quit\n");
    printf("choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        	n=addvalue(n,a);
            // Add value
            break;
        case 2:
        	printf("nhap gia tri can tim: ");
        	if (scanf("%d",&x)!=1){printf("ERROR!");
			}
        	pos=searchValue(a,n,x);
        	if (pos==-1){
        		printf("khong tim thay gia tri!\n");
			}else printf("tim thay tia vi tri %d\n",pos);
            // Search value
            break;
        case 3:
        	printf("nhap gia tri can xoa: ");
        	if (scanf("%d",&x)!=1){printf("ERROR!");
			}
        	n=removeFirst(a,x,n);
            // Remove first
            break;
        case 4:
        	printf("nhap gia tri can tim: ");
        	if (scanf("%d",&x)!=1){printf("ERROR!");
			}
        	n=removeAll(a,n,x);
            // Remove all
            break;
        case 5:
        	printArr(a,n);
            // Print array
            break;
        case 6:
        	printAscending(a,n);
            // Print ascending
            break;
        case 7:
        	printDescending(a,n);
            // Print descending
            break;
        case 0:
            printf("Exit...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

} while(choice != 0);
return 0;
}
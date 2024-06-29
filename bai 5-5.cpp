#include<stdio.h>
#include<string.h>
struct mon{
	char ma[20];
	char ten[50];
	char hinhthuc[20];
}; 
void sapxep(struct mon ds[], int n){
	struct mon temp;
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (strcmp(ds[j].ten, ds[j+1].ten) > 0){
				temp = ds[j];
				ds[j] = ds[j+1];
				ds[j+1] =temp;
			} 
		} 
	} 
}
int main (){
	int n;
	scanf ("%d",&n);
	
	struct mon ds[n];
	for (int i=0; i<n; i++){
		scanf ("%s", ds[i].ma);
		scanf ("%s", ds[i].ten);
		scanf ("%s", ds[i].hinhthuc);
	}
	sapxep(ds,n);
	for (int i=0; i<n; i++){
		 printf("%s, %s, %s\n", ds[i].ma, ds[i].ten, ds[i].hinhthuc);
	}
	return 0;
}

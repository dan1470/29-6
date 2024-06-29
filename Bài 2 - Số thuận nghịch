#include <stdio.h>
#include <string.h>
int ktra(char *n){
	int l=strlen(n);
	for (int i=0; i<l; i++)
		if (n[i] != n[l-1-i])  // kiem tra so thuan nghich
			return 0;
	return 1;
} 
int main(){
	int t;
	scanf ("%d",&t);
	char n[51];
	while (t--){
		scanf ("%s",n);
		if (ktra(n)) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}

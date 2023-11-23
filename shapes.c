#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    double arr[n],temp;
    double p;
    triangle temp1;
    for (int i=0; i<n; i++) {
      p = (tr[i].a+tr[i].b+tr[i].c)/2.0;
      arr[i] = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    for (int i =0; i<n; i++) {
    for (int j = i+1; j<n; j++) {
    if (arr[i]>arr[j]){
      temp = arr[j];
      arr[j]= arr[i];
      arr[i] = temp;
      
      temp1 = tr[j];
      tr[j] = tr[i];
      tr[i] = temp1;  
    } 
    }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
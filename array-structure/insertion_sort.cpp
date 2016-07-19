#include <iostream>

using namespace std;
#define N 100

int main(){
	int n;
	cin >> n;
	int a[N];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int k = 0; k < n; k++){
		printf("%d ",a[k]);
	}

	int tmp,j;
	for(int i = 1; i < n; i++){
		printf("\n");
		
		tmp = a[i];
		j = i - 1;
		while(j >= 0 & a[j] > tmp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
		for(int k = 0; k < n; k++){
			printf("%d ",a[k]);
		}


	}
}


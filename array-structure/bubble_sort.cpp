#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int cnt = 0;
	bool chk = true;
	int arr[n];
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	while(chk){
		chk = false;
		for( int i = 0 ; i < n-1 ; i++ ){
			if(arr[i] > arr[i+1]){
				int tmp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = tmp;
				cnt++;
				chk = true;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d\n",cnt);
}



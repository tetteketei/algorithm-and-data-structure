#include <iostream>

using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	
	for( int i = 0 ; i < n ; i++ ){
		cin >> a[i];	
	}
	int cnt = 0;	
	int min_idx;
	int tmp;	
	for( int i = 0 ; i < n ; i++ ){
		min_idx = i;
		for( int j = i; j < n ; j++ ){
			if( a[min_idx] > a[j] ){
				min_idx = j;	
			}		
		}
		if(min_idx != i){	
			tmp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = tmp;
			cnt++;
		}
	}
	
		
	for( int i = 0 ; i < n ; i++ ){
		cout << a[i] ;
		cout << " " ;
	}
	cout << endl;

	cout << cnt << endl;

}

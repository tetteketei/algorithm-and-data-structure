#include <iostream>
using namespace std;

/*
input
	the number of trumps
	trumps data to be sorted (ex H4 C9 S4 D2 C3)
output
	sorted data (by bubble sort) (ex D2 C3 H4 S4 C9)
	stable or not stable
	sorted data (by selection sort)
	stable or not stable

*/

struct Card{
	char suit, value;
};

void bubble(struct Card A[], int n){

	bool chk = true;
	while( chk ){
		chk = false;
		for ( int i = 0 ; i < n-1 ; i++){
			if(A[i].value > A[i+1].value){
				Card tmp = A[i+1];
				A[i+1] = A[i];
				A[i] = tmp;
				chk = true;
			}
		}
	}
}


void selection(struct Card A[], int n){
	int min_idx;
	for ( int i = 0 ; i < n ; i++ ){
		min_idx = i;
		for( int j = i ; j < n ; j++ ){
			if(A[min_idx].value > A[j].value){
				min_idx = j;
			}
		}
		if(min_idx != i){
			Card tmp = A[i];
			A[i] = A[min_idx];
			A[min_idx] = tmp;
		}
	}
}

void printCard(struct Card A[], int n){

	for( int i = 0 ; i < n ; i++ ){
		cout << A[i].suit;
		cout << A[i].value;
		cout << " ";
	}
	cout << endl;

}

bool isStable(struct Card C1[], struct Card C2[], int n){

	for( int i = 0 ; i < n ; i++ ){
		if(C1[i].suit != C2[i].suit) return false;
	}

	return true;
}

int main(){
	Card C1[100], C2[100];
	int n;

	cin >> n;
	for( int i = 0 ; i < n ; i++ ){
		cin >> C1[i].suit >> C1[i].value;
	}

	for( int i = 0 ; i < n ; i++ ) C2[i] = C1[i];

	bubble(C1,n);
	selection(C2,n);

	printCard(C1,n);
	cout << "stable" << endl;

	printCard(C2,n);
	if( isStable(C1,C2,n) ) cout << "stable" << endl;
	else cout << "not stable" << endl;

	return 0;
}

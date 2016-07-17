#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int len;
	cin >> len;
	int arr[len];
	int minv,maxv;
	cin >> minv;
	maxv = -1000000000;
	int tmp;
	for(int i = 1; i < len; i++){
		cin >> tmp;	
		maxv = max(maxv,tmp - minv);			
		minv = min(minv,tmp);
	}
	cout << maxv << endl;
}

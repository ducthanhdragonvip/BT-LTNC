#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	int dong = m,cot = n,tmp = 1,p = 0;
	while(tmp <= m*n){
		for(int i = p; i < cot; i++) 
			a[p][i] = tmp++;

		for(int i = p+1; i < dong; i++) 
			a[i][cot-1] = tmp++;

		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--) 
				a[dong-1][i] = tmp++;
		}

		if(p!=cot-1){
			for(int i = dong-2; i > p; i--) 
				a[i][p] = tmp++;
		}	

		p++;dong --; cot --;
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

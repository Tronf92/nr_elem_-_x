#include <iostream>
using namespace std;

void citire(int sir[100][100],int n,int m);
void comparare(int sir[100][100],int n,int m,int elem);

void citire(int sir[100][100],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout << "sir[" << i << "][" << j << "]=";
			cin >> sir[i][j];
		}
	}
}

void comparare(int sir[100][100],int n,int m,int elem){
	int i,j,nr=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(elem<sir[i][j]){
				nr++;
			}
		}
	}
	if(nr!=0){
		cout << "Sunt "<< nr << " elemente mai mici ca " << elem << endl;
	}
	else{
		cout << "Nu exista nici un element mai mic ca " << elem << endl;
	}
}

int main(){
	int sir[100][100],n,m,elem;
	cout << "Introduceti n" << endl;
	cin >> n;
	cout << "Introduceti m" << endl;
	cin >> m;
	citire(sir,n,m);
	cout << "Introduceti un element: " << endl;
	cin >> elem;
	comparare(sir,n,m,elem);

	system("pause");
	return 0;
}
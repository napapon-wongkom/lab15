#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double A[][N]){
	for(int x=0;x<N;x++){
		cout<<"Row "<<x+1<<": ";
		for(int y=0;y<N;y++){
			cin>>A[x][y];
		}
	}
}

void findLocalMax(const double A[][N],bool B[][N]){
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			if(x==0||y==0||x==N-1||y==N-1){
				B[x][y]=0;
			}else{
				if(A[x][y]>=A[x-1][y] && A[x][y]>=A[x+1][y] && A[x][y]>=A[x][y-1] && A[x][y]>=A[x][y+1]){
				B[x][y]=1;
			    }else B[x][y]=0;
			}
			
		}
	}
}

void showMatrix(const bool A[][N]){
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			if(A[x][y]==1){
				cout<<"1 ";
			}else if(A[x][y]==0){
				cout<<"0 ";
			}

		}
		cout<<"\n";
	}
}
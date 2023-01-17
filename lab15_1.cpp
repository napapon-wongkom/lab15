#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1; i<10; i++)   
    {  
        T keep = d[i];  
        int j= i-1;  
        while(j>=0 && keep >= d[j])  
        {  
            d[j+1] = d[j];   
            j = j-1;  
        }  
        d[j+1] = keep;
        cout<<"Pass "<<i<<":";
		for(int z=0;z<10;z++){
			cout<<d[z]<<" ";
		}
        cout<<"\n";
    }  
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

#include<iostream>
using namespace std;

int main(){
	int i,j;
	cout<< "Enter number of rows: ";
	cin>>i;
	
	cout << "Enter number of colunms : ";
	cin>>j;
	
	for(int n=1;n<=i;n++){
		for(int k=1;k<=j;k++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

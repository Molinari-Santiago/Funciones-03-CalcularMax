#include <iostream>

using namespace std;
int CalcularMaximo(int a, int b, int c);
int main(){
	
	int n1, n2, n3;
	cout<<"ingrese un numero"<<endl;
	cin>>n1;
	cout<<"ingrese otro numero"<<endl;
	cin>>n2;
	cout<<"ingrese otro numero"<<endl;
	cin>>n3;
	cout<<" el maximo es: "<<CalcularMaximo(n1,n2,n3);
	return 0;
}

    int CalcularMaximo(int a,int b, int c){
    int M;
    if(a>b, a>c){
    	M=a;
		}
	    if(b>a, b>c){
		M=b;}
		else if (c>a, c>b){
		M=c;}
		
		return M;
	}















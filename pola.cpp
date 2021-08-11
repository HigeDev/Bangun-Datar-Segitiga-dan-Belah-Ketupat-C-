#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Masukkan Nilai Bilangan : "; cin>>n;
	
	cout<<"\n=====Segitiga Siku-Siku=====\n";
	for (int i=1; i<=n; i++){
		for (int spasi=n; spasi<i; spasi--){
			cout<<" ";
		}
		for (int bintang=1; bintang<=i; bintang++){
			cout<<"*";
		}
	cout<<endl;
	}
	
	for (int i=1; i<=n; i++){
		for (int spasi=1; spasi<=n-i; spasi++){
			cout<<" ";
		}
		for (int bintang=1; bintang<=i; bintang++){
			cout<<"*";
		}
	cout<<endl;
	}
	
	cout<<"\n=====Segitiga Sama Kaki=====\n";
	for(int i=1; i<=n; i++){
        for(int spasi=n; spasi>=i; spasi--){
			cout<<" ";
        }
        for(int bintang=1; bintang<=i+(i-1); bintang++){
            cout<<"*";
        }
		cout<<endl;
    }
    
	cout<<"\n=====Belah Ketupat=====\n";
    n = n / 2;
	for (int i = 1; i <= n; i++){	
		for (int j = n; j >= i; j--)
			cout<<" ";
		for (int s = 1; s <= i + (i - 1); s++)
			cout<<"*";
		cout<<"\n";
	}
	for (int i = 0; i <= n; i++){
		for (int j = 1; j <= i; j++)
			cout<<" ";
		for (int s = 0; s >= (i - n) ; s--)
			cout<<"*";
		for (int s = 1; s <= (n - i) ; s++)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}
	


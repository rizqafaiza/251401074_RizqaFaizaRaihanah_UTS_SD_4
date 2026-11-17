#include<iostream>
using namespace std;

void total(int data[4][5]){
    for (int i =0; i<4; i++){
        int total=0;
        int min=data[i][0];
        int max=data[i][0];

        for(int j=0; j<5; j++){
            total=total+data[i][j];

            if(data[i][j]<min){
                min = data[i][j];
            }

            if(data[i][j]>max){
                max = data[i][j];
            }
        }

        cout << "total penjualan produk " << i + 1 <<": " << total << endl;
        cout << "penjualan terkecil: " << min << endl;
        cout << "penjualan terbesar: " << max << endl;
    }
}

int main(){
    int produk[4][5];

    for(int i=0; i<4; i++){
        cout << "produk ke-" << i+1 << ": " << endl;
        for(int j=0; j<5; j++){
            cout << "hari ke-" << j+1 << ": ";
            cin >> produk[i][j];
        }
    }

    total(produk);
}

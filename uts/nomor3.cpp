#include <iostream>
using namespace std;



int main(){
    int top=-1, MAX;
    
    cout << "Masukkan jumlah huruf:";
    cin >> MAX;
    
    char stack[MAX];
    cout <<"Masukkan huruf: " << endl;
    for(int i=0; i<MAX; i++){
        top++;
        cin >> stack[i];
    }

    cout << "Kata awal: ";
    for(int i=0; i<MAX; i++){
        cout << stack[i] << " ";
    }

    cout << endl;

    cout << "Setelah dibalik: ";
    for(int i=top; i>=0; i--){
        cout << stack[i] << " ";
        top--;
    }

    cout << endl;

    if(top = -1){
        cout << "stack kosong" << endl;
    }
}
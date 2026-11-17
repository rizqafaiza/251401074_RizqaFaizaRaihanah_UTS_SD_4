#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int nilai){
        data = nilai;
        prev = nullptr;
        next = nullptr;
    }
};

Node* head;
Node* tail;

void insert(int data){
    Node* baru = new Node(data);
    if (head == nullptr){
        head = baru;
        tail = baru;
    } else if(data>head->data){
        baru->next = head;
        head = baru;
    } else if(data>tail->data){
        tail->next = baru;
        tail = baru;
    } else {
        baru->next= head->next;
        head->next = baru;
    }
}

void hapus(int data){
    Node* temp = head;
}

int main(){
    Node* root = nullptr;
    int data, batas;
    cout<< "Masukkan angka(0=selesai): ";
    cin >> data;

    while(data!=0){
        insert(data);
        cin >> data;
    }

    cout << "Masukkan batas: ";

}
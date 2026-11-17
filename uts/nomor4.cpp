#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int nilai){
        data = nilai;
        left = nullptr;
        right = nullptr;
    }
};

int  leaf=0, satu_anak=0, dua_anak=0;

void inorder(Node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    if(root ->left==nullptr && root ->right==nullptr){
        leaf+=1;
    }

    if((root ->left!=nullptr && root ->right==nullptr) || (root ->left==nullptr && root ->right!=nullptr)){
        satu_anak+=1;
    }

    if((root ->left!=nullptr && root ->right!=nullptr)){
        satu_anak+=1;
    }
}

void insert(Node*& root, int data){
    if (root == nullptr){
        root = new Node(data);
        return;
    }

    if(data>root->data){
        insert(root->right, data);
    } else if(data<root->data){
        insert(root->left, data);
    }
}

int main(){
    Node* root = nullptr;
    int angka;


    cout << "Masukkan angka: ";
    cin >> angka;

    while(angka != 0){
        insert(root, angka);
        cin >> angka;
    }
    cout << endl;

    inorder(root);

    cout << "Leaf: " <<leaf << endl;
    cout << "Satu Anak: " <<satu_anak << endl;
    cout << "Dua Anak: " <<dua_anak << endl;
}
#include <iostream>
using namespace std;

int main(){
    int n,ind=0;
    bool ada=false;
    char newalp[52];
    char save[52];
    string kata;
    cout << "gunakan '-' untuk spasi" << endl;
    cout << "masukkan kata yang ingin di left rotate alphabetnya: ";
    cin >> kata;

    n=kata.length();
    cout << "masukkan mau me left-rotate berapa digit angka: ";
    int k;
    cin >>k;
    
    k>26? k=k%26:0;
    
    string alp="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "urutan alphabet sebelum di rotate: " << alp << endl;
    for(int i=0; i<k; i++){
        save[ind++]=alp[i];
    }
    for(int i=26; i<26+k; i++){
        save[ind++]=alp[i];
    }
    
    ind=0;
    for(int i=0; i<26-k; i++){
        newalp[i]=alp[i+k];
    }
    for(int i=26; i<52; i++){
        newalp[i]=alp[i+k];
    }
    for(int i=26-k; i<26; i++){
        newalp[i]=save[ind++];
    }
    for(int i=52-k; i<52; i++){
        newalp[i]=save[ind++];
    }
    
    int integ[100];
    cout << "urutan alphabet setelah di rotate: ";
    for(int i=0; i<52; i++){
        cout << newalp[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            if(kata[i]==alp[j]){
                integ[i]=j;
                break;
            } else{
                integ[i]=123;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=26; j<52; j++){
            if(kata[i]==alp[j]){
                integ[i]=j;
                break;
            }
        } 
    }
    
    cout <<endl << "kata setelah dirotate: ";
    for(int i=0; i<n; i++){
        ada=false;
        for(int j=0; j<52; j++){
            if(integ[i]==j){
                cout << newalp[j];
                ada=true;
                break;
            } 
            } if(!ada){
                cout << kata[i];
        }
    }
    
    return 0;
}

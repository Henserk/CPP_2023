#include <iostream>
using namespace std;

int sort(int mas[]){
    for (int i=0;i<10;i++){
        for (int j=0;j<10-1-i;j++){
            if(mas[j]< mas[j+1]){
            swap(mas[j],mas[j+1]);
            }
        }
    }
    for (int i=0;i<10;i++){
        cout<<mas[i]<<" ";
    }
}
int main(){
    int mas[10]={1, 8, 7, 6, 5, 4, 9, 2, 15, 12};
    sort(mas);
    return 0;
}

#include <iostream>

using namespace std;
int main(){
   int contador = 0;
   float num;
   float*vet = new float;
   cout<<"Diga um numero(zero para parar): ";
   cin>>num;
   while(num!=0){
       vet[contador] = num;
       contador++;
       cout<<"Diga um numero(zero para parar): ";
       cin>>num;
   }
   cout << "Foram digitados "<<contador<<" numeros e eles foram:"<<endl;
   for (int j = 0; j < contador; j++) {
        cout << vet[j] << " | ";
    }
   delete[] vet;
}


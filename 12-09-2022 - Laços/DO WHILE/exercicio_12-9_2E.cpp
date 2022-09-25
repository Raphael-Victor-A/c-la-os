#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int i = 1;
    int soma = 0;

    do{

        soma = soma + i;
        i++;
    }while (i<=50);

     cout<<soma<< "\n";


 return 0;
}


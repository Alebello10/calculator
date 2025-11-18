#include <iostream>
using namespace std;

int main()
{
    int operatore;
    float primo_numero, secondo_numero, risultato;
    
    cout<<"Con quali numeri vuoi fare un operazione? (inserire num1 e num2)\n";
    cin>>primo_numero;
    cin>>secondo_numero;
    cout<<"\nQuale operatore vuoi?\n1 per somma\n2 per sottrazione\n3 per divisione\n4 per prodotto\n";
    cin>>operatore;
    if(operatore==1){
        risultato=primo_numero+secondo_numero;
        cout<<"\nIl risultato della seguente operazione è "<<risultato;
    }else if(operatore==2){
        risultato=primo_numero-secondo_numero;
        cout<<"\nIl risultato della seguente operazione è "<<risultato;
    }
        else if(operatore==3) {
        if(secondo_numero==0) {
            cout << "Errore: divisione per zero!\n";
        }
        risultato=primo_numero/secondo_numero;
    } 
    else if(operatore==4){
        risultato=primo_numero*secondo_numero;
    } 
    else{
        cout<<"Operatore non valido.\n";
    }
    cout<<"\nIl risultato dell'operazione è: "<<risultato;
    
    }

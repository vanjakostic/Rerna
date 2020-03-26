#include <iostream>

#include "rerna.hpp"

using namespace std;

void IspisRerna (const Rerna &r){

    cout<<"Rerna: "<<endl;
    cout<<"Stanje : ";
    switch(r.getStanje()){
    case pokvarena:
        cout<<"Pokvarena"<<endl;
        break;
    case iskljucena:
        cout<<"Iskljucena"<<endl;
        break;
    case ukljucena:
        cout<<"Ukljucena"<<endl;
        break;
    }
}
void meni() {

    cout<<"Izaberite operaciju"<<endl;
    cout<<"1. Ukljuci rernu"<<endl;
    cout<<"2. Iskljuci rernu"<<endl;
    cout<<"3. Pokvari rernu"<<endl;
    cout<<"4. Popravi rernu"<<endl;
    cout<<"5. Pojacaj temperaturu"<<endl;
    cout<<"6. Smanji temperaturu"<<endl;
    cout<<"7. Prikazi stanje"<<endl;
    cout<<"8. Kraj rada programa"<<endl;
}

int main()
{
    Rerna r1;
    IspisRerna(r1);
    int n;
    meni();
    do{
        cin>>n;
        switch(n){
        case 1:
            if(r1.ukljuci()){
                    cout<<"Ukljuceno"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;

        case 2:
            if(r1.iskljuci()){
                    cout<<"Iskljuceno"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;

        case 3:
            if(r1.pokvari()){
                cout<<"Pokvareno"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;

        case 4:
            if(r1.popravi()){
                    cout<<"Popravljeno"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;
        case 5:
            if(r1.pojacaj()){
                    cout<<"Temperatura povecana"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;
        case 6:
            if(r1.smanji()){
                    cout<<"Temperatura smanjena"<<endl;
            }
            else
                cout<<"Greska"<<endl;
            break;
        case 7:
            IspisRerna(r1);

        }

    }while(n!=8);



    return 0;
}

#include <iostream>
using namespace std;


struct Student {
    string etunimi;
    string sukunimi;
    string opiskelijnro;
    int opintopisteet;
};


Student luoOpiskelija()
{
    Student o;
    cout << "Anna opiskelijan etunimi: ";
    cin >> o.etunimi;
    cout << "Anna opiskelijan sukunimi: ";
    cin >> o.sukunimi;
    cout << "Anna opiskelijan opiskelijanumero: ";
    cin >> o.opiskelijnro;
    cout << "Anna opiskelijan opintopisteet: ";
    cin >> o.opintopisteet;

    return o;
}


int main() {
    Student opiskelijaLista[20];


    int amount, i = 0;
    cout << "Kuinka monelle opiskelijalle luodaan tiedot ? (MAX 20) : ";
    cin >> amount;
    for (i = 0; i < amount; i++)
    {
        opiskelijaLista[i] = luoOpiskelija();
    }

    for (i = 0; i < amount; i++)

    {
        cout << "Opiskelijan numero " << i + 1 << " tiedot.\n";
        cout << "Etunimi: " << opiskelijaLista[i].etunimi << endl;
        cout << "Sukunimi: " << opiskelijaLista[i].sukunimi << endl;
        cout << "Opiskelijanumero: " << opiskelijaLista[i].opiskelijnro << endl;
        cout << "Opintopisteet: " << opiskelijaLista[i].opintopisteet << endl;
    }

    return 0;
}
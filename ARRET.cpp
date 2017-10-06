#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <cstdio>

using namespace std;
void TEMPS();
void newline ();
/*DE LA PART DE VOTRE AMI DIAMADY*/

int main()
{
    system("title ARRET PROGRAMMER");
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "@----------------------------------------------------------------------@" << endl;
    cout << "@ *****BONJOIR ET BIENVENUE DANS MON PROGRAMME D'ARRET PROGRAMMER***** @" << endl;
    cout << "@______________________________________________________________________@" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
    cout << "1- TAPEZ 1 SI VOUS VOULEZ ENTRER LE NOMBRES DE TEMPS DANS LAQUELLE TON PC S ETEIGNE"<< endl;
    cout << "2- TAPEZ 4 SI VOUS VOULEZ QUITTER" << endl << endl ;
    cout << "VEILLEZ SAISIR VOTRE CHOIX : " ;					//**********
    short choix ; cin >> choix ; cout << endl ;					//**********
    while(choix < 1 || choix > 2){						//**        **     **
    choix = 0;									//**      ****** ******
    cout << "Choix juste compris entre 1 - 2 , Resseyer svp : " ;		//**        **     **
    cin >> choix ;								//**********
        }									//**********
    switch(choix){
        case 1 : TEMPS();
            break;
        case 2 :  cout << endl << "Vous avez quitter le programme , A bientot !!!"  << endl ;
            break;
    return 0;
}
}
void TEMPS() {
    system ("cls") ;
    system("mode con cols=60 lines=10");
    system ("color 0b") ;
    cout << "***************************************" << endl;
    cout << "### BIENVENUE DANS L OPTION D ARRET ###" << endl;
    cout << "***************************************" << endl << endl;
    unsigned int heurs, munites(0), secondes(0),t(0);
    munites >0 && munites < 60;
    heurs >0 && heurs < 8;
    secondes >0 && secondes < 60;
    cout << "DANS COMBIEN DE TEMPS VOULEZ VOUS QUE VOUTRE PC S ETEIGNE " << endl << endl;
    cout << "HEURES : "  ;   cin >> heurs;    while(heurs < 0 || heurs > 7)          { heurs = 0;     cout << "Choix juste compris entre 0 - 7h ,  Resseyer svp : " ;    cin >> heurs ;}
    cout << "MUNITES : " ;   cin >> munites;  while(munites < 0 || munites > 59)     { munites = 0;   cout << "Choix juste compris entre 0 - 59mn ,Resseyer svp : " ;    cin >> munites ;}
    cout << "SECONDES : ";   cin >> secondes; while(secondes < 1 || secondes > 60)   { secondes = 0;  cout << "Choix juste compris entre 1 - 60s , Resseyer svp : " ;    cin >> secondes ;}
    int t1,t2,t3;
    system("cls");
    cout << "si vous voulez annuller veiller clicker sur fermer " << endl << "clicker sur une touche pour voire le chronometre";
    char atart = _getch();
    do
    {
        system("mode con cols=32 lines=4");
        cout << "*******************************" << endl;
        cout << "VOTRES PC S ARRET DANS "<< heurs << ":" << munites << ":" << secondes << endl;
        cout << "*******************************" << endl;
        Sleep (600);
        --secondes ;
        if (secondes==0 && munites!=0 )   {munites--;secondes = 59;}
        else if (secondes==0 && munites==0 )   { secondes= 59;munites=59;heurs--;}
        t1 = heurs *60 * 60; t2 = munites * 60 ; t3 = t1 + t2 + secondes ;
        system("cls");
    }while (t3 > 0);system("shutdown /s /t 0");

}

#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

void meniu_recursivitate();
void recursivitate_definitie();
void recursivitate_aplicatii();
void recursivitate_aplicatia1();
void recursivitate_aplicatia2();
void recursivitate_aplicatia1_program();
void recursivitate_aplicatia2_program();
int factorial(int n);
int putere(int n, int a);
void meniu_backtracking();
void backtracking_definitie();
void backtracking_aplicatii();
void backtracking_aplicatia1();
void backtracking_aplicatia2();
void backtracking_aplicatia1_program();
void backtracking_aplicatia2_program();
void meniu_divideetimpera();
void divideetimpera_definitie();
void divideetimpera_aplicatii();
void divideetimpera_aplicatia1();
void divideetimpera_aplicatia2();
void divideetimpera_aplicatia1_program();
void divideetimpera_aplicatia2_program();
void meniu_test();
void test();
int intrebare_cu_un_raspuns(char* intrebare, int raspuns_corect);
int intrebare_cu_multe_raspunsuri(char* intrebare, string raspuns_corect);
int intrebare_cu_r_scurt(char* intrebare, string raspuns_corect);

void afisare_nume() {
    cout<<"\n             Tehnici de programare\n\n";
    cout<<"   Autor: Crisan Gabriel\n";
    cout<<"   Clasa: 11 C\n";
    cout<<"\n Apasa orice tasta pentru a continua";
    getch();
    system("cls");
}

int citeste_optiune_meniu(int max_optiuni) {
    int r;
    int incercare = 0;
    cout << "Alege o optiune din meniu : " << endl;
    do {
        if(incercare>0)
            cout<<"Optiunea selectata nu face parte din meniu. Alege o optiune valabila.\n";
        incercare++;
        cin >> r;
    } while (r<=0 || r>max_optiuni );

    return r;
}

void meniu_principal(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu principal:" << endl << endl;

        cout << "      1. Recursivitate" << endl << endl;

        cout << "      2. Backtracking" << endl << endl;

        cout << "      3. Divide-et-impera" << endl << endl;

        cout << "      4. Test" << endl << endl;

        cout << "      5. Iesire" << endl << endl;

        o = citeste_optiune_meniu(5);

        switch(o) {
        case 1:
            meniu_recursivitate();
            break;

        case 2:
            meniu_backtracking();
            break;

        case 3:
            meniu_divideetimpera();
            break;

        case 4:
            meniu_test();

        case 5:
            cout << "La revedere!";
            break;
        }
    } while(o != 5);
}

void meniu_recursivitate(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu recursivitate:" << endl << endl;

        cout << "      1. Definitie" << endl << endl;

        cout << "      2. Aplicatii" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            recursivitate_definitie();
            break;

        case 2:
            recursivitate_aplicatii();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire la meniul principal";
            break;
        }
    } while(o != 3);
}

void recursivitate_definitie(){
    system("cls");

    cout << "\n\n    Recursivitate - definitie" << endl;
    cout << "\n\n\
    Recursivitatea este un mecanism general de elaborare a programelor care consta in posibilitatea ca un subprogram sa\n\
    se autoapeleze.\n\n\n\
    Caracteristici:\n\
     - a aparut din necesitatea rezolvarii/transcrierii sirurilor  recurente\n\
     - in timp, acest mecanism a fost extins si in elaborarea altor algoritmi\n\
     - exista recursivitate directa (autoapelare) si indirecta (un subprogram A este apelat prin intermediul unui alt \n\
     subprogram B, care , la randul sau, apeleaza primul subprogram)\n\
     \n\n\
     Subproramele recursive pot fi de tip:\n\n\
     1. Operand (autoapelul se realizeaza prin intermediul instructiunii return, care va fi de forma return expresie;\n\
     iar in expresie va fi inclusa functia care se autoapeleaza)\n\
     2. Procedural (autoapelul se realizeaza prin apelul functiei respective din interiorul ei)";
    cout<<"\n\n Apasa orice tasta pentru a reveni la meniul anterior\n";
    getch();
}

void recursivitate_aplicatii(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu aplicatii recursivitate:" << endl << endl;

        cout << "      1. Aplicatia 1" << endl << endl;

        cout << "      2. Aplicatia 2" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            recursivitate_aplicatia1();
            break;

        case 2:
            recursivitate_aplicatia2();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire";
            break;
        }
    } while(o != 3);
}

void recursivitate_aplicatia1(){
    system("cls");
    cout << "\n\n     Recursivitate - aplicatia 1\n\n" << endl;
    cout << "   Enunt: Se citeste un numar n. Calculati n! folosind un subprogram recursiv.\n\n";
    cout << "   Program:\n\
    int fact(int n)\n\
    {\n\
        if (n==0) return 1;\n\
        return n*fact(n-1);\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    recursivitate_aplicatia1_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

void recursivitate_aplicatia1_program(){
    int n;
    cout<<"Introdu valoarea lui n: ";
    do{
        cin>>n;
        if(n<0)
            cout<<"Numarul citit trebuie sa fie mai mare sau egal cu 0"<<endl;
    }while(n<0);
    cout<<"n! = "<<factorial(n)<<endl<<endl;
}

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

void recursivitate_aplicatia2(){
    system("cls");
    cout << "\n\n     Recursivitate - aplicatia 2\n\n" << endl;
    cout << "   Enunt: Se citesc doua numere n si a (a numar natural). Calculati n la puterea a folosind un subprogram recursiv.\n\n";
    cout << "   Program:\n\
    int na(int n, unsigned a){\n\
        if(a==0)\n\
            return 1;\n\
        return n*na(n,a-1);\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    recursivitate_aplicatia2_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

void recursivitate_aplicatia2_program(){
    int n,a;
    cout<<"Introdu valoarea lui n: "; cin>>n;
    cout<<"Introdu valoarea lui a: ";
    do{
        cin>>a;
        if(a<0)
            cout<<"Exponentul trebuie sa fie un numar natural. Reintrodu valoarea lui a: ";
    }while(a<0);
    cout<<"\nn la puterea a este "<<putere(n,a)<<endl<<endl;
}

int putere(int n, int a){
    if(a==0)
        return 1;
    return n*putere(n,a-1);
}

void meniu_backtracking(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu backtracking:" << endl << endl;

        cout << "      1. Definitie" << endl << endl;

        cout << "      2. Aplicatii" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            backtracking_definitie();
            break;

        case 2:
            backtracking_aplicatii();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire la meniul principal";
            break;
        }
    } while(o != 3);
}

void backtracking_definitie(){
    system("cls");
    cout << "\n\n    Backtracking - definitie" << endl;
    cout << "\n\n\
    Matoda backtracking se foloseste in rezolvarea problemelor ce indeplinesc simultan urmatoarele conditii:\n\
      - solutia lor poate fi pusa sub forma unui vector S=x1, x2,..., xn, cu x1 apartine lui A1, xn apartine lui An; \n\
      - multimile A1, A2,...An sunt multimi finite iar elementele lor se considera ca sunt intr-o ordine bine \n\
        stabilita;\n\
      - nu se dispune de o solutie mai rapida.\n\n\n\
    Metoda backtracking urmareste fie determinarea tuturor solutiilor (cu scopul de a le lista sau de a alege una\n\
    dintre ele care optimizeaza o eventuala functie obiectiv data), fie obtinerea unei solutii oarecare.\n\n\n\
    Implementarea metodei backtracking\n\n\
    Metoda backtracking este implementata folosind structura de stiva.\n\n\
    Astfel, elementele x1, x2,..., xk ni le imaginam intr-o stiva st. Gasirea elementului xk+1 determina urcarea \n\
    in stiva pe nivelul k+1, contrar se coboara la nivelul k-1. In situatia ajungerii la nivelul 0, algoritmul \n\
    se termina.";
    cout<<"\n\n Apasa orice tasta pentru a reveni la meniul anterior\n";
    getch();
}

void backtracking_aplicatii(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu aplicatii backtracking:" << endl << endl;

        cout << "      1. Aplicatia 1" << endl << endl;

        cout << "      2. Aplicatia 2" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            backtracking_aplicatia1();
            break;

        case 2:
            backtracking_aplicatia2();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire";
            break;
        }
    } while(o != 3);
}

void backtracking_aplicatia1(){
    system("cls");
    cout << "\n\n     Backtracking - aplicatia 1\n\n" << endl;
    cout << "   Enunt: Se citeste un numar natural n. Generati si afisati toate combinatiile de cate n cifre binare care nu au doua \n\
   cifre de 1 alaturate.\n\n";
    cout << "   Program:\n\
    void afis(int n)\n\
    {\n\
        for(int i=1;i<=n;i++)\n\
            cout<<x[i]<<" ";\n\
        cout<<endl;\n\
    }\n\
    void backtracking_aplicatia1(int k, int n){\n\
        for(int i=0;i<=1;i++){\n\
            x[k]=i;\n\
            if(k>1) if(x[k]*x[k-1]!=1)\n\
                if(k==n) afis();\n\
                    else back01(k+1, n);\n\
                else ;\n\
            else back01(k+1, n);\n\
        }\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    backtracking_aplicatia1_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

int x[17];

void afis(int n){
    for(int i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

void back1(int k,int n){
    for(int i=0;i<=1;i++)
        {
            x[k]=i;
            if(k>1) if(x[k]*x[k-1]!=1)
                        if(k==n) afis(n);
                        else back1(k+1,n);
                    else ;
            else back1(k+1,n);
        }
}

void backtracking_aplicatia1_program(){
    int n;
    cout<<"Introdu valoarea lui n: ";
    do{
        cin>>n;
        if(n<=0)
            cout<<"Valoarea lui n nu poate fi negativa sau nula. Reintrodu valoarea lui n: ";
    }while(n<=0);
    back1(1,n);
}

void backtracking_aplicatia2(){
    system("cls");
    cout << "\n\n     Backtracking - aplicatia 2\n\n" << endl;
    cout << "   Enunt: Se citeste un numar natural n. Afisati toate numerele formate din n cifre in care oricare doua cifre \n\
    alaturate au paritate diferita.\n\n";
    cout << "   Program:\n\n\
    void afis(int x[], int n)\n\
    {\n\
        for(int i=1;i<=n;i++)\n\
            cout<<x[i];\n\
        cout<<endl;\n\
    }\n\
    int bun(int x[], int k){\n\
        if(x[1]==0) return 0;\n\
        if(k>1)\n\
            if(x[k-1]%2==x[k]%2) return 0;\n\
        return 1;\n\
    }\n\
    void backtracking_aplicatia2(int x[], int n, int k){\n\
        int i;\n\
        for(i=0;i<=9;i++){\n\
            x[k]=i;\n\
            if(bun(x,k))\n\
                if (k==n) afis(x,k);\n\
                    else backtracking_aplicatia2(x,n,k+1);\n\
        }\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    backtracking_aplicatia2_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

void afis(int x[], int n)
{
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<endl;
}

int bun(int x[], int k)
{
    if(x[1]==0) return 0;
    if(k>1)
        if(x[k-1]%2==x[k]%2) return 0;
    return 1;
}

void back2(int x[], int n, int k)
{
    int i;
    for(i=0;i<=9;i++){
        x[k]=i;
        if(bun(x,k))
            if (k==n) afis(x,k);
                else back2(x,n,k+1);
    }
}

void backtracking_aplicatia2_program(){
    int x[100], n;
    cout<<"Introdu valoarea lui n: ";
    do{
        cin>>n;
        if(n<=0)
            cout<<"Valoarea lui n nu poate fi negativa sau nula. Reintrodu valoarea lui n: ";
    }while(n<=0);
    back2(x,n,1);
}

void meniu_divideetimpera(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu Divide-et-impera:" << endl << endl;

        cout << "      1. Definitie" << endl << endl;

        cout << "      2. Aplicatii" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            divideetimpera_definitie();
            break;

        case 2:
            divideetimpera_aplicatii();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire la meniul principal";
            break;
        }
    } while(o != 3);
}

void divideetimpera_definitie(){
    system("cls");
    cout << "\n\n    Divide-et-impera- definitie" << endl;
    cout << "\n\n\
    Divide-et-impera este o metoda de programare bazata pe un principiu simplu, ce urmareste acesti pasi:\n\
     - problema data se descompune in doua (sau mai multe) subprobleme (de acelasi tip ca problema initiala, dar de \n\
     dimensiuni mai mici);\n\
     - se rezolva independent fiecare subproblema;\n\
     - rezultatul problemei initiale se obtine prin combinarea rezultatelor obtinute pentru subprobleme.\n\n\n\
    Subproblemele trebuie sa fie de acelasi tip cu problema initiala, de dimensiuni mai mici,  ele urmand a fi\n\
    rezolvate prin aceeasi tehnica.\n\n\n\
    In cadrul tehnicii Divide-et-impera, in urma impartirilor succesive in subprobleme (=problema elementara), se \n\
    ajunge in situatia ca problema curenta nu mai poate fi impartita in subprobleme\n\n\n\
    Metoda Divide-et-impera admite o implementare recursiva.";
    cout<<"\n\n Apasa orice tasta pentru a reveni la meniul anterior\n";
    getch();
}

void divideetimpera_aplicatii(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu aplicatii Divide-et-impera:" << endl << endl;

        cout << "      1. Aplicatia 1" << endl << endl;

        cout << "      2. Aplicatia 2" << endl << endl;

        cout << "      3. Revenire" << endl << endl;

        o = citeste_optiune_meniu(3);

        switch(o) {
        case 1:
            divideetimpera_aplicatia1();
            break;

        case 2:
            divideetimpera_aplicatia2();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire";
            break;
        }
    } while(o != 3);
}

void divideetimpera_aplicatia1(){
    system("cls");
    cout << "\n\n     Divide-et-impera - aplicatia 1\n\n" << endl;
    cout << "   Enunt: Se citeste un vector cu n elemente numere intregi. Sa se calculeze suma elementelor vectorului folosind\n\
   Divide-et-impera.\n\n";
    cout << "   Program:\n\n\
    int suma(int a[100], int s, int d){\n\
        if(s==d)\n\
            return a[s];\n\
        else\n\
            return suma(a,s,(s+d)/2)+suma(a,(s+d)/2+1,d);\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    divideetimpera_aplicatia1_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

int suma(int a[100], int s, int d){
    if(s==d)
        return a[s];
    else
        return suma(a,s,(s+d)/2)+suma(a,(s+d)/2+1,d);
}

void divideetimpera_aplicatia1_program(){
    int x[15], n;
    cout<<"Introdu valoarea lui n (maxim 15): ";
    do{
        cin>>n;
        if(n<=0)
            cout<<"Valoarea lui n nu poate fi negativa sau nula. Reintrodu valoarea lui n: ";
        if(n>15)
            cout<<"Valoarea lui n nu poate fi mai mare decat 15. Reintrodu valoarea lui n: ";
    }while(n<=0 || n>15);
    cout<<"Introdu elementele vectorului: "<<endl;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    cout<<"Suma elementelor este: "<<suma(x,1,n)<<endl<<endl;
}

void divideetimpera_aplicatia2(){
    system("cls");
    cout << "\n\n     Divide-et-impera - aplicatia 2\n\n" << endl;
    cout << "   Enunt: Se citeste un numar intreg x. Sa se calculeze radical de ordinul 3 din x folosind Divide-et-impera.\n\n";
    cout << "   Program:\n\n\
    double rad3(double x, double s, double d){\n\
        if(d-s<=0.0001)\n\
            return d;\n\
        else {\n\
            double m=(s+d)/2;\n\
            if(m*m*m<x)\n\
                return rad3(x,m,d);\n\
            else\n\
                return rad3(x,s,m);\n\
        }\n\
    }" << endl;
    cout << endl << "   Executie: \n" << endl;
    divideetimpera_aplicatia2_program();
    cout<<"Apasa orice tasta pentru a reveni la meniul anterior";
    getch();
}

double rad3(int x, double s, double d){
    if(d-s<=0.0001)
        return d;
    else{
        double m=(s+d)/2;
        if(m*m*m<x)
            return rad3(x,m,d);
        else
            return rad3(x,s,m);
    }
}

void divideetimpera_aplicatia2_program(){
    int x;
    cout<<"Introdu valoarea lui x: ";
    cin>>x;
    if(x>0)
        if(x<1)
            cout<<rad3(x,0,1)<<endl<<endl;
        else
            cout<<rad3(x,0,x)<<endl<<endl;
    else
        if(x>-1)
            cout<<rad3(x,-1,0)<<endl<<endl;
        else
            cout<<rad3(x,x,0)<<endl<<endl;
}

void meniu_test(){
    int o;

    do {

        system("cls");
        cout << "\n\n  Meniu test:" << endl << endl;

        cout << "      1. Incepe testul" << endl << endl;

        cout << "      2. Revenire" << endl << endl;

        o = citeste_optiune_meniu(2);

        switch(o) {
        case 1:
            test();
            break;

        case 2:
            cout << "Ati ales optiunea '2' -> Revenire";
            break;
        }
    } while(o != 2);
}

char intrebare_1[] = "\
\n1. Ce va afisa urmatorul subprogram in urma apelului f(12345)?\n\n\
void f(long n){\n\
    if (n > 9){\n\
        cout <<  n/100;\n\
        f(n/10);\n\
    }\n\
}\n\n\
1) 1234123121\n\
2) 123121\n\
3) 1231210\n\
4) 123\n\
 \n\
Introdu raspunsul: "; //3

char intrebare_2[] = "\
\n2. Se da urmatorul subprogram recursiv. Daca rec(x)=90 atunci alege valoarea corespunzatoare a lui x.\n\n\
int rec(int x){\n\
    if (x<=1)\n\
        return x;\n\
    else\n\
        return x+rec(x-2);\n\
}\n\n\
1) 23\n\
2) 21\n\
3) 20\n\
4) 18\n\
 \n\
Introdu raspunsul: "; //4

char intrebare_3[] = "\
\n3. Utilizand metoda backtracking se genereaza in ordine lexicografica cuvintele de cate patru litere\n\
din multimea A={a,b,c,d,e}, cuvinte care nu contin doua vocale alaturate. Primele opt cuvinte generate sunt,\n\
in ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe. Care este penultimul cuvant generat?\n\n\
1) dede\n\
2) edeb\n\
3) edec\n\
4) eddd\n\
 \n\
Introdu raspunsul: "; //3

char intrebare_4[] = "\
\n4. Cate numere cu exact doua cifre pot fi construite folosind doar cifre pare distincte?\n\n\
1) 16\n\
2) 20\n\
3) 17\n\
4) 18\n\
 \n\
Introdu raspunsul: "; //1

char intrebare_5[] = "\
\n5. Legat de metoda Divide-et-impera sunt adevarate afirmatiile: \n\n\
1) problema principala este impartita in mai multe subprobleme diferite\n\
2) se rezolva independent fiecare subproblema\n\
3) aceasta metoda se bazeaza pe un principiu complicat, dar folositor\n\
4) subproblemele sunt rezolvate prin aceeasi tehnica\n\
 \n\
Introdu raspunsul: "; //2 4

char intrebare_6[] = "\
\n6. Metoda backtracking urmareste: \n\n\
1) determinarea tuturor solutiilor unei probleme\n\
2) determinarea anumitor solutii la o problema, in functie de preferintele utilizatorului\n\
3) efectuarea anumitor operatii precum adunare sau inmultire intre solutiile gasite la o problema\n\
4) obtinerea unei solutii oarecare a unei probleme\n\
 \n\
Introdu raspunsul: "; //1 4

char intrebare_7[] = "\
\n7. Recursivitatea: \n\n\
1) consta in apelarea unui subprogram dintr-un alt proiect deja creat\n\
2) poate fi directa sau indirecta\n\
3) a aparut din necesitatea rezolvarii/transcrierii sirurilor recurente\n\
4) este un mecanism general de elaborare a programelor\n\
 \n\
Introdu raspunsul: "; // 2 3 4

char intrebare_8[] = "\
\n8. Metoda Divide-et-impera admite o implementare ............ .\n\
Raspunde cu un singur cuvant: "; //recursiva

char intrebare_9[] = "\
\n9. Structura de ............ este folosita in cazul metodei Backtracking.\n\
Raspunde cu un singur cuvant: "; //stiva

char intrebare_10[] = "\
\n10. Posibilitatea unui subprogram sa se ............ face referire la recursivitate.\n\
Raspunde cu un singur cuvant: "; //autoapeleze

void test() {
    string buffer;
    string golire_buf;
    int punctaj = 0;
    getline(cin, buffer);
    system("cls");
    cout << "\n\n    Test din tehnici de programare" << endl << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << "  Alege raspunsul corect la urmatoarele intrebari:\n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_un_raspuns(intrebare_1, 3);
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_un_raspuns(intrebare_2, 4);
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_un_raspuns(intrebare_3, 3);
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_un_raspuns(intrebare_4, 1);
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    getline(cin, golire_buf);
    cout << endl << endl << "  Urmatoarele intrebari au mai multe raspunsuri corecte posibile:\n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_multe_raspunsuri(intrebare_5, "24");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_multe_raspunsuri(intrebare_6, "14");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_multe_raspunsuri(intrebare_7, "234");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl <<"Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "  Pentru urmatoarele intrebari trebuie sa scrii un cuvant astfel incat propozitiile sa fie corecte:\n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_r_scurt(intrebare_8, "recursiva");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << "Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_r_scurt(intrebare_9, "stiva");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << "Nota: " << punctaj << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    punctaj += intrebare_cu_r_scurt(intrebare_10, "autoapeleze");
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << "Nota finala: " << punctaj << " de puncte din 100. Felicitari!" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";
    cout << endl << "Apasa orice tasta pentru a trece mai departe" << endl;
    getch();
}

int intrebare_cu_un_raspuns(char* intrebare, int raspuns_corect) {
    int punctaj = 0;
    int r;
    cout<<intrebare;
    do{
        cin>>r;
        if(r!=1 && r!=2 && r!=3 && r!=4)
            cout << "Varianta introdusa nu exista, introduceti 1, 2, 3 sau 4" << endl;
        else
            if(r==raspuns_corect)
                punctaj=10;
    } while(r != 1 && r != 2 && r != 3 && r != 4);
    cout << "Apasa orice tasta pentru a trece mai departe" << endl;
    getch();
    if(punctaj==10)
        cout<<"\nRaspuns corect!"<<endl;
    else
        cout<<"\nRaspuns gresit!"<<endl;
    return punctaj;
}

bool verifica_raspuns_valid(string r_introdus){
    bool rasp_valid=true, deja_exista_o_cifra, mai_exista_inca_o_cifra_pe_o_poz_consecutiva;
    int sizeofr=r_introdus.size();
    for(int i=0;i<sizeofr && rasp_valid; i++){
        char c=r_introdus[i];
        if(c!='1' && c!='2' && c!='3' && c!='4' && c!=',' && c!=' ')
            rasp_valid=false;
    }
    if(rasp_valid)
        for(int i=0;i<sizeofr-1 && rasp_valid; i++){
            deja_exista_o_cifra=false;
            mai_exista_inca_o_cifra_pe_o_poz_consecutiva=false;
            if(r_introdus[i]=='1' || r_introdus[i]=='2' || r_introdus[i]=='3' || r_introdus[i]=='4')
                deja_exista_o_cifra=true;
            if(r_introdus[i+1]=='1' || r_introdus[i+1]=='2' || r_introdus[i+1]=='3' || r_introdus[i+1]=='4')
                mai_exista_inca_o_cifra_pe_o_poz_consecutiva=true;
            if(deja_exista_o_cifra && mai_exista_inca_o_cifra_pe_o_poz_consecutiva)
                rasp_valid=false;
        }
    return rasp_valid;
}

bool verifica_raspuns_corect(string r_introdus, string r_corect){
    int gasit=0;
    r_introdus.erase(remove(r_introdus.begin(), r_introdus.end(), ' '), r_introdus.end());
    r_introdus.erase(remove(r_introdus.begin(), r_introdus.end(), ','), r_introdus.end());
    int sizeofr_introdus=r_introdus.size(), sizeofr_corect=r_corect.size();
    if(sizeofr_introdus!=sizeofr_corect)
        return false;
    for(int i=0;i<sizeofr_introdus;i++)
        for(int j=0;j<sizeofr_corect;j++)
            if(r_introdus[i]==r_corect[j])
                gasit++;
    if(gasit==sizeofr_corect)
        return true;
    return false;
}

int intrebare_cu_multe_raspunsuri(char* intrebare, string raspuns_corect) {
    int k=0;
    bool adevar;
    int punctaj = 0;
    string r;
    cout << intrebare;
    do{
        getline(cin, r);
        adevar=verifica_raspuns_valid(r);
        if(adevar==false)
            cout<<"Raspunsul tau nu este valabil. Reintrodu cifrele afirmatiilor pe care le consideri corecte despartite de spatiu sau\n\de virgula: ";
    }while(adevar==false);
    if(verifica_raspuns_corect(r, raspuns_corect) == true) {
        punctaj = 10;
    }
    cout << "Apasa orice tasta pentru a trece mai departe" << endl;
    getch();
    if(punctaj==10)
        cout<<"Raspuns corect!"<<endl;
    else
        cout<<"Raspuns gresit!"<<endl;
    return punctaj;
}

int intrebare_cu_r_scurt(char* intrebare, string raspuns_corect) {
    int punctaj = 0;
    string r;
    cout << intrebare;
    getline(cin, r);
    transform(r.begin(), r.end(), r.begin(), ::tolower);
    if(r==raspuns_corect)
        punctaj=10;
    cout << "Apasa orice tasta pentru a trece mai departe" << endl;
    getch();
    if(punctaj==10)
        cout<<"Raspuns corect!"<<endl;
    else
        cout<<"Raspuns gresit!"<<endl;
    return punctaj;
}

int main()
{
    afisare_nume();
    meniu_principal();
    return 0;
}

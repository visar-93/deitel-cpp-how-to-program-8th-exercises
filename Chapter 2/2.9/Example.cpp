#include "stdafx.h"
#include <iostream>
using namespace std;


int main()

{
cout << "Payroll Calculation: " << endl;

int ora; //variabla ora - numri i oreve te punuara gjate ketij muaji
int ora_r; // variabla ora e rregullt - numri i oreve te punuara gjate orarit te rregullt
int ora_o; // variabla ora overtime - numri i oreve te punuara jashte orarit te rregullt
int cmimi_r; // variabla e cmimit te oreve te rregullta
int cmimi_o; // variabla e cmimit te oreve overtime
int bruto_r; // paga bruto per orar te rregullt
int bruto1_r; // paga bruto per orar te rregullt
int bruto1_o; // paga bruto per orar overtime
int bruto_o; // paga bruto per orar overtime
int neto_r; // paga neto per orar te rregullt
int neto_o; // paga neto per orar overtime
int kontributipersonal_r; // tatimi ne te ardhnura per orar te rregullt
int kontributipersonal_o; // tatimi ne te ardhura per orar overtime
int trusti_r; // trusti per orar te rregullt
int trusti_o; // trusti per orar overtime
double konstributi = 0.05; // vlera e te ardhurave 
double trusti = 0.05; // vlera e trustit


cout << "Ju lutem shkruani numrin e oreve te punuara gjate ketij muaji \n"; // shfaqja e kerkeses ne console qe perdoruesi te shkruaje numrin e oreve te punuara gjate muajit
cin >> ora; // perdoruesi vendos numrin e oreve permes tastieres
// Numri i oreve per orar te rregullt gjate nje muaji eshte 176
if (ora <= 176) // Kushti nese numri i oreve eshte me i vogel ose i barabarte me 176 
cout << "Numri i oreve te rregullta te punuara gjate ketij muaji eshte: " << ora << endl; //  shfaqja ne console numri i oreve te rregulla


cout << "Cmimi i oreve brenda orarit te rregullt eshte: \n"; // shfaqja e kerkeses ne console qe perdoruesi te shkruaje cmimin e oreve te rregullta
cin >> cmimi_r; // Perdoruesi vendos numrin e oreve te rregullta permes tastieres
cout << "Cmimi i oreve jashte orarit te rregullt eshte: \n"; // shfaqja e kerkeses ne console qe perdoruesi te shkruaje cmimin e oreve overtime
cin >> cmimi_o; // Perdoruesi vendos numrin e oreve te rregullta permes tastieres

bruto_r = cmimi_r * ora; // Formula e kalkulimit te pages bruto
if (ora <= 176) // Kushti nese numri i oreve eshte me i vogel ose baraz me ate te oreve te rregullta
cout << "Paga bruto per kete muaj eshte: " << bruto_r << endl; // Shfaqja ne console e pages bruto per per orar te rregullt

kontributipersonal_r = bruto_r * konstributi; // Formula e kalkulimit te tatimit ne te ardhura - kontributeve personale
if (ora <= 176) // Kushti nese numri i oreve eshte me i vogel ose baraz me ate te oreve te rregullta
cout << "Kontributi personal eshte " << kontributipersonal_r << endl; // Shfaqja ne console e tatimit ne te ardhura - kontributeve personale


trusti_r = bruto_r * trusti; // Formula per kalkulimin e trustit
if (ora <= 176) // Kushti nese numri i oreve eshte me i vogel ose baraz me ate te oreve te rregullta
cout << "Trusti eshte " << trusti_r << endl; // Shfaqja ne console e trustit


neto_r = bruto_r - kontributipersonal_r - trusti_r; // Formula per llogaritjen e pages neto per orar te rregullt
if (ora <= 176) // Kushti nese numri i oreve eshte me i vogel ose baraz me ate te oreve te rregullta
cout << "Paga neto per kete muaj eshte: " << neto_r << endl; // Shfaqja ne console e pages neto per muajin perkates 



ora_r = 176; // Numri i oreve per orar te rregullt 
ora_o = ora - ora_r; // Kushti per kalkulimin e oreve overtime
if (ora > ora_r) // Kushti nese numri i oreve te punuara gjate ketij muaji eshte me i madh se numri i oreve te rregullta
cout << "Numri i oreve te punuara gjate ketij muaji eshte: " << ora << endl; // Shfaqja ne console e numrit total te oreve te punuara
cout << "Numri i oreve te rregullta te punuara gjate ketij muaji eshte: " << ora_r << endl; // Shfaqja ne console e numrit te oreve te rregullta
cout << "Numri i oreve jashte orarit te punuara gjate ketij muaji eshte: " << ora_o << endl; // Shfaqja ne console e numrit te oreve overtime


bruto_o = (cmimi_r * ora_r) + (cmimi_o * ora_o); // Formula per llogaritjen e pages bruto kur kemi edhe pune overtime
bruto1_r = cmimi_r * ora_r; // Formula per llogaritjen e pjesen e rregullt (176 ore) ne page bruto kur kemi pune overtime
bruto1_o = cmimi_o * ora_o; // Formula per llogaritjen e pjeses overtime ne page bruto kur kemi pune overtime
if (ora > 176) // Kushti nese numri i oreve eshte me i madh se 176 (numri i oreve te rregullta brenda nje muaji)
cout << "Pagesa per punen brenda orarit te rreugllt " << bruto1_r << endl; // Shfaqja ne console e pageses per pune per orar te rregullt 
cout << "Pagesa per punen jashte orarit te rregullt " << bruto1_o << endl; // Shfaqja ne console e pageses per pune overtime
cout << "Paga bruto per kete muaj eshte: " << bruto_o << endl; // Shfaqja e pages bruto ne console kur kemi overtime


kontributipersonal_o = bruto_o * konstributi; // Formula e kalkulimit te tatimit ne te ardhura - kontributeve personale
if (ora > 176) // Kushti nese numri i oreve eshte me i madh se 176 (numri i oreve te rregullta brenda nje muaji)
cout << "Kontributi personal eshte " << kontributipersonal_o << endl; // Shfaqja ne console e tatimit ne te ardhura - kontributeve personale


trusti_o = bruto_o * trusti; // Formula per kalkulimin e trustit
if (ora > 176)// Kushti nese numri i oreve eshte me i madh se 176 (numri i oreve te rregullta brenda nje muaji)
cout << "Trusti eshte " << trusti_o << endl; // Shfaqja ne console e trustit


neto_o = bruto_o - kontributipersonal_o - trusti_o; // Formula per llogaritjen e pages neto per orar te rregullt
if (ora > 176) // Kushti nese numri i oreve eshte me i madh se 176 (numri i oreve te rregullta brenda nje muaji)

cout << "Paga neto per kete muaj eshte: " << neto_o << endl; // Shfaqja ne console e pages neto per muajin perkates 

	return 0;

	}

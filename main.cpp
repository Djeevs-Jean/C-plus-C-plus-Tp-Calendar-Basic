#includeude <iostream>
#include <iomanip>
#include <vector>
using namespace std;

  vector<string> nom_mois =
 {
 "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet",
 "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
 };
vector<int> long_mois = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

 int main(void)
{
int i, j_sem, j_mois, mois;
ut << "Quel est le jour du 1er janvier (0=lundi, 1=mardi, ...) ?" << endl;
  cin >> j_sem;
  for (mois=0; mois<12; mois++)
  {
  cout << " " << nom_mois[mois] << endl;
  cout << " lu ma me je ve sa di" << endl;
  for (i=0; i<j_sem % 7; i++) cout << " .";
  for (j_mois=1; j_mois<=long_mois[mois]; j_mois++)
  {
  cout << setw(3) << j_mois;
  j_sem++;
 if (j_sem % 7 == 0) cout << endl;
  }
 cout << endl << endl;
 }
}

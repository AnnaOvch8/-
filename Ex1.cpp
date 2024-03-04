#include <iostream>
using namespace std;
int main()
{
    int Ndom, Ni, i, j; 
    cout << "\nВведите количество домов на улице :"; cin >> Ndom;
    cout << "\nВ скольких домах нужно провести интернет? :"; cin >>Ni;
   if (cin.fail()) {
	cout << "\n Введены неверные данные";
}
else { // проверка  введенных данных : если ввели не int и если ввели значения больше кол-ва домов
    if (Ndom < Ni)
    {
        cout << "Неверное количество домов для интернета. Введите заново количество: ";
    }
    else {
    int *NomDom=new int[Ni];
    int *r=new int[Ndom];
for (int i=0;i<Ni; i++) {
    cout << "\n Укажите номер дома с интернетом:";cin >> NomDom[i];
}
bool unique = true;
for (i=0; i<Ni; i++)  { // проверка на уникальность номеров домов с интернетом
if (NomDom[i] == NomDom[i] && j != i)
            {
                unique = false;
                break;
            }
        } 
 
    for(int j=1; j<Ndom+1;j++ ) {
       r[j]=0;
        for (int i=0; i<Ni;i++)
        {
          r[j]+=abs(j-NomDom[i]);  
       
       }
       cout <<r[j]<<   endl;
    }
    int min=r[1];
    for(int i = 2; i < Ndom+1; i++)
{
    if(r[i] < min)
    {
        min = r[i];
     
    }
}
     for(int i = 1; i < Ndom+1; i++)
{
    if(r[i] == min)
    {
       cout <<"номер "<<  (i) << endl;
    }
}

}
}
  return 0;  
}

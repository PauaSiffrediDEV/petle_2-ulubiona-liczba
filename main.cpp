#include <iostream>

using namespace std;

int liczba;
int main()
 {
cout << "Witaj w programie Przemka" <<endl;

    for(;;)             //inf loop
    {
        cout << "Jaka jest ulubiona liczba Przemka w przedziale 1-10?" <<endl;
        cin>>liczba;

           if(liczba==4)
               {
               cout<<"Podales ulubiona liczbe Przemka, gratuluje."<<endl;
                exit(0);
                getchar();
               }
            else
                cout<<"To nie ta liczba."<<endl;

    }




return 0;
}

using namespace std;
#include <iostream>
#include <math.h>

int main()
{
  
	double BMI;
	int waga;
	double wzrost;

	cout << "podaj swoja wage w kilogramach" << endl;
		cin >> waga;
	cout << "podaj swoj zwrost w metrach" << endl;
		cin >> wzrost;

		BMI = waga / pow(wzrost, 2);

		 if(BMI > 18.5 && BMI < 25)
		{
			cout << "BMI: " << BMI << endl<< "twoja waga jest w porzadku";
	    }

		 else
		{
			cout << "BMI: " << BMI << endl << "twoja waga nie jest w porzadku";
		}

		
}

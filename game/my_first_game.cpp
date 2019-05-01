#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int computerChoice, userChoice;
	int computerLife = 10;
	int userLife = 10;
	int adressEnemy;
	int yourAdress;
	
	//generating number
	srand(static_cast<unsigned int>(time(0)));

	do{
		cout << "Choose the number to kill your invisible enemy from 1 to 10\n";
		
		cin >> userChoice;
		
		int randomNumber = rand();
		
		int adressEnemy = (randomNumber % 10) + 1;
		
		if (userChoice == adressEnemy){
			cout << "Well done. Don't give up\n";
			computerLife--;
			cout << "Your enemy life" << computerLife<<"\n";
		}
		else{
			cout << "Sorry you haven't coughed yet\n\n";
		}


		cout << "Your enemy me looking for you\n\n";
		
		int computerNumber = rand();
		
		computerChoice = (computerNumber % 10) + 1;
		
		int myNumber = rand();
		
		int myAdress = (myNumber % 10) + 1;

		if (computerChoice == myAdress){
			cout << "aaaaa.You have been wounded!\n";
			userLife--;
			cout << "yourLife" << userLife << "\n";
		}
		else{
			cout << "fyyyh. You are good. Be curful\n";
		}
		
	} while (!(computerLife == 0 || userLife == 0));

	if (computerLife == 0)
	{
		cout << "My congratulations. You won!\n";
	}
	else{
		cout << "Sorry you lose\n";
	}
	return 0;
}
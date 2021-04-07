//voorbeeld2.cpp
//voorbeeld van een subscriper
//builden met g++ -o <naam van executable> voorbeeld2.cpp PracticalSocket.cpp -pthread

#include "pubsub.h"
#include <iostream>

vector<string> the_code = {};
// maak een void-functie met een string-parameter en een zelfgekozen naam
void onrecieve(string message){

        cout << message << endl;
}

int main(){

//    poging om vector mee te geven
    string code;
    for (int i = 0; i < 4; ++i) {
        cin>>code;
        the_code.push_back(code);
    }
	//maak een subscription met twee parameters 1. de naam van de topic 2. de naam van de functie
	//de topic-naam mag geen spaties bevatten.
	subscription s("test_topic", onrecieve);

	cout << "waiting for messages" << endl;
	cout << "type \'s\' to stop"  << endl;
	cin.get();


	return 0;
}
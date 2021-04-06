//voorbeeld2.cpp
//voorbeeld van een subscriper
//builden met g++ -o <naam van executable> voorbeeld2.cpp PracticalSocket.cpp -pthread

#include "pubsub.h"
#include <iostream>


// maak een void-functie met een string-parameter en een zelfgekozen naam
void onrecieve(string message, vector<string> nice){
	
	//schrijf hier de actie die moet worden uitgevoerd met een binnenkomende message
	if(message == "blauw"){
	    cout<< "kaulo daggoe"<< endl;
	}else{
        cout << message << endl;
    }

}

int main(){
    vector<string> the_code = {};
    string code;
    cin<<code<<endl;
	//maak een subscription met twee parameters 1. de naam van de topic 2. de naam van de functie
	//de topic-naam mag geen spaties bevatten.
	subscription s("test_topic", onrecieve(the_code));
 
	cout << "waiting for messages" << endl;
	cout << "type \'s\' to stop"  << endl;
	cin.get();


	return 0;
}
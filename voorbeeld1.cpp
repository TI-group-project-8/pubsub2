//voorbeeld1.cpp
//voorbeeld programma voor een publisher
//builden met g++ -o <naam van executable> voorbeeld1.cpp PracticalSocket.cpp

#include "pubsub.h"
#include <iostream>


int main(){

	//maak een publisher voor een topic
	//parameter 1: naam van de topic (mag geen spaties bevatten)
	publisher p("mytopic");

	string s;
	cout << "voer berichten (zonder spaties) in om te verzenden" << endl;
	cout << "\"stop\" om te stoppen" << endl;
	while(true){
		cout << "? ";
		cin >> s;
		if (s == "stop") break;

		//verzend een bericht naar de subscribers van dit topic
		p.send(s);
	}
	return 0;
};
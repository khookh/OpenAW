#include "pch.h"
#include <iostream>
#include <string>
#include "include/awgame.h"
#include "include/server.h"

using namespace std;
using std::string;

int main(int argc, char *argv[]) {
	cout << "Lancement du programme" << endl;
	string config[] = { "Test" };
	AWGame game(config);
}
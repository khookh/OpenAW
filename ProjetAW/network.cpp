#include "network.h"
#include <iostream>

Network::Network(Game *g)
{
	this->game = g;
	this->server = new QTcpServer(); // Creates a server
}

void Network::run()
{
	while (true) { // Will always run until we say so
		if (suicide_pill) {
			break;
		}
		server->listen(QHostAddress::Any, 2049); // 2049 is the communication port
		std::cout << "I am the server" << std::endl;
		connect(server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
	}
}

void Network::onNewConnection()
{
	std::cout << "[Server] new connection received" << std::endl;
}

// --------------------------------------------------------------------------------------------------------

Session::Session(Player* p, Game* g, QTcpSocket* s) {
	this->player = p;
	this->game = g;
	this->socket = s;
}



// ---------------------------------------------------------------------------------------------------------

NetworkClient::NetworkClient(Game* g, std::string ip)
{
	std::cout << "[Client] Client initialised" << std::endl;

}



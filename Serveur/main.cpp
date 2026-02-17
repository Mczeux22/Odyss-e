/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-13 17:57:53
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-17 16:31:02
 * @ Description:
 */

#include "Include/lib.h"

void handle_client(asio::ip::tcp::socket socket)
{
	try
	{
		while (true)
		{
			char data[1024];
			size_t length = socket.read_some(asio::buffer(data));
			std::string message(data, length);
			std::cout << "Reçu : " << message << std::endl;

			// Traiter le message et envoyer une réponse
			std::string response = "Message reçu : " + message;
			asio::write(socket, asio::buffer(response));
		}
    }
	catch (std::exception& e)
	{
		std::cerr << "Erreur : " << e.what() << std::endl;
	}
}

int main()
{
	asio::io_context io;
	asio::ip::tcp::acceptor acceptor(io, asio::ip::tcp::endpoint(asio::ip::tcp::v4(), 2121));

	std::cout << "Serveur démarré sur le port 2121..." << std::endl;
	while (true)
	{
		asio::ip::tcp::socket socket(io);
		acceptor.accept(socket);
		std::thread(handle_client, std::move(socket)).detach();
	}
	return 0;
}

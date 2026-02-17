/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-13 17:58:52
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-17 17:07:54
 * @ Description:
 */

#ifndef WEB_H
#define WEB_H

// Library
#include <asio.hpp>
#include "lib.h"

//class
class Server
{
	public:
		Server(int port);	// Constructeur : même nom que la classe
		void run();	// Méthode run sans paramètre (utilise le membre `io`)
	private:
		int port_;
		asio::io_context io;  // Membre de la classe
};

#endif

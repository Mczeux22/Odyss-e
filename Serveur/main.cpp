/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-13 17:57:53
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-13 18:00:19
 * @ Description:
 */

#include "Include/lib.h"

int	main(void)
{
	asio::io_context io;
	// phase d'inialisation
	Server server(io, 2121); // port du serveur
	server.run();
}
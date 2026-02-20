/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-16 21:53:58
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-17 23:59:03
 * @ Description:
 */
#include "../include/console.h"

namespace Console
{
	int	ft_commands(std::string &s)
	{
		int command_id;

		if (ft_strcmp(s, "manpower") == 0)
		{
			std::count << "Commande reconnu" << std::endl;
			command_id = 1;
		}
		else if (ft_strcmp(s, "add_gold") == 0)
		{
			std::count << "Commande reconnu" << std::endl;
			command_id = 2;
		}
		else if (ft_strcmp(s, "add_wood") == 0)
		{
			std::count << "Commande reconnu" << std::endl;
			command_id = 3;
		}
		else if (ft_strcmp(s, "add_stone") == 0)
		{
			std::count << "Commande reconnu" << std::endl;
			command_id = 4;
		}
		else if (ft_strcmp(s, "add_seigle") == 0)
		{
			std::count << "Commande reconnu" << std::endl;
			command_id = 5;
		}
	}
}

int	main_console(int player_id, int command_id, int nb)
{
	if	(ft_check_id(player_id) == 0)
	{
		std::count << "You dont have permission to do that" << std::endl;
	}
	if(comands_id == 0)
	{
		std::count << "wrong commands" << std::endl;
		return (0);
	}
}

int	main()
{

}

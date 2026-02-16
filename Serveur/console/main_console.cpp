#include "console.h"

int	ft_commands(const char *s)
{
	int command_id;

	if (ft_strcmp(s, "manpower") == 0)
	{
		printf("%s", "commande reconnu");
		command_id = 1;
	}
	else if (ft_strcmp(s, "add_gold") == 0)
	{
		printf("%s", "commande reconnu");
		command_id = 2;
	}
	else if (ft_strcmp(s, "add_wood") == 0)
	{
		printf("%s", "commande reconnu");
		command_id = 3;
	}
	else if (ft_strcmp(s, "add_stone") == 0)
	{
		printf("%s", "commande reconnu");
		command_id = 4;
		printf("%s", "ajout de pierre");
	}
	else if (ft_strcmp(s, "") == 0)
	{
		printf("%s", "commande reconnu");
		command_id = 5;
		printf("%s", "ajout de ");
	}
}

int	main_console(int player_id, int command_id, int nb)
{
	if	(ft_check_id(player_id) == 0)
	{
		printf("%s", "You dont have permission to do that");
	}
	if()
}

int	main()
{

}
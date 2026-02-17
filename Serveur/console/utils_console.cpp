/**
 * @ Author: Lopapon
 * @ Create Time: 2026-02-16 21:53:58
 * @ Modified by: Lopapon
 * @ Modified time: 2026-02-17 17:01:43
 * @ Description:
 */
#include "console.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_check_id(int id)
{
	int	admin_id;

	admin_id = 1; // Sera recuperable directement dans la db pour verifier si le joueur est admin ou non
	if(id == admin_id)
		return (1);
	else
		return (0);
}

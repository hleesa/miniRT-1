/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:53:16 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/08 21:53:17 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	exit_hook(t_vars *vars)
{
	free_struct(vars);
	atexit(check_leaks);
	exit(0);
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == ESC)
	{
		free_struct(vars);
		atexit(check_leaks);
		exit(0);
	}
	return (0);
}

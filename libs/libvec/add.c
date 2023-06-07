/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:28:27 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/07 20:43:16 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3	add(t_vec3 u, t_vec3 v)
{
	return (vec3_(u.ai + v.ai, u.bj + v.bj, u.ck + v.ck));
}

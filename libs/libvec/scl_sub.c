/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scl_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:50:03 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/07 20:50:51 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec3	scl_sub(double t, t_vec3 v)
{
	return (vec3_(t - v.ai, t - v.bj, t - v.ck));
}

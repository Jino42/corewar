/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_op_15_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:20:10 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/12 14:20:11 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void			vm_op_15_create(t_datas *datas, t_process *process)
{
	(void)datas;
	process->cycle = 1000;
	process->instruction = 15;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_op_12_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:19:54 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/12 14:19:55 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void			vm_op_12_create(t_datas *datas, t_process *process)
{
	(void)datas;
	(void)process;
	process->in_stock[0] = vm_add_valid(process->PC +
		vm_recup_arena_num(2, datas->arene, process->PC + 1) % IDX_MOD);
}

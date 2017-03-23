/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_op_15_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:22:23 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/23 16:32:57 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

/*
** L-fork
** 0f 03 70 03 ff ff 01
*/

void			vm_op_15_exec(t_datas *datas, t_process *process)
{
	vm_copy_process(datas, process, vm_add_valid(process->PC +
		vm_recup_arena_num(2, datas->arene, process->PC + 1)));
	process->PC = vm_add_valid(process->PC + 3);
//	process->carry MOD
}

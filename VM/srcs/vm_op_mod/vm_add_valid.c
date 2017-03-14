/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_add_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:47:09 by gnebie            #+#    #+#             */
/*   Updated: 2017/03/13 14:50:39 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int			vm_add_valid(int adresse)
{
	return ((adresse < 0) ? (adresse += MEM_SIZE) : (adresse % MEM_SIZE));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:01:15 by ple-              #+#    #+#             */
/*   Updated: 2022/07/16 18:03:09 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;
#endif

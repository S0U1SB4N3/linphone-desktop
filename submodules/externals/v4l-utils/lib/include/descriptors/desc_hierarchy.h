/*
 * Copyright (c) 2011-2012 - Mauro Carvalho Chehab <mchehab@redhat.com>
 * Copyright (c) 2012 - Andre Roth <neolynx@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 * Or, point your browser to http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 *
 */

#ifndef _HIERARCHY_H
#define _HIERARCHY_H

#include <stdint.h>

struct dvb_desc_hierarchy {
	uint8_t type;
	uint8_t length;
	struct dvb_desc *next;

	uint8_t hierarchy_type:4;
	uint8_t reserved:4;

	uint8_t layer:6;
	uint8_t reserved2:2;

	uint8_t embedded_layer:6;
	uint8_t reserved3:2;

	uint8_t channel:6;
	uint8_t reserved4:2;
} __attribute__((packed));

struct dvb_v5_fe_parms;

#ifdef __cplusplus
extern "C" {
#endif

void dvb_desc_hierarchy_init (struct dvb_v5_fe_parms *parms, const uint8_t *buf, struct dvb_desc *desc);
void dvb_desc_hierarchy_print(struct dvb_v5_fe_parms *parms, const struct dvb_desc *desc);

#ifdef __cplusplus
}
#endif

#endif

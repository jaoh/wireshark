/* chdlctypes.h
 * Defines Cisco HDLC packet types that aren't just Ethernet types
 *
 * $Id: chdlctypes.h,v 1.1 2003/01/11 10:16:22 guy Exp $
 *
 * Ethereal - Network traffic analyzer
 * By Gerald Combs <gerald@ethereal.com>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __CHDLCTYPES_H__
#define __CHDLCTYPES_H__

#define CHDLCTYPE_FRARP		0x0808	/* Frame Relay ARP */
#define CHDLCTYPE_BPDU		0x4242	/* IEEE spanning tree protocol */
#define CHDLCTYPE_OSI 	        0xfefe  /* ISO network-layer protocols */

#endif /* chdlctypes.h */

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "dist_pipe.h"

bool_t
xdr_message_v (XDR *xdrs, message_v *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, ~0))
		 return FALSE;
	return TRUE;
}

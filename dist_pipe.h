/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DIST_PIPE_H_RPCGEN
#define _DIST_PIPE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum STATUS {
	OK = 0,
	EMPTY = 1,
	FULL = 2,
	END = 3,
	FINISHING = 4,
};
typedef enum STATUS STATUS;

typedef char *payload;

struct msg {
	int status;
	payload data;
};
typedef struct msg msg;

#define DIST_PIPE 0x20000001
#define beta 101

#if defined(__STDC__) || defined(__cplusplus)
#define pipe_put 1
extern  int * pipe_put_101(msg , CLIENT *);
extern  int * pipe_put_101_svc(msg , struct svc_req *);
#define pipe_get 2
extern  msg * pipe_get_101(CLIENT *);
extern  msg * pipe_get_101_svc(struct svc_req *);
extern int dist_pipe_101_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define pipe_put 1
extern  int * pipe_put_101();
extern  int * pipe_put_101_svc();
#define pipe_get 2
extern  msg * pipe_get_101();
extern  msg * pipe_get_101_svc();
extern int dist_pipe_101_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_STATUS (XDR *, STATUS*);
extern  bool_t xdr_payload (XDR *, payload*);
extern  bool_t xdr_msg (XDR *, msg*);

#else /* K&R C */
extern bool_t xdr_STATUS ();
extern bool_t xdr_payload ();
extern bool_t xdr_msg ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DIST_PIPE_H_RPCGEN */

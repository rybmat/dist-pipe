/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "dist_pipe.h"
#define buffer_size 10

static char* buffer[buffer_size] = {NULL};

int read_pos = 0;
int write_pos = 0;


int *
pipe_put_101_svc(message_v arg1,  struct svc_req *rqstp)
{
	static int  result;
	if (buffer[write_pos] == NULL) {
		buffer[write_pos] = malloc(strlen(arg1) * sizeof(char) + 1);
		strncpy(buffer[write_pos], arg1, strlen(arg1));
		buffer[write_pos][strlen(arg1)] = '\0';

		write_pos = (write_pos + 1) % buffer_size;
		result = 0;
	} else {
		result = 1;
	}

	return &result;
}

message_v *
pipe_get_101_svc(struct svc_req *rqstp)
{
	static message_v  result;
	
	if (buffer[read_pos] == NULL) {
		result = NULL;
	} else {
		result = buffer[read_pos];
		buffer[read_pos] = NULL;
		read_pos = (read_pos + 1) % buffer_size;
	}

	return &result;
}
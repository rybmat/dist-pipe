typedef string message_v<>;


program DIST_PIPE {
   version alfa {
	   int pipe_put(message_v) = 1;
	   message_v pipe_get() = 2;
	} = 101;
} = 0x20000001;
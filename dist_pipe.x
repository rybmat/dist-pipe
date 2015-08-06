enum STATUS {
	OK = 0,
	EMPTY = 1,
	FULL = 2,
	END = 3
};

typedef string payload<>;

struct msg {
	int status;
	payload data;
};


program DIST_PIPE {
   version beta {
	   int pipe_put(msg) = 1;
	   msg pipe_get() = 2;
	} = 101;
} = 0x20000001;
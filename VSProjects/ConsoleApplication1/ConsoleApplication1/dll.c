#include <stdio.h>
#include "dll.h"


in_data in;
out_data out;

API_DEC void initdata(int d)
{
	//memcpy(indata, d, sizeof(in_data));
	in.data.word32.a = d;
}

API_DEC void process()
{
	out.ret1 = in.data.word32.a * 10;
}

API_DEC int output()
{
	return out.ret1;
}
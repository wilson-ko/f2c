#include <config.h>
/* EFL support routine to copy string b to string a */
#include "f2c.h"

#define M	( (long) (sizeof(long) - 1) )
#define EVEN(x)	( ( (x)+ M) & (~M) )

int ef1asc_(ftnint *a, ftnlen *la, ftnint *b, ftnlen *lb)
{
s_copy( (char *)a, (char *)b, EVEN(*la), *lb );
return 0;	/* ignored return value */
}

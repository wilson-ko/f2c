#include <string.h>
#include <config.h>
#define F2C_NO_INLINE_H
#include <f2c.h>

shortint h_dim(const shortint *a, const shortint *b)
{
  shortint d = (*a - *b);
  return (d > 0)? d : 0;
}

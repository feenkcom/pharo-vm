#ifndef SQ_NAMED_PRIMS_H_
#define SQ_NAMED_PRIMS_H_

#include "exportDefinition.h"

typedef struct {
  char *pluginName;
  char *primitiveName; /* N.B. On Spur the accessorDepth is hidden after this */
  void *primitiveAddress;
} sqExport;

EXPORT(sqExport) vm_exports[];
EXPORT(sqExport) os_exports[];
EXPORT(sqExport*) pluginExports[];

#endif // SQ_NAMED_PRIMS_H_
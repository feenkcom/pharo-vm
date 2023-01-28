#pragma once

#include "exportDefinition.h"

typedef struct {
  char *pluginName;
  char *primitiveName; /* N.B. On Spur the accessorDepth is hidden after this */
  void *primitiveAddress;
} sqExport;

EXPORT(sqExport) vm_exports[];
EXPORT(sqExport) os_exports[];
EXPORT(sqExport*) pluginExports[];
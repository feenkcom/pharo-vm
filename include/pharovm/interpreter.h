#ifndef INCLUDE_INTERPRETER_H_
#define INCLUDE_INTERPRETER_H_

//#include "cogmethod.h"
#include "interp.h"
#include "exportDefinition.h"

EXPORT(sqInt) stSizeOf(sqInt oop);
EXPORT(sqInt) stObjectat(sqInt array, sqInt index);
EXPORT(sqInt) stObjectatput(sqInt array, sqInt index, sqInt value);

EXPORT(sqInt) stackIntegerValue(sqInt offset);
EXPORT(sqInt) stackObjectValue(sqInt offset);
EXPORT(sqInt) stackValue(sqInt offset);

EXPORT(sqInt) integerObjectOf(sqInt value);
sqInt integerValueOf(sqInt oop);

EXPORT(sqInt) methodReturnInteger(sqInt integer);

sqInt isPinned(sqInt objOop);
sqInt isPointers(sqInt oop);

EXPORT(sqInt) stSizeOf(sqInt oop);
EXPORT(sqInt) slotSizeOf(sqInt oop);

sqInt isKindOfClass(sqInt, sqInt);
EXPORT(sqInt) instantiateClassindexableSize(sqInt, sqInt);

EXPORT(void *) firstIndexableField(sqInt objOop);

EXPORT(sqInt) classArray(void);
sqInt classByteArray(void);
EXPORT(sqInt) classString(void);
EXPORT(sqInt) classExternalAddress(void);
sqInt classFloat(void);

EXPORT(sqInt) trueObject(void);
EXPORT(sqInt) falseObject(void);

EXPORT(sqInt) methodArgumentCount(void);
void pushFloat(double f);
sqInt pushInteger(sqInt integerValue);
void push(sqInt object);

sqInt failed(void);
EXPORT(sqInt) primitiveFailFor(sqInt);

sqInt forceInterruptCheck(void);
sqInt doSignalSemaphoreWithIndex(sqInt semaIndex);
sqInt getExternalSemaphoreWithIndex(sqInt index);
void  doWaitSemaphore(sqInt sema);
void  doWaitSemaphorereEnterInterpreter(sqInt sema, sqInt hasToReenter);

EXPORT(sqInt) fetchPointerofObject(sqInt, sqInt);

sqInt stringForCString(const char*);

sqInt ptEnterInterpreterFromCallback(void*);
sqInt ptExitInterpreterToCallback(void*);

int osCogStackPageHeadroom();

sqInt isForwarded(sqInt oop);

#endif /* INCLUDE_INTERPRETER_H_ */

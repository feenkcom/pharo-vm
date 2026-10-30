/* pluggable primitive support */
#ifndef EXPORT_DEFINITION_H_
#define EXPORT_DEFINITION_H_

#undef EXPORT
#undef VM_EXPORT

#ifdef _WIN32
# define EXPORT(returnType) __declspec( dllexport ) returnType
# define VM_EXPORT __declspec( dllexport )

#elif __EMSCRIPTEN__
#  include <emscripten.h>
#  define EXPORT(returnType) returnType EMSCRIPTEN_KEEPALIVE
#  define VM_EXPORT

#else
# define EXPORT(returnType) extern returnType
# define VM_EXPORT
#endif

#endif // EXPORT_DEFINITION_H_
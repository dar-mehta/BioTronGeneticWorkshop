#ifndef GENETICMAIN_GLOBAL_H
#define GENETICMAIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GENETICMAIN_LIBRARY)
#  define GENETICMAINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GENETICMAINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // GENETICMAIN_GLOBAL_H
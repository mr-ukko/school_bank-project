#ifndef CARDREADERDLL_GLOBAL_H
#define CARDREADERDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CARDREADERDLL_LIBRARY)
#  define CARDREADERDLL_EXPORT Q_DECL_EXPORT
#else
#  define CARDREADERDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // CARDREADERDLL_GLOBAL_H

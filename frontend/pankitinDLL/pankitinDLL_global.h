#ifndef PANKITINDLL_GLOBAL_H
#define PANKITINDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PANKITINDLL_LIBRARY)
#  define PANKITINDLL_EXPORT Q_DECL_EXPORT
#else
#  define PANKITINDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // PANKITINDLL_GLOBAL_H
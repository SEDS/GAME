// -*- C++ -*-

#ifndef _LIBRARY_EXPORT_H_
#define _LIBRARY_EXPORT_H_

#include "ace/config.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (LIBRARY_HAS_DLL)
#  define LIBRARY_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && LIBRARY_HAS_DLL */

#if !defined (LIBRARY_HAS_DLL)
#  define LIBRARY_HAS_DLL 1
#endif /* ! LIBRARY_HAS_DLL */

#if defined (LIBRARY_HAS_DLL) && (LIBRARY_HAS_DLL == 1)
#  if defined (LIBRARY_BUILD_DLL)
#    define LIBRARY_Export ACE_Proper_Export_Flag
#    define LIBRARY_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define LIBRARY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* LIBRARY_BUILD_DLL */
#    define LIBRARY_Export ACE_Proper_Import_Flag
#    define LIBRARY_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define LIBRARY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* LIBRARY_BUILD_DLL */
#else /* LIBRARY_HAS_DLL == 1 */
#  define LIBRARY_Export
#  define LIBRARY_SINGLETON_DECLARATION(T)
#  define LIBRARY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* LIBRARY_HAS_DLL == 1 */

// Set LIBRARY_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (LIBRARY_NTRACE)
#  if (ACE_NTRACE == 1)
#    define LIBRARY_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define LIBRARY_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !LIBRARY_NTRACE */

#if (LIBRARY_NTRACE == 1)
#  define LIBRARY_TRACE(X)
#else /* (LIBRARY_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define LIBRARY_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (LIBRARY_NTRACE == 1) */
#endif  // !defined _LIBRARY_EXPORT_H_

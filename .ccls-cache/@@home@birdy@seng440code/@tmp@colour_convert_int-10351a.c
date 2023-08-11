# 1 "<built-in>"
# 1 "colour_convert_int.c"

#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 2 "colour_convert_int.c"
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */

#ifndef _STDIO_H
#define _STDIO_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_FEATURES_H
#define	_FEATURES_H	1

/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _ISOC2X_SOURCE	Extensions to ISO C99 from ISO C2X.
   __STDC_WANT_LIB_EXT2__
			Extensions to ISO C99 from TR 27431-2:2010.
   __STDC_WANT_IEC_60559_BFP_EXT__
			Extensions to ISO C11 from TS 18661-1:2014.
   __STDC_WANT_IEC_60559_FUNCS_EXT__
			Extensions to ISO C11 from TS 18661-4:2015.
   __STDC_WANT_IEC_60559_TYPES_EXT__
			Extensions to ISO C11 from TS 18661-3:2015.

   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).

   _FORTIFY_SOURCE	Add security hardening to many library functions.
			Set to 1 or 2; 2 performs stricter checks than 1.

   _REENTRANT, _THREAD_SAFE
			Obsolete; equivalent to _POSIX_C_SOURCE=199506L.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __GLIBC_USE (F)	Define things from feature set F.  This is defined
			to 1 or 0; the subsequent macros are either defined
			or undefined, and those tests should be moved to
			__GLIBC_USE.
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_ISOCXX11	Define ISO C++11 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.

   ISO C feature test macros depend on the definition of the macro
   when an affected header is included, not when the first system
   header is included, and so they are handled in
   <bits/libc-header-start.h>, which does not have a multiple include
   guard.  Feature test macros that can be handled from the first
   system header included are handled here.  */


/* Undefine everything, so we get a clean slate.  */
#undef	__USE_ISOC11
#undef	__USE_ISOC99
#undef	__USE_ISOC95
#undef	__USE_ISOCXX11
#undef	__USE_POSIX
#undef	__USE_POSIX2
#undef	__USE_POSIX199309
#undef	__USE_POSIX199506
#undef	__USE_XOPEN
#undef	__USE_XOPEN_EXTENDED
#undef	__USE_UNIX98
#undef	__USE_XOPEN2K
#undef	__USE_XOPEN2KXSI
#undef	__USE_XOPEN2K8
#undef	__USE_XOPEN2K8XSI
#undef	__USE_LARGEFILE
#undef	__USE_LARGEFILE64
#undef	__USE_FILE_OFFSET64
#undef	__USE_MISC
#undef	__USE_ATFILE
#undef	__USE_GNU
#undef	__USE_FORTIFY_LEVEL
#undef	__KERNEL_STRICT_NAMES
#undef	__GLIBC_USE_ISOC2X
#undef	__GLIBC_USE_DEPRECATED_GETS
#undef	__GLIBC_USE_DEPRECATED_SCANF

/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */
#ifndef _LOOSE_KERNEL_NAMES
# define __KERNEL_STRICT_NAMES
#endif
# 152 "/usr/include/features.h" 3 4

/* Convenience macro to test the version of gcc.
   Use like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __GNUC__ && defined __GNUC_MINOR__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 161 "/usr/include/features.h" 3 4
# define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
# 164 "/usr/include/features.h" 3 4
# define __GNUC_PREREQ(maj, min) 0
#endif
# 166 "/usr/include/features.h" 3 4

/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __clang_major__ && defined __clang_minor__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 172 "/usr/include/features.h" 3 4
# define __glibc_clang_prereq(maj, min) \
  ((__clang_major__ << 16) + __clang_minor__ >= ((maj) << 16) + (min))
#else
# 175 "/usr/include/features.h" 3 4
# define __glibc_clang_prereq(maj, min) 0
#endif
# 177 "/usr/include/features.h" 3 4

/* Whether to use feature set F.  */
#define __GLIBC_USE(F)	__GLIBC_USE_ ## F

/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _BSD_SOURCE || defined _SVID_SOURCE) \
    && !defined _DEFAULT_SOURCE
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 187 "/usr/include/features.h" 3 4
# warning "_BSD_SOURCE and _SVID_SOURCE are deprecated, use _DEFAULT_SOURCE"
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
#endif
# 191 "/usr/include/features.h" 3 4

/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
#ifdef _GNU_SOURCE
# undef  _ISOC95_SOURCE
# define _ISOC95_SOURCE	1
# undef  _ISOC99_SOURCE
# define _ISOC99_SOURCE	1
# undef  _ISOC11_SOURCE
# define _ISOC11_SOURCE	1
# undef  _ISOC2X_SOURCE
# define _ISOC2X_SOURCE	1
# undef  _POSIX_SOURCE
# define _POSIX_SOURCE	1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE	200809L
# undef  _XOPEN_SOURCE
# define _XOPEN_SOURCE	700
# undef  _XOPEN_SOURCE_EXTENDED
# define _XOPEN_SOURCE_EXTENDED	1
# undef	 _LARGEFILE64_SOURCE
# define _LARGEFILE64_SOURCE	1
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 217 "/usr/include/features.h" 3 4

/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _DEFAULT_SOURCE					\
     || (!defined __STRICT_ANSI__				\
	 && !defined _ISOC99_SOURCE && !defined _ISOC11_SOURCE	\
	 && !defined _ISOC2X_SOURCE				\
	 && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE	\
	 && !defined _XOPEN_SOURCE))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 226 "/usr/include/features.h" 3 4
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
#endif
# 229 "/usr/include/features.h" 3 4

/* This is to enable the ISO C2X extension.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _ISOC2X_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ > 201710L))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 233 "/usr/include/features.h" 3 4
# define __GLIBC_USE_ISOC2X	1
#else
# 235 "/usr/include/features.h" 3 4
# define __GLIBC_USE_ISOC2X	0
#endif
# 237 "/usr/include/features.h" 3 4

/* This is to enable the ISO C11 extension.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _ISOC11_SOURCE || defined _ISOC2X_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 241 "/usr/include/features.h" 3 4
# define __USE_ISOC11	1
#endif
# 243 "/usr/include/features.h" 3 4

/* This is to enable the ISO C99 extension.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE			\
     || defined _ISOC2X_SOURCE						\
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 248 "/usr/include/features.h" 3 4
# define __USE_ISOC99	1
#endif
# 250 "/usr/include/features.h" 3 4

/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE			\
     || defined _ISOC2X_SOURCE						\
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199409L))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 255 "/usr/include/features.h" 3 4
# define __USE_ISOC95	1
#endif
# 257 "/usr/include/features.h" 3 4

#ifdef __cplusplus
/* This is to enable compatibility for ISO C++17.  */
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 261 "/usr/include/features.h" 3 4
#  define __USE_ISOC11	1
# endif
# 263 "/usr/include/features.h" 3 4
/* This is to enable compatibility for ISO C++11.
   Check the temporary macro for now, too.  */
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201103L || defined __GXX_EXPERIMENTAL_CXX0X__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 266 "/usr/include/features.h" 3 4
#  define __USE_ISOCXX11	1
#  define __USE_ISOC99	1
# endif
# 269 "/usr/include/features.h" 3 4
#endif
# 270 "/usr/include/features.h" 3 4

/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
#ifdef _DEFAULT_SOURCE
#if 0 /* disabled by -frewrite-includes */
# if !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 276 "/usr/include/features.h" 3 4
#  define __USE_POSIX_IMPLICITLY	1
# endif
# 278 "/usr/include/features.h" 3 4
# undef  _POSIX_SOURCE
# define _POSIX_SOURCE	1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE	200809L
#endif
# 283 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if ((!defined __STRICT_ANSI__					\
      || (defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) >= 500))	\
     && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 287 "/usr/include/features.h" 3 4
# define _POSIX_SOURCE	1
#if 0 /* disabled by -frewrite-includes */
# if defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 500
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 289 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	2
#if 0 /* disabled by -frewrite-includes */
#if 0
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 600
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 291 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	199506L
#if 0 /* disabled by -frewrite-includes */
#if 0
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 700
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 293 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200112L
# else
# 295 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200809L
# endif
# 297 "/usr/include/features.h" 3 4
# define __USE_POSIX_IMPLICITLY	1
#endif
# 299 "/usr/include/features.h" 3 4

/* Some C libraries once required _REENTRANT and/or _THREAD_SAFE to be
   defined in all multithreaded code.  GNU libc has not required this
   for many years.  We now treat them as compatibility synonyms for
   _POSIX_C_SOURCE=199506L, which is the earliest level of POSIX with
   comprehensive support for multithreaded code.  Using them never
   lowers the selected level of POSIX conformance, only raises it.  */
#if 0 /* disabled by -frewrite-includes */
#if ((!defined _POSIX_C_SOURCE || (_POSIX_C_SOURCE - 0) < 199506L) \
     && (defined _REENTRANT || defined _THREAD_SAFE))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 308 "/usr/include/features.h" 3 4
# define _POSIX_SOURCE   1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE 199506L
#endif
# 312 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (defined _POSIX_SOURCE					\
     || (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 1)	\
     || defined _XOPEN_SOURCE)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 316 "/usr/include/features.h" 3 4
# define __USE_POSIX	1
#endif
# 318 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 2 || defined _XOPEN_SOURCE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 320 "/usr/include/features.h" 3 4
# define __USE_POSIX2	1
#endif
# 322 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199309L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 324 "/usr/include/features.h" 3 4
# define __USE_POSIX199309	1
#endif
# 326 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199506L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 328 "/usr/include/features.h" 3 4
# define __USE_POSIX199506	1
#endif
# 330 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200112L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 332 "/usr/include/features.h" 3 4
# define __USE_XOPEN2K		1
# undef __USE_ISOC95
# define __USE_ISOC95		1
# undef __USE_ISOC99
# define __USE_ISOC99		1
#endif
# 338 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200809L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 340 "/usr/include/features.h" 3 4
# define __USE_XOPEN2K8		1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 344 "/usr/include/features.h" 3 4

#ifdef	_XOPEN_SOURCE
# define __USE_XOPEN	1
#if 0 /* disabled by -frewrite-includes */
# if (_XOPEN_SOURCE - 0) >= 500
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 348 "/usr/include/features.h" 3 4
#  define __USE_XOPEN_EXTENDED	1
#  define __USE_UNIX98	1
#  undef _LARGEFILE_SOURCE
#  define _LARGEFILE_SOURCE	1
#if 0 /* disabled by -frewrite-includes */
#  if (_XOPEN_SOURCE - 0) >= 600
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 353 "/usr/include/features.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#   if (_XOPEN_SOURCE - 0) >= 700
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 354 "/usr/include/features.h" 3 4
#    define __USE_XOPEN2K8	1
#    define __USE_XOPEN2K8XSI	1
#   endif
# 357 "/usr/include/features.h" 3 4
#   define __USE_XOPEN2K	1
#   define __USE_XOPEN2KXSI	1
#   undef __USE_ISOC95
#   define __USE_ISOC95		1
#   undef __USE_ISOC99
#   define __USE_ISOC99		1
#  endif
# 364 "/usr/include/features.h" 3 4
# else
# 365 "/usr/include/features.h" 3 4
#  ifdef _XOPEN_SOURCE_EXTENDED
#   define __USE_XOPEN_EXTENDED	1
#  endif
# 368 "/usr/include/features.h" 3 4
# endif
# 369 "/usr/include/features.h" 3 4
#endif
# 370 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE_SOURCE
# define __USE_LARGEFILE	1
#endif
# 374 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE64_SOURCE
# define __USE_LARGEFILE64	1
#endif
# 378 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 380 "/usr/include/features.h" 3 4
# define __USE_FILE_OFFSET64	1
#endif
# 382 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _DEFAULT_SOURCE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 384 "/usr/include/features.h" 3 4
# define __USE_MISC	1
#endif
# 386 "/usr/include/features.h" 3 4

#ifdef	_ATFILE_SOURCE
# define __USE_ATFILE	1
#endif
# 390 "/usr/include/features.h" 3 4

#ifdef	_GNU_SOURCE
# define __USE_GNU	1
#endif
# 394 "/usr/include/features.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _FORTIFY_SOURCE && _FORTIFY_SOURCE > 0 \
    && __GNUC_PREREQ (4, 1) && defined __OPTIMIZE__ && __OPTIMIZE__ > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 397 "/usr/include/features.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if _FORTIFY_SOURCE > 1
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 398 "/usr/include/features.h" 3 4
#  define __USE_FORTIFY_LEVEL 2
# else
# 400 "/usr/include/features.h" 3 4
#  define __USE_FORTIFY_LEVEL 1
# endif
# 402 "/usr/include/features.h" 3 4
#else
# 403 "/usr/include/features.h" 3 4
# define __USE_FORTIFY_LEVEL 0
#endif
# 405 "/usr/include/features.h" 3 4

/* The function 'gets' existed in C89, but is impossible to use
   safely.  It has been removed from ISO C11 and ISO C++14.  Note: for
   compatibility with various implementations of <cstdio>, this test
   must consider only the value of __cplusplus when compiling C++.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __cplusplus ? __cplusplus >= 201402L : defined __USE_ISOC11
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 411 "/usr/include/features.h" 3 4
# define __GLIBC_USE_DEPRECATED_GETS 0
#else
# 413 "/usr/include/features.h" 3 4
# define __GLIBC_USE_DEPRECATED_GETS 1
#endif
# 415 "/usr/include/features.h" 3 4

/* GNU formerly extended the scanf functions with modified format
   specifiers %as, %aS, and %a[...] that allocate a buffer for the
   input using malloc.  This extension conflicts with ISO C99, which
   defines %a as a standalone format specifier that reads a floating-
   point number; moreover, POSIX.1-2008 provides the same feature
   using the modifier letter 'm' instead (%ms, %mS, %m[...]).

   We now follow C99 unless GNU extensions are active and the compiler
   is specifically in C89 or C++98 mode (strict or not).  For
   instance, with GCC, -std=gnu11 will have C99-compliant scanf with
   or without -D_GNU_SOURCE, but -std=c89 -D_GNU_SOURCE will have the
   old extension.  */
#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_GNU							\
     && (defined __cplusplus						\
	 ? (__cplusplus < 201103L && !defined __GXX_EXPERIMENTAL_CXX0X__) \
	 : (!defined __STDC_VERSION__ || __STDC_VERSION__ < 199901L)))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 432 "/usr/include/features.h" 3 4
# define __GLIBC_USE_DEPRECATED_SCANF 1
#else
# 434 "/usr/include/features.h" 3 4
# define __GLIBC_USE_DEPRECATED_SCANF 0
#endif
# 436 "/usr/include/features.h" 3 4

/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
#if 0 /* expanded by -frewrite-includes */
#include <stdc-predef.h>
#endif /* expanded by -frewrite-includes */
# 439 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_STDC_PREDEF_H
#define	_STDC_PREDEF_H	1

/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */

#ifdef __GCC_IEC_559
#if 0 /* disabled by -frewrite-includes */
# if __GCC_IEC_559 > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 38 "/usr/include/stdc-predef.h" 3 4
#  define __STDC_IEC_559__		1
# endif
# 40 "/usr/include/stdc-predef.h" 3 4
#else
# 41 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559__		1
#endif
# 43 "/usr/include/stdc-predef.h" 3 4

#ifdef __GCC_IEC_559_COMPLEX
#if 0 /* disabled by -frewrite-includes */
# if __GCC_IEC_559_COMPLEX > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 46 "/usr/include/stdc-predef.h" 3 4
#  define __STDC_IEC_559_COMPLEX__	1
# endif
# 48 "/usr/include/stdc-predef.h" 3 4
#else
# 49 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559_COMPLEX__	1
#endif
# 51 "/usr/include/stdc-predef.h" 3 4

/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
#define __STDC_ISO_10646__		201706L

#endif
# 61 "/usr/include/stdc-predef.h" 3 4
# 440 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */
#undef  __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6

/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */
#define	__GLIBC__	2
#define	__GLIBC_MINOR__	31

#define __GLIBC_PREREQ(maj, min) \
	((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))

/* This is here only because every header file already includes this one.  */
#ifndef __ASSEMBLER__
# ifndef _SYS_CDEFS_H
#if 0 /* expanded by -frewrite-includes */
#  include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_SYS_CDEFS_H
#define	_SYS_CDEFS_H	1

/* We are almost always included from features.h. */
#ifndef _FEATURES_H
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 24 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 25 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __GNUC__ && !defined __STDC__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# error "You need a ISO C conforming compiler to use the glibc headers"
#endif
# 32 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Some user header file might have defined this before.  */
#undef	__P
#undef	__PMT

#ifdef __GNUC__

/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
#if 0 /* disabled by -frewrite-includes */
# if __GNUC_PREREQ (4, 6) && !defined _LIBC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __LEAF , __leaf__
#  define __LEAF_ATTR __attribute__ ((__leaf__))
# else
# 45 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __LEAF
#  define __LEAF_ATTR
# endif
# 48 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
#if 0 /* disabled by -frewrite-includes */
# if !defined __cplusplus && __GNUC_PREREQ (3, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 55 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __THROW	__attribute__ ((__nothrow__ __LEAF))
#  define __THROWNL	__attribute__ ((__nothrow__))
#  define __NTH(fct)	__attribute__ ((__nothrow__ __LEAF)) fct
#  define __NTHNL(fct)  __attribute__ ((__nothrow__)) fct
# else
# 60 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if defined __cplusplus && __GNUC_PREREQ (2,8)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 61 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#   define __THROW	throw ()
#   define __THROWNL	throw ()
#   define __NTH(fct)	__LEAF_ATTR fct throw ()
#   define __NTHNL(fct) fct throw ()
#  else
# 66 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#   define __THROW
#   define __THROWNL
#   define __NTH(fct)	fct
#   define __NTHNL(fct) fct
#  endif
# 71 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 72 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#else	/* Not GCC.  */
# 74 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if (defined __cplusplus						\
      || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 77 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __inline	inline
# else
# 79 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __inline		/* No inline functions.  */
# endif
# 81 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

# define __THROW
# define __THROWNL
# define __NTH(fct)	fct

#endif	/* GCC.  */
# 87 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Compilers that are not clang may object to
       #if defined __clang__ && __has_extension(...)
   even though they do not need to evaluate the right-hand side of the &&.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __clang__ && defined __has_extension
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 92 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_clang_has_extension(ext) __has_extension (ext)
#else
# 94 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_clang_has_extension(ext) 0
#endif
# 96 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */
#define __P(args)	args
#define __PMT(args)	args

/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */

#define __CONCAT(x,y)	x ## y
#define __STRING(x)	#x

/* This is not a typedef so `const __ptr_t' does the right thing.  */
#define __ptr_t void *


/* C++ needs to know that types and declarations are C, not C++.  */
#ifdef	__cplusplus
# define __BEGIN_DECLS	extern "C" {
# define __END_DECLS	}
#else
# 117 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __BEGIN_DECLS
# define __END_DECLS
#endif
# 120 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4


/* Fortify support.  */
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)

#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4,3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 127 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __warndecl(name, msg) \
  extern void name (void) __attribute__((__warning__ (msg)))
# define __warnattr(msg) __attribute__((__warning__ (msg)))
# define __errordecl(name, msg) \
  extern void name (void) __attribute__((__error__ (msg)))
#else
# 133 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __warndecl(name, msg) extern void name (void)
# define __warnattr(msg)
# define __errordecl(name, msg) extern void name (void)
#endif
# 137 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Support for flexible arrays.
   Headers that should use flexible arrays only if they're "real"
   (e.g. only if they won't affect sizeof()) should test
   #if __glibc_c99_flexarr_available.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 143 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __flexarr	[]
# define __glibc_c99_flexarr_available 1
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __GNUC_PREREQ (2,97)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 146 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* GCC 2.97 supports C99 flexible array members as an extension,
   even when in C89 mode or compiling C++ (any version).  */
# define __flexarr	[]
# define __glibc_c99_flexarr_available 1
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined __GNUC__
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 151 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* Pre-2.97 GCC did not support C99 flexible arrays but did have
   an equivalent extension with slightly different notation.  */
# define __flexarr	[0]
# define __glibc_c99_flexarr_available 1
#else
# 156 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  Approximate with [1].  */
# define __flexarr	[1]
# define __glibc_c99_flexarr_available 0
#endif
# 160 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4


/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */

#if 0 /* disabled by -frewrite-includes */
#if defined __GNUC__ && __GNUC__ >= 2
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 173 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

# define __REDIRECT(name, proto, alias) name proto __asm__ (__ASMNAME (#alias))
# ifdef __cplusplus
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __THROW __asm__ (__ASMNAME (#alias))
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __THROWNL __asm__ (__ASMNAME (#alias))
# else
# 181 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROW
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROWNL
# endif
# 186 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __ASMNAME(cname)  __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
# define __ASMNAME2(prefix, cname) __STRING (prefix) cname

/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/
#endif
# 196 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */
#if 0 /* disabled by -frewrite-includes */
#if !defined __GNUC__ || __GNUC__ < 2
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 201 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute__(xyz)	/* Ignore */
#endif
# 203 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2,96)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 208 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_malloc__ __attribute__ ((__malloc__))
#else
# 210 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_malloc__ /* Ignore */
#endif
# 212 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 216 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_alloc_size__(params) \
  __attribute__ ((__alloc_size__ params))
#else
# 219 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_alloc_size__(params) /* Ignore.  */
#endif
# 221 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2,96)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 226 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_pure__ __attribute__ ((__pure__))
#else
# 228 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_pure__ /* Ignore */
#endif
# 230 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* This declaration tells the compiler that the value is constant.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2,5)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 233 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_const__ __attribute__ ((__const__))
#else
# 235 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_const__ /* Ignore */
#endif
# 237 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,1)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 242 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_used__ __attribute__ ((__used__))
# define __attribute_noinline__ __attribute__ ((__noinline__))
#else
# 245 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_used__ __attribute__ ((__unused__))
# define __attribute_noinline__ /* Ignore */
#endif
# 248 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Since version 3.2, gcc allows marking deprecated functions.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,2)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 251 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated__ __attribute__ ((__deprecated__))
#else
# 253 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated__ /* Ignore */
#endif
# 255 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Since version 4.5, gcc also allows one to specify the message printed
   when a deprecated function is used.  clang claims to be gcc 4.2, but
   may also support this feature.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4,5) \
    || __glibc_clang_has_extension (__attribute_deprecated_with_message__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 261 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated_msg__(msg) \
	 __attribute__ ((__deprecated__ (msg)))
#else
# 264 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated_msg__(msg) __attribute_deprecated__
#endif
# 266 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2,8)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 274 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#else
# 276 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_arg__(x) /* Ignore */
#endif
# 278 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2,97)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 284 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_strfmon__(a,b) \
  __attribute__ ((__format__ (__strfmon__, a, b)))
#else
# 287 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_strfmon__(a,b) /* Ignore */
#endif
# 289 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,3)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 293 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __nonnull(params) __attribute__ ((__nonnull__ params))
#else
# 295 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __nonnull(params)
#endif
# 297 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,4)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 301 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_warn_unused_result__ \
   __attribute__ ((__warn_unused_result__))
#if 0 /* disabled by -frewrite-includes */
# if __USE_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 304 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __wur __attribute_warn_unused_result__
# endif
# 306 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#else
# 307 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_warn_unused_result__ /* empty */
#endif
# 309 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#ifndef __wur
# define __wur /* Ignore */
#endif
# 312 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Forces a function to be always inlined.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,2)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 315 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* The Linux kernel defines __always_inline in stddef.h (283d7573), and
   it conflicts with this definition.  Therefore undefine it first to
   allow either header to be included first.  */
# undef __always_inline
# define __always_inline __inline __attribute__ ((__always_inline__))
#else
# 321 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# undef __always_inline
# define __always_inline __inline
#endif
# 324 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4,3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 328 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_artificial__ __attribute__ ((__artificial__))
#else
# 330 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_artificial__ /* Ignore */
#endif
# 332 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.

   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked for by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
#if 0 /* disabled by -frewrite-includes */
#if (!defined __cplusplus || __GNUC_PREREQ (4,3) \
     || (defined __clang__ && (defined __GNUC_STDC_INLINE__ \
			       || defined __GNUC_GNU_INLINE__)))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 345 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if defined __GNUC_STDC_INLINE__ || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 346 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#  define __extern_always_inline \
  extern __always_inline __attribute__ ((__gnu_inline__))
# else
# 350 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __extern_inline extern __inline
#  define __extern_always_inline extern __always_inline
# endif
# 353 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 354 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#ifdef __extern_always_inline
# define __fortify_function __extern_always_inline __attribute_artificial__
#endif
# 358 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4,3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 362 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __va_arg_pack() __builtin_va_arg_pack ()
# define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#endif
# 365 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */
#if 0 /* disabled by -frewrite-includes */
#if !__GNUC_PREREQ (2,8)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 371 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __extension__		/* Ignore */
#endif
# 373 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* __restrict is known in EGCS 1.2 and above. */
#if 0 /* disabled by -frewrite-includes */
#if !__GNUC_PREREQ (2,92)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 376 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 377 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __restrict	restrict
# else
# 379 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define __restrict	/* Ignore */
# endif
# 381 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 382 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (3,1) && !defined __GNUG__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 387 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __restrict_arr	__restrict
#else
# 389 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# ifdef __GNUC__
#  define __restrict_arr	/* Not supported in old GCC.  */
# else
# 392 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 393 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#   define __restrict_arr	restrict
#  else
# 395 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  */
#   define __restrict_arr	/* Not supported.  */
#  endif
# 398 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 399 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 400 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __GNUC__ >= 3
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 402 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_unlikely(cond)	__builtin_expect ((cond), 0)
# define __glibc_likely(cond)	__builtin_expect ((cond), 1)
#else
# 405 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_unlikely(cond)	(cond)
# define __glibc_likely(cond)	(cond)
#endif
# 408 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#ifdef __has_attribute
# define __glibc_has_attribute(attr)	__has_attribute (attr)
#else
# 412 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_has_attribute(attr)	0
#endif
# 414 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (!defined _Noreturn \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 \
     &&  !__GNUC_PREREQ (4,7))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 418 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if __GNUC_PREREQ (2,8)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 419 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define _Noreturn __attribute__ ((__noreturn__))
# else
# 421 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#  define _Noreturn
# endif
# 423 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 424 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (8, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 426 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* Describes a char array whose address can safely be passed as the first
   argument to strncpy and strncat, as the char array is not necessarily
   a NUL-terminated string.  */
# define __attribute_nonstring__ __attribute__ ((__nonstring__))
#else
# 431 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_nonstring__
#endif
# 433 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Undefine (also defined in libc-symbols.h).  */
#undef __attribute_copy__
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (9, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 437 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
/* Copies attributes from the declaration or type referenced by
   the argument.  */
# define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#else
# 441 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_copy__(arg)
#endif
# 443 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (!defined _Static_assert && !defined __cplusplus \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 \
     && (!__GNUC_PREREQ (4, 6) || defined __STRICT_ANSI__))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 447 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define _Static_assert(expr, diagnostic) \
    extern int (*__Static_assert_function (void)) \
      [!!sizeof (struct { int __error_if_negative: (expr) ? 2 : -1; })]
#endif
# 451 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 452 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifdef __LP64__
# define __WORDSIZE			64
#else
# 23 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#endif
# 27 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4

#define __WORDSIZE_TIME64_COMPAT32	0
# 453 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/long-double.h>
#endif /* expanded by -frewrite-includes */
# 453 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-128 version.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
#define __LONG_DOUBLE_USES_FLOAT128 0
# 454 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __LONG_DOUBLE_MATH_OPTIONAL && defined __NO_LONG_DOUBLE_MATH
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 456 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __LDBL_COMPAT 1
# ifdef __REDIRECT
#  define __LDBL_REDIR1(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __LDBL_REDIR(name, proto) \
  __LDBL_REDIR1 (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_NTH(name, proto, alias) __REDIRECT_NTH (name, proto, alias)
#  define __LDBL_REDIR_NTH(name, proto) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_DECL(name, alias) \
  extern __typeof (name) name __asm (__ASMNAME (#alias));
#  define __LDBL_REDIR_DECL(name) \
  extern __typeof (name) name __asm (__ASMNAME ("__nldbl_" #name));
#  define __REDIRECT_LDBL(name, proto, alias) \
  __LDBL_REDIR1 (name, proto, __nldbl_##alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##alias)
# endif
# 473 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 474 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined __LDBL_COMPAT || !defined __REDIRECT
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 475 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __LDBL_REDIR1(name, proto, alias) name proto
# define __LDBL_REDIR(name, proto) name proto
# define __LDBL_REDIR1_NTH(name, proto, alias) name proto __THROW
# define __LDBL_REDIR_NTH(name, proto) name proto __THROW
# define __LDBL_REDIR_DECL(name)
# ifdef __REDIRECT
#  define __REDIRECT_LDBL(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __REDIRECT_NTH (name, proto, alias)
# endif
# 485 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 486 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* __glibc_macro_warning (MESSAGE) issues warning MESSAGE.  This is
   intended for use in preprocessor macros.

   Note: MESSAGE must be a _single_ string; concatenation of string
   literals is not supported.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4,8) || __glibc_clang_prereq (3,5)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 493 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_macro_warning1(message) _Pragma (#message)
# define __glibc_macro_warning(message) \
  __glibc_macro_warning1 (GCC warning message)
#else
# 497 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_macro_warning(msg)
#endif
# 499 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

/* Generic selection (ISO C11) is a C-only feature, available in GCC
   since version 4.9.  Previous versions do not provide generic
   selection, even though they might set __STDC_VERSION__ to 201112L,
   when in -std=c11 mode.  Thus, we must check for !defined __GNUC__
   when testing __STDC_VERSION__ for generic selection support.
   On the other hand, Clang also defines __GNUC__, so a clang-specific
   check is required to enable the use of generic selection.  */
#if 0 /* disabled by -frewrite-includes */
#if !defined __cplusplus \
    && (__GNUC_PREREQ (4, 9) \
	|| __glibc_clang_has_extension (c_generic_selections) \
	|| (!defined __GNUC__ && defined __STDC_VERSION__ \
	    && __STDC_VERSION__ >= 201112L))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 512 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __HAVE_GENERIC_SELECTION 1
#else
# 514 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# define __HAVE_GENERIC_SELECTION 0
#endif
# 516 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4

#endif	 /* sys/cdefs.h */
# 518 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 462 "/usr/include/features.h" 2 3 4
# endif
# 463 "/usr/include/features.h" 3 4

/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */
#if 0 /* disabled by -frewrite-includes */
# if defined __USE_FILE_OFFSET64 && !defined __REDIRECT
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 467 "/usr/include/features.h" 3 4
#  define __USE_LARGEFILE	1
#  define __USE_LARGEFILE64	1
# endif
# 470 "/usr/include/features.h" 3 4

#endif	/* !ASSEMBLER */
# 472 "/usr/include/features.h" 3 4

/* Decide whether we can define 'extern inline' functions in headers.  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2, 7) && defined __OPTIMIZE__ \
    && !defined __OPTIMIZE_SIZE__ && !defined __NO_INLINE__ \
    && defined __extern_inline
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 477 "/usr/include/features.h" 3 4
# define __USE_EXTERN_INLINES	1
#endif
# 479 "/usr/include/features.h" 3 4


/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
#if 0 /* expanded by -frewrite-includes */
#include <gnu/stubs.h>
#endif /* expanded by -frewrite-includes */
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 5 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifdef __LP64__
# define __WORDSIZE			64
#else
# 23 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#endif
# 27 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4

#define __WORDSIZE_TIME64_COMPAT32	0
# 6 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4

#if 0 /* disabled by -frewrite-includes */
#if !defined __AARCH64EB__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 8 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-lp64.h>
#endif /* expanded by -frewrite-includes */
# 8 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs-lp64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

#ifdef _LIBC
# error Applications may not define the macro _LIBC
#endif
# 9 "/usr/include/aarch64-linux-gnu/gnu/stubs-lp64.h" 3 4

#define __stub___compat_bdflush
#define __stub___compat_create_module
#define __stub___compat_get_kernel_syms
#define __stub___compat_query_module
#define __stub___compat_uselib
#define __stub_chflags
#define __stub_fchflags
#define __stub_gtty
#define __stub_lchmod
#define __stub_revoke
#define __stub_setlogin
#define __stub_sigreturn
#define __stub_sstk
#define __stub_stty
#define __stub_sysctl
# 9 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4
#endif
# 10 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if defined __AARCH64EB__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 11 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-lp64_be.h>
#endif /* expanded by -frewrite-includes */
# 11 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
# 12 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
#endif
# 13 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 3 4
# 486 "/usr/include/features.h" 2 3 4


#endif	/* features.h  */
# 489 "/usr/include/features.h" 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 40 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X; the symbols in Annex F
   still require that macro in C2X.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 51 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 53 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 55 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_BFP_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 57 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#else
# 59 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#endif
# 61 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 70 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 72 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_FUNCS_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 74 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#else
# 76 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#endif
# 78 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 83 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 85 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 87 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 28 "/usr/include/stdio.h" 2 3 4

__BEGIN_DECLS

#define __need_size_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 13 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 17 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define miscellaneous pieces when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 19 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __STDDEF_H
#endif
# 21 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 28 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_ptrdiff_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_PTRDIFF_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 31 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define ptrdiff_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 33 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _PTRDIFF_T
#endif
# 35 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 37 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 39 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_size_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 41 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_SIZE_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 42 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define size_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 44 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _SIZE_T
#endif
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 48 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define rsize_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _RSIZE_T
#endif
# 60 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 62 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 63 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wchar_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 65 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || (defined(_MSC_VER) && !_NATIVE_WCHAR_T_DEFINED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 66 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wchar_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WCHAR_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 69 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 71 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T_DEFINED
#endif
# 73 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 74 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 76 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 77 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 79 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_NULL)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 81 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef NULL
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL __null
#  else
# 86 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 88 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#else
# 89 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 91 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 96 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 97 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 99 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 103 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef typeof(nullptr) nullptr_t;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L */
# 105 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc) && defined(__STDC_VERSION__) &&              \
    __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 108 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define unreachable() __builtin_unreachable()
#endif /* defined(__need_STDDEF_H_misc) && >= C23 */
# 110 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 112 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ||              \
    (defined(__cplusplus) && __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 115 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 116 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 119 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wint_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WINT_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 125 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WINT_T
#endif
# 128 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 130 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 132 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#endif
# 134 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 34 "/usr/include/stdio.h" 2 3 4

#define __need___va_list
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDARG_H

#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
typedef __builtin_va_list __gnuc_va_list;
#endif
# 16 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4

#ifdef __need___va_list
#undef __need___va_list
#else
# 20 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
#define __STDARG_H
#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST
#endif
# 25 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 29 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
/* C2x does not require the second parameter for va_start. */
#define va_start(ap, ...) __builtin_va_start(ap, 0)
#else
# 32 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
/* Versions before C2x do require the second parameter. */
#define va_start(ap, param) __builtin_va_start(ap, param)
#endif
# 35 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)

/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */
#define __va_copy(d,s) __builtin_va_copy(d,s)

#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) ||              \
    (defined(__cplusplus) && __cplusplus >= 201103L) ||                        \
    !defined(__STRICT_ANSI__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
#define va_copy(dest, src)  __builtin_va_copy(dest, src)
#endif
# 48 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4

#endif /* __STDARG_H */
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4

#endif /* not __STDARG_H */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stdarg.h" 3 4
# 37 "/usr/include/stdio.h" 2 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 38 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */

#ifndef	_BITS_TYPES_H
#define	_BITS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifdef __LP64__
# define __WORDSIZE			64
#else
# 23 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#endif
# 27 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4

#define __WORDSIZE_TIME64_COMPAT32	0
# 28 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/timesize.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, general case.
   Copyright (C) 2018-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 19 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifdef __LP64__
# define __WORDSIZE			64
#else
# 23 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#endif
# 27 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4

#define __WORDSIZE_TIME64_COMPAT32	0
# 20 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 2 3 4

/* Size in bits of the 'time_t' type of the default ABI.  */
#define __TIMESIZE	__WORDSIZE
# 29 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 44 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#else
# 47 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
#endif
# 50 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4

/* Smallest types with at least a given width.  */
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;

/* quad_t is also 64 bits.  */
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 63 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#else
# 66 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#endif
# 69 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4

/* Largest integral types.  */
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 72 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
#else
# 75 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
#endif
# 78 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4


/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, traditionally long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */

#define	__S16_TYPE		short int
#define __U16_TYPE		unsigned short int
#define	__S32_TYPE		int
#define __U32_TYPE		unsigned int
#define __SLONGWORD_TYPE	long int
#define __ULONGWORD_TYPE	unsigned long int
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 32
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 116 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# define __SQUAD_TYPE		__int64_t
# define __UQUAD_TYPE		__uint64_t
# define __SWORD_TYPE		int
# define __UWORD_TYPE		unsigned int
# define __SLONG32_TYPE		long int
# define __ULONG32_TYPE		unsigned long int
# define __S64_TYPE		__int64_t
# define __U64_TYPE		__uint64_t
/* We want __extension__ before typedef's that use nonstandard base types
   such as `long long' in C89 mode.  */
# define __STD_TYPE		__extension__ typedef
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 128 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# define __SQUAD_TYPE		long int
# define __UQUAD_TYPE		unsigned long int
# define __SWORD_TYPE		long int
# define __UWORD_TYPE		unsigned long int
# define __SLONG32_TYPE		int
# define __ULONG32_TYPE		unsigned int
# define __S64_TYPE		long int
# define __U64_TYPE		unsigned long int
/* No need to mark the typedef with __extension__.   */
# define __STD_TYPE		typedef
#else
# 139 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# error
#endif
# 141 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/typesizes.h>	/* Defines __*_T_TYPE macros.  */
#endif /* expanded by -frewrite-includes */
# 141 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  For the generic Linux ABI.
   Copyright (C) 2011-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Chris Metcalf <cmetcalf@tilera.com>, 2011.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_H
# error "Never include <bits/typesizes.h> directly; use <sys/types.h> instead."
#endif
# 23 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 3 4

#ifndef	_BITS_TYPESIZES_H
#define	_BITS_TYPESIZES_H	1

/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

#define __DEV_T_TYPE		__UQUAD_TYPE
#define __UID_T_TYPE		__U32_TYPE
#define __GID_T_TYPE		__U32_TYPE
#define __INO_T_TYPE		__ULONGWORD_TYPE
#define __INO64_T_TYPE		__UQUAD_TYPE
#define __MODE_T_TYPE		__U32_TYPE
#define __NLINK_T_TYPE		__U32_TYPE
#define __OFF_T_TYPE		__SLONGWORD_TYPE
#define __OFF64_T_TYPE		__SQUAD_TYPE
#define __PID_T_TYPE		__S32_TYPE
#define __RLIM_T_TYPE		__ULONGWORD_TYPE
#define __RLIM64_T_TYPE		__UQUAD_TYPE
#define	__BLKCNT_T_TYPE		__SLONGWORD_TYPE
#define	__BLKCNT64_T_TYPE	__SQUAD_TYPE
#define	__FSBLKCNT_T_TYPE	__ULONGWORD_TYPE
#define	__FSBLKCNT64_T_TYPE	__UQUAD_TYPE
#define	__FSFILCNT_T_TYPE	__ULONGWORD_TYPE
#define	__FSFILCNT64_T_TYPE	__UQUAD_TYPE
#define	__FSWORD_T_TYPE		__SWORD_TYPE
#define	__ID_T_TYPE		__U32_TYPE
#define __CLOCK_T_TYPE		__SLONGWORD_TYPE
#define __TIME_T_TYPE		__SLONGWORD_TYPE
#define __USECONDS_T_TYPE	__U32_TYPE
#define __SUSECONDS_T_TYPE	__SLONGWORD_TYPE
#define __DADDR_T_TYPE		__S32_TYPE
#define __KEY_T_TYPE		__S32_TYPE
#define __CLOCKID_T_TYPE	__S32_TYPE
#define __TIMER_T_TYPE		void *
#define __BLKSIZE_T_TYPE	__S32_TYPE
#define __FSID_T_TYPE		struct { int __val[2]; }
#define __SSIZE_T_TYPE		__SWORD_TYPE
#define __SYSCALL_SLONG_TYPE	__SLONGWORD_TYPE
#define __SYSCALL_ULONG_TYPE	__ULONGWORD_TYPE
#define __CPU_MASK_TYPE 	__ULONGWORD_TYPE

#ifdef __LP64__
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */
# define __OFF_T_MATCHES_OFF64_T	1

/* Same for ino_t and ino64_t.  */
# define __INO_T_MATCHES_INO64_T	1

/* And for __rlim_t and __rlim64_t.  */
# define __RLIM_T_MATCHES_RLIM64_T	1

/* And for fsblkcnt_t, fsblkcnt64_t, fsfilcnt_t and fsfilcnt64_t.  */
# define __STATFS_MATCHES_STATFS64  1
#else
# 80 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 3 4
# define __RLIM_T_MATCHES_RLIM64_T	0

# define __STATFS_MATCHES_STATFS64  0
#endif
# 84 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 3 4
/* Number of descriptors that can fit in an `fd_set'.  */
#define	__FD_SETSIZE		1024


#endif /* bits/typesizes.h */
# 89 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 3 4
# 142 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/time64.h>	/* Defines __TIME*_T_TYPE macros.  */
#endif /* expanded by -frewrite-includes */
# 142 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/time64.h" 1 3 4
/* bits/time64.h -- underlying types for __time64_t.  Generic version.
   Copyright (C) 2018-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_H
# error "Never include <bits/time64.h> directly; use <sys/types.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/time64.h" 3 4

#ifndef	_BITS_TIME64_H
#define	_BITS_TIME64_H	1

/* Define __TIME64_T_TYPE so that it is always a 64-bit type.  */

#if 0 /* disabled by -frewrite-includes */
#if __TIMESIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 29 "/usr/include/aarch64-linux-gnu/bits/time64.h" 3 4
/* If we already have 64-bit time type then use it.  */
# define __TIME64_T_TYPE		__TIME_T_TYPE
#else
# 32 "/usr/include/aarch64-linux-gnu/bits/time64.h" 3 4
/* Define a 64-bit time type alongsize the 32-bit one.  */
# define __TIME64_T_TYPE		__SQUAD_TYPE
#endif
# 35 "/usr/include/aarch64-linux-gnu/bits/time64.h" 3 4

#endif /* bits/time64.h */
# 37 "/usr/include/aarch64-linux-gnu/bits/time64.h" 3 4
# 143 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4


__STD_TYPE __DEV_T_TYPE __dev_t;	/* Type of device numbers.  */
__STD_TYPE __UID_T_TYPE __uid_t;	/* Type of user identifications.  */
__STD_TYPE __GID_T_TYPE __gid_t;	/* Type of group identifications.  */
__STD_TYPE __INO_T_TYPE __ino_t;	/* Type of file serial numbers.  */
__STD_TYPE __INO64_T_TYPE __ino64_t;	/* Type of file serial numbers (LFS).*/
__STD_TYPE __MODE_T_TYPE __mode_t;	/* Type of file attribute bitmasks.  */
__STD_TYPE __NLINK_T_TYPE __nlink_t;	/* Type of file link counts.  */
__STD_TYPE __OFF_T_TYPE __off_t;	/* Type of file sizes and offsets.  */
__STD_TYPE __OFF64_T_TYPE __off64_t;	/* Type of file sizes and offsets (LFS).  */
__STD_TYPE __PID_T_TYPE __pid_t;	/* Type of process identifications.  */
__STD_TYPE __FSID_T_TYPE __fsid_t;	/* Type of file system IDs.  */
__STD_TYPE __CLOCK_T_TYPE __clock_t;	/* Type of CPU usage counts.  */
__STD_TYPE __RLIM_T_TYPE __rlim_t;	/* Type for resource measurement.  */
__STD_TYPE __RLIM64_T_TYPE __rlim64_t;	/* Type for resource measurement (LFS).  */
__STD_TYPE __ID_T_TYPE __id_t;		/* General type for IDs.  */
__STD_TYPE __TIME_T_TYPE __time_t;	/* Seconds since the Epoch.  */
__STD_TYPE __USECONDS_T_TYPE __useconds_t; /* Count of microseconds.  */
__STD_TYPE __SUSECONDS_T_TYPE __suseconds_t; /* Signed count of microseconds.  */

__STD_TYPE __DADDR_T_TYPE __daddr_t;	/* The type of a disk address.  */
__STD_TYPE __KEY_T_TYPE __key_t;	/* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
__STD_TYPE __CLOCKID_T_TYPE __clockid_t;

/* Timer ID returned by `timer_create'.  */
__STD_TYPE __TIMER_T_TYPE __timer_t;

/* Type to represent block size.  */
__STD_TYPE __BLKSIZE_T_TYPE __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
__STD_TYPE __BLKCNT_T_TYPE __blkcnt_t;
__STD_TYPE __BLKCNT64_T_TYPE __blkcnt64_t;

/* Type to count file system blocks.  */
__STD_TYPE __FSBLKCNT_T_TYPE __fsblkcnt_t;
__STD_TYPE __FSBLKCNT64_T_TYPE __fsblkcnt64_t;

/* Type to count file system nodes.  */
__STD_TYPE __FSFILCNT_T_TYPE __fsfilcnt_t;
__STD_TYPE __FSFILCNT64_T_TYPE __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
__STD_TYPE __FSWORD_T_TYPE __fsword_t;

__STD_TYPE __SSIZE_T_TYPE __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
__STD_TYPE __SYSCALL_SLONG_TYPE __syscall_slong_t;
/* Unsigned long type used in system calls.  */
__STD_TYPE __SYSCALL_ULONG_TYPE __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t;	/* Type of file sizes and offsets (LFS).  */
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
__STD_TYPE __SWORD_TYPE __intptr_t;

/* Duplicate info from sys/socket.h.  */
__STD_TYPE __U32_TYPE __socklen_t;

/* C99: An integer type that can be accessed as an atomic entity,
   even in the presence of asynchronous interrupts.
   It is not currently necessary for this to be machine-specific.  */
typedef int __sig_atomic_t;

/* Seconds since the Epoch, visible to user code when time_t is too
   narrow only for consistency with the old way of widening too-narrow
   types.  User code should never use __time64_t.  */
#if 0 /* disabled by -frewrite-includes */
#if __TIMESIZE == 64 && defined __LIBC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 220 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# define __time64_t __time_t
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __TIMESIZE != 64
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 222 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
__STD_TYPE __TIME64_T_TYPE __time64_t;
#endif
# 224 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4

#undef __STD_TYPE

#endif /* bits/types.h */
# 228 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 39 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__fpos_t.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 1 3 4
#ifndef _____fpos_t_defined
#define _____fpos_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__mbstate_t.h>
#endif /* expanded by -frewrite-includes */
# 5 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
#ifndef ____mbstate_t_defined
#define ____mbstate_t_defined 1

/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */
#ifndef __WINT_TYPE__
# define __WINT_TYPE__ unsigned int
#endif
# 11 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 3 4

/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    __WINT_TYPE__ __wch;
    char __wchb[4];
  } __value;		/* Value so far.  */
} __mbstate_t;

#endif
# 24 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 3 4
# 6 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 2 3 4

/* The tag name of this struct is _G_fpos_t to preserve historic
   C++ mangled names for functions taking fpos_t arguments.
   That name should not be used in new code.  */
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;

#endif
# 17 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 3 4
# 40 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__fpos64_t.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
#ifndef _____fpos64_t_defined
#define _____fpos64_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__mbstate_t.h>
#endif /* expanded by -frewrite-includes */
# 5 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
# 6 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4

/* The tag name of this struct is _G_fpos64_t to preserve historic
   C++ mangled names for functions taking fpos_t and/or fpos64_t
   arguments.  That name should not be used in new code.  */
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;

#endif
# 17 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
# 41 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__FILE.h>
#endif /* expanded by -frewrite-includes */
# 41 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__FILE.h" 1 3 4
#ifndef ____FILE_defined
#define ____FILE_defined 1

struct _IO_FILE;
typedef struct _IO_FILE __FILE;

#endif
# 8 "/usr/include/aarch64-linux-gnu/bits/types/__FILE.h" 3 4
# 42 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/FILE.h>
#endif /* expanded by -frewrite-includes */
# 42 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/FILE.h" 1 3 4
#ifndef __FILE_defined
#define __FILE_defined 1

struct _IO_FILE;

/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/FILE.h" 3 4
# 43 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/struct_FILE.h>
#endif /* expanded by -frewrite-includes */
# 43 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef __struct_FILE_defined
#define __struct_FILE_defined 1

/* Caution: The contents of this file are not part of the official
   stdio.h API.  However, much of it is part of the official *binary*
   interface, and therefore cannot be changed.  */

#if 0 /* disabled by -frewrite-includes */
#if defined _IO_USE_OLD_IO_FILE && !defined _LIBC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 26 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
# error "_IO_USE_OLD_IO_FILE should only be defined when building libc itself"
#endif
# 28 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined _IO_lock_t_defined && !defined _LIBC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
# error "_IO_lock_t_defined should only be defined when building libc itself"
#endif
# 32 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4

struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;

/* During the build of glibc itself, _IO_lock_t will already have been
   defined by internal headers.  */
#ifndef _IO_lock_t_defined
typedef void _IO_lock_t;
#endif
# 45 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4

/* The tag name of this struct is _IO_FILE to preserve historic
   C++ mangled names for functions taking FILE* arguments.
   That name should not be used in new code.  */
struct _IO_FILE
{
  int _flags;		/* High-order word is _IO_MAGIC; rest is flags. */

  /* The following pointers correspond to the C++ streambuf protocol. */
  char *_IO_read_ptr;	/* Current read pointer */
  char *_IO_read_end;	/* End of get area. */
  char *_IO_read_base;	/* Start of putback+get area. */
  char *_IO_write_base;	/* Start of put area. */
  char *_IO_write_ptr;	/* Current put pointer. */
  char *_IO_write_end;	/* End of put area. */
  char *_IO_buf_base;	/* Start of reserve area. */
  char *_IO_buf_end;	/* End of reserve area. */

  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base;  /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset; /* This used to be _offset but it's too small.  */

  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;
#ifdef _IO_USE_OLD_IO_FILE
};

struct _IO_FILE_complete
{
  struct _IO_FILE _file;
#endif
# 89 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
  __off64_t _offset;
  /* Wide character stream stuff.  */
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};

/* These macros are used by bits/stdio.h and internal headers.  */
#define __getc_unlocked_body(_fp)					\
  (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end)	\
   ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)

#define __putc_unlocked_body(_ch, _fp)					\
  (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end)	\
   ? __overflow (_fp, (unsigned char) (_ch))				\
   : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))

#define _IO_EOF_SEEN 0x0010
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)

#define _IO_ERR_SEEN 0x0020
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)

#define _IO_USER_LOCK 0x8000
/* Many more flag bits are defined internally.  */

#endif
# 121 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
# 44 "/usr/include/stdio.h" 2 3 4

#ifdef __USE_GNU
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/cookie_io_functions_t.h>
#endif /* expanded by -frewrite-includes */
# 46 "/usr/include/stdio.h" 3 4
# 47 "/usr/include/stdio.h" 3 4
#endif
# 48 "/usr/include/stdio.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 50 "/usr/include/stdio.h" 3 4
# ifdef __GNUC__
#  ifndef _VA_LIST_DEFINED
typedef __gnuc_va_list va_list;
#   define _VA_LIST_DEFINED
#  endif
# 55 "/usr/include/stdio.h" 3 4
# else
# 56 "/usr/include/stdio.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 56 "/usr/include/stdio.h" 3 4
# 57 "/usr/include/stdio.h" 3 4
# endif
# 58 "/usr/include/stdio.h" 3 4
#endif
# 59 "/usr/include/stdio.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 61 "/usr/include/stdio.h" 3 4
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 65 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;
# endif
# 67 "/usr/include/stdio.h" 3 4
# define __off_t_defined
# endif
# 69 "/usr/include/stdio.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if defined __USE_LARGEFILE64 && !defined __off64_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 70 "/usr/include/stdio.h" 3 4
typedef __off64_t off64_t;
# define __off64_t_defined
# endif
# 73 "/usr/include/stdio.h" 3 4
#endif
# 74 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
# ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
# endif
# 80 "/usr/include/stdio.h" 3 4
#endif
# 81 "/usr/include/stdio.h" 3 4

/* The type of the second argument to `fgetpos' and `fsetpos'.  */
#ifndef __USE_FILE_OFFSET64
typedef __fpos_t fpos_t;
#else
# 86 "/usr/include/stdio.h" 3 4
typedef __fpos64_t fpos_t;
#endif
# 88 "/usr/include/stdio.h" 3 4
#ifdef __USE_LARGEFILE64
typedef __fpos64_t fpos64_t;
#endif
# 91 "/usr/include/stdio.h" 3 4

/* The possibilities for the third argument to `setvbuf'.  */
#define _IOFBF 0		/* Fully buffered.  */
#define _IOLBF 1		/* Line buffered.  */
#define _IONBF 2		/* No buffering.  */


/* Default buffer size.  */
#define BUFSIZ 8192


/* The value returned by fgetc and similar functions to indicate the
   end of the file.  */
#define EOF (-1)


/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
#define SEEK_SET	0	/* Seek from beginning of file.  */
#define SEEK_CUR	1	/* Seek from current position.  */
#define SEEK_END	2	/* Seek from end of file.  */
#ifdef __USE_GNU
# define SEEK_DATA	3	/* Seek to next data.  */
# define SEEK_HOLE	4	/* Seek to next hole.  */
#endif
# 116 "/usr/include/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 119 "/usr/include/stdio.h" 3 4
/* Default path prefix for `tempnam' and `tmpnam'.  */
# define P_tmpdir	"/tmp"
#endif
# 122 "/usr/include/stdio.h" 3 4


/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/stdio_lim.h>
#endif /* expanded by -frewrite-includes */
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDIO_LIM_H
#define _BITS_STDIO_LIM_H 1

#ifndef _STDIO_H
# error "Never include <bits/stdio_lim.h> directly; use <stdio.h> instead."
#endif
# 24 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 3 4

#define L_tmpnam 20
#define TMP_MAX 238328
#define FILENAME_MAX 4096

#ifdef __USE_POSIX
# define L_ctermid 9
#if 0 /* disabled by -frewrite-includes */
# if !defined __USE_XOPEN2K || defined __USE_GNU
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 32 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 3 4
#  define L_cuserid 9
# endif
# 34 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 3 4
#endif
# 35 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 3 4

#undef  FOPEN_MAX
#define FOPEN_MAX 16

#endif /* bits/stdio_lim.h */
# 40 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 3 4
# 134 "/usr/include/stdio.h" 2 3 4


/* Standard streams.  */
extern FILE *stdin;		/* Standard input stream.  */
extern FILE *stdout;		/* Standard output stream.  */
extern FILE *stderr;		/* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */
#define stdin stdin
#define stdout stdout
#define stderr stderr

/* Remove file FILENAME.  */
extern int remove (const char *__filename) __THROW;
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) __THROW;

#ifdef __USE_ATFILE
/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) __THROW;
#endif
# 155 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* Flags for renameat2.  */
# define RENAME_NOREPLACE (1 << 0)
# define RENAME_EXCHANGE (1 << 1)
# define RENAME_WHITEOUT (1 << 2)

/* Rename file OLD relative to OLDFD to NEW relative to NEWFD, with
   additional flags.  */
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
		      const char *__new, unsigned int __flags) __THROW;
#endif
# 167 "/usr/include/stdio.h" 3 4

/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#ifndef __USE_FILE_OFFSET64
extern FILE *tmpfile (void) __wur;
#else
# 175 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (tmpfile, (void), tmpfile64) __wur;
# else
# 178 "/usr/include/stdio.h" 3 4
#  define tmpfile tmpfile64
# endif
# 180 "/usr/include/stdio.h" 3 4
#endif
# 181 "/usr/include/stdio.h" 3 4

#ifdef __USE_LARGEFILE64
extern FILE *tmpfile64 (void) __wur;
#endif
# 185 "/usr/include/stdio.h" 3 4

/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) __THROW __wur;

#ifdef __USE_MISC
/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) __THROW __wur;
#endif
# 194 "/usr/include/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 197 "/usr/include/stdio.h" 3 4
/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (const char *__dir, const char *__pfx)
     __THROW __attribute_malloc__ __wur;
#endif
# 207 "/usr/include/stdio.h" 3 4


/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);

#ifdef __USE_MISC
/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);
#endif
# 229 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* Close all streams.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fcloseall (void);
#endif
# 239 "/usr/include/stdio.h" 3 4


#ifndef __USE_FILE_OFFSET64
/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *__restrict __filename,
		    const char *__restrict __modes) __wur;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *__restrict __filename,
		      const char *__restrict __modes,
		      FILE *__restrict __stream) __wur;
#else
# 256 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (fopen, (const char *__restrict __filename,
				 const char *__restrict __modes), fopen64)
  __wur;
extern FILE *__REDIRECT (freopen, (const char *__restrict __filename,
				   const char *__restrict __modes,
				   FILE *__restrict __stream), freopen64)
  __wur;
# else
# 265 "/usr/include/stdio.h" 3 4
#  define fopen fopen64
#  define freopen freopen64
# endif
# 268 "/usr/include/stdio.h" 3 4
#endif
# 269 "/usr/include/stdio.h" 3 4
#ifdef __USE_LARGEFILE64
extern FILE *fopen64 (const char *__restrict __filename,
		      const char *__restrict __modes) __wur;
extern FILE *freopen64 (const char *__restrict __filename,
			const char *__restrict __modes,
			FILE *__restrict __stream) __wur;
#endif
# 276 "/usr/include/stdio.h" 3 4

#ifdef	__USE_POSIX
/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, const char *__modes) __THROW __wur;
#endif
# 281 "/usr/include/stdio.h" 3 4

#ifdef	__USE_GNU
/* Create a new stream that refers to the given magic cookie,
   and uses the given functions for input and output.  */
extern FILE *fopencookie (void *__restrict __magic_cookie,
			  const char *__restrict __modes,
			  cookie_io_functions_t __io_funcs) __THROW __wur;
#endif
# 289 "/usr/include/stdio.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 291 "/usr/include/stdio.h" 3 4
/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __THROW __wur;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __THROW __wur;
#endif
# 300 "/usr/include/stdio.h" 3 4


/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __THROW;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n) __THROW;

#ifdef	__USE_MISC
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size) __THROW;

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) __THROW;
#endif
# 320 "/usr/include/stdio.h" 3 4


/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
		    const char *__restrict __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
		    const char *__restrict __format, ...) __THROWNL;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg) __THROWNL;

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_ISOC99 || defined __USE_UNIX98
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 353 "/usr/include/stdio.h" 3 4
/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
		     const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      const char *__restrict __format, __gnuc_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 0)));
#endif
# 362 "/usr/include/stdio.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (LIB_EXT2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 364 "/usr/include/stdio.h" 3 4
/* Write formatted output to a string dynamically allocated with `malloc'.
   Store the address of the string in *PTR.  */
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
		      __gnuc_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0))) __wur;
extern int __asprintf (char **__restrict __ptr,
		       const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
extern int asprintf (char **__restrict __ptr,
		     const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
#endif
# 376 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
/* Write formatted output to a file descriptor.  */
extern int vdprintf (int __fd, const char *__restrict __fmt,
		     __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#endif
# 385 "/usr/include/stdio.h" 3 4


/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
		   const char *__restrict __format, ...) __wur;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *__restrict __format, ...) __wur;
/* Read formatted input from S.  */
extern int sscanf (const char *__restrict __s,
		   const char *__restrict __format, ...) __THROW;

/* For historical reasons, the C99-compliant versions of the scanf
   functions are at alternative names.  When __LDBL_COMPAT is in
   effect, this is handled in bits/stdio-ldbl.h.  */
#if 0 /* disabled by -frewrite-includes */
#if !__GLIBC_USE (DEPRECATED_SCANF) && !defined __LDBL_COMPAT
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 406 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern int __REDIRECT (fscanf, (FILE *__restrict __stream,
				const char *__restrict __format, ...),
		       __isoc99_fscanf) __wur;
extern int __REDIRECT (scanf, (const char *__restrict __format, ...),
		       __isoc99_scanf) __wur;
extern int __REDIRECT_NTH (sscanf, (const char *__restrict __s,
				    const char *__restrict __format, ...),
			   __isoc99_sscanf);
# else
# 416 "/usr/include/stdio.h" 3 4
extern int __isoc99_fscanf (FILE *__restrict __stream,
			    const char *__restrict __format, ...) __wur;
extern int __isoc99_scanf (const char *__restrict __format, ...) __wur;
extern int __isoc99_sscanf (const char *__restrict __s,
			    const char *__restrict __format, ...) __THROW;
#  define fscanf __isoc99_fscanf
#  define scanf __isoc99_scanf
#  define sscanf __isoc99_sscanf
# endif
# 425 "/usr/include/stdio.h" 3 4
#endif
# 426 "/usr/include/stdio.h" 3 4

#ifdef	__USE_ISOC99
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
		    __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *__restrict __s,
		    const char *__restrict __format, __gnuc_va_list __arg)
     __THROW __attribute__ ((__format__ (__scanf__, 2, 0)));

/* Same redirection as above for the v*scanf family.  */
#if 0 /* disabled by -frewrite-includes */
# if !__GLIBC_USE (DEPRECATED_SCANF)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 450 "/usr/include/stdio.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if defined __REDIRECT && !defined __LDBL_COMPAT
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 451 "/usr/include/stdio.h" 3 4
extern int __REDIRECT (vfscanf,
		       (FILE *__restrict __s,
			const char *__restrict __format, __gnuc_va_list __arg),
		       __isoc99_vfscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;
extern int __REDIRECT (vscanf, (const char *__restrict __format,
				__gnuc_va_list __arg), __isoc99_vscanf)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;
extern int __REDIRECT_NTH (vsscanf,
			   (const char *__restrict __s,
			    const char *__restrict __format,
			    __gnuc_va_list __arg), __isoc99_vsscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0)));
#if 0 /* disabled by -frewrite-includes */
#if 0
#  elif !defined __REDIRECT
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 465 "/usr/include/stdio.h" 3 4
extern int __isoc99_vfscanf (FILE *__restrict __s,
			     const char *__restrict __format,
			     __gnuc_va_list __arg) __wur;
extern int __isoc99_vscanf (const char *__restrict __format,
			    __gnuc_va_list __arg) __wur;
extern int __isoc99_vsscanf (const char *__restrict __s,
			     const char *__restrict __format,
			     __gnuc_va_list __arg) __THROW;
#   define vfscanf __isoc99_vfscanf
#   define vscanf __isoc99_vscanf
#   define vsscanf __isoc99_vsscanf
#  endif
# 477 "/usr/include/stdio.h" 3 4
# endif
# 478 "/usr/include/stdio.h" 3 4
#endif /* Use ISO C9x.  */
# 479 "/usr/include/stdio.h" 3 4


/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);

#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
#endif /* Use POSIX.  */
# 502 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);
#endif /* Use MISC.  */
# 512 "/usr/include/stdio.h" 3 4


/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);
#endif /* Use MISC.  */
# 539 "/usr/include/stdio.h" 3 4

#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
#endif /* Use POSIX.  */
# 548 "/usr/include/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC \
    || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 552 "/usr/include/stdio.h" 3 4
/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);
#endif
# 558 "/usr/include/stdio.h" 3 4


/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __wur;

#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (DEPRECATED_GETS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 568 "/usr/include/stdio.h" 3 4
/* Get a newline-terminated string from stdin, removing the newline.

   This function is impossible to use safely.  It has been officially
   removed from ISO C11 and ISO C++14, and we have also removed it
   from the _GNU_SOURCE feature list.  It remains available when
   explicitly using an old ISO C, Unix, or POSIX standard.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) __wur __attribute_deprecated__;
#endif
# 579 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* This function does the same as `fgets' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern char *fgets_unlocked (char *__restrict __s, int __n,
			     FILE *__restrict __stream) __wur;
#endif
# 590 "/usr/include/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 593 "/usr/include/stdio.h" 3 4
/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __wur;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __wur;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __wur;
#endif
# 620 "/usr/include/stdio.h" 3 4


/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) __wur;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s);

#ifdef __USE_GNU
/* This function does the same as `fputs' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputs_unlocked (const char *__restrict __s,
			   FILE *__restrict __stream);
#endif
# 665 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) __wur;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream);
#endif
# 678 "/usr/include/stdio.h" 3 4


/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) __wur;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_LARGEFILE || defined __USE_XOPEN2K
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 702 "/usr/include/stdio.h" 3 4
# ifndef __USE_FILE_OFFSET64
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) __wur;
# else
# 714 "/usr/include/stdio.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (fseeko,
		       (FILE *__stream, __off64_t __off, int __whence),
		       fseeko64);
extern __off64_t __REDIRECT (ftello, (FILE *__stream), ftello64);
#  else
# 720 "/usr/include/stdio.h" 3 4
#   define fseeko fseeko64
#   define ftello ftello64
#  endif
# 723 "/usr/include/stdio.h" 3 4
# endif
# 724 "/usr/include/stdio.h" 3 4
#endif
# 725 "/usr/include/stdio.h" 3 4

#ifndef __USE_FILE_OFFSET64
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
#else
# 738 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern int __REDIRECT (fgetpos, (FILE *__restrict __stream,
				 fpos_t *__restrict __pos), fgetpos64);
extern int __REDIRECT (fsetpos,
		       (FILE *__stream, const fpos_t *__pos), fsetpos64);
# else
# 744 "/usr/include/stdio.h" 3 4
#  define fgetpos fgetpos64
#  define fsetpos fsetpos64
# endif
# 747 "/usr/include/stdio.h" 3 4
#endif
# 748 "/usr/include/stdio.h" 3 4

#ifdef __USE_LARGEFILE64
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __wur;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);
#endif
# 755 "/usr/include/stdio.h" 3 4

/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __THROW;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __THROW __wur;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __THROW __wur;

#ifdef __USE_MISC
/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) __THROW;
extern int feof_unlocked (FILE *__stream) __THROW __wur;
extern int ferror_unlocked (FILE *__stream) __THROW __wur;
#endif
# 769 "/usr/include/stdio.h" 3 4


/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s);

/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/sys_errlist.h>
#endif /* expanded by -frewrite-includes */
# 781 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _STDIO_H
# error "Never include <bits/sys_errlist.h> directly; use <stdio.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/sys_errlist.h" 3 4

/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */

#ifdef  __USE_MISC
extern int sys_nerr;
extern const char *const sys_errlist[];
#endif
# 29 "/usr/include/aarch64-linux-gnu/bits/sys_errlist.h" 3 4
#ifdef  __USE_GNU
extern int _sys_nerr;
extern const char *const _sys_errlist[];
#endif
# 33 "/usr/include/aarch64-linux-gnu/bits/sys_errlist.h" 3 4
# 782 "/usr/include/stdio.h" 2 3 4


#ifdef	__USE_POSIX
/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) __THROW __wur;
#endif /* Use POSIX.  */
# 788 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) __THROW __wur;
#endif
# 793 "/usr/include/stdio.h" 3 4


#ifdef __USE_POSIX2
/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (const char *__command, const char *__modes) __wur;

/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);
#endif
# 808 "/usr/include/stdio.h" 3 4


#ifdef	__USE_POSIX
/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) __THROW;
#endif /* Use POSIX.  */
# 814 "/usr/include/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_XOPEN && !defined __USE_XOPEN2K) || defined __USE_GNU
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 817 "/usr/include/stdio.h" 3 4
/* Return the name of the current user.  */
extern char *cuserid (char *__s);
#endif /* Use X/Open, but not issue 6.  */
# 820 "/usr/include/stdio.h" 3 4


#ifdef	__USE_GNU
struct obstack;			/* See <obstack.h>.  */

/* Write formatted output to an obstack.  */
extern int obstack_printf (struct obstack *__restrict __obstack,
			   const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
			    const char *__restrict __format,
			    __gnuc_va_list __args)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0)));
#endif /* Use GNU.  */
# 834 "/usr/include/stdio.h" 3 4


#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) __THROW;

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) __THROW __wur;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) __THROW;
#endif /* POSIX */
# 849 "/usr/include/stdio.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN && !defined __USE_XOPEN2K && !defined __USE_GNU
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 851 "/usr/include/stdio.h" 3 4
/*  X/Open Issues 1-5 required getopt to be declared in this
   header.  It was removed in Issue 6.  GNU follows Issue 6.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/getopt_posix.h>
#endif /* expanded by -frewrite-includes */
# 853 "/usr/include/stdio.h" 3 4
# 854 "/usr/include/stdio.h" 3 4
#endif
# 855 "/usr/include/stdio.h" 3 4

/* Slow-path routines used by the optimized inline functions in
   bits/stdio.h.  */
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);

/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio.h>
#endif /* expanded by -frewrite-includes */
# 864 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 1 3 4
/* Optimizing macros and inline functions for stdio functions.
   Copyright (C) 1998-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDIO_H
#define _BITS_STDIO_H 1

#ifndef _STDIO_H
# error "Never include <bits/stdio.h> directly; use <stdio.h> instead."
#endif
# 25 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4

#ifndef __extern_inline
# define __STDIO_INLINE inline
#else
# 29 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4
# define __STDIO_INLINE __extern_inline
#endif
# 31 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


#ifdef __USE_EXTERN_INLINES
/* For -D_FORTIFY_SOURCE{,=2} bits/stdio2.h will define a different
   inline.  */
#if 0 /* disabled by -frewrite-includes */
# if !(__USE_FORTIFY_LEVEL > 0 && defined __fortify_function)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 37 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4
/* Write formatted output to stdout from argument list ARG.  */
__STDIO_INLINE int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}
# endif
# 44 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4

/* Read a character from stdin.  */
__STDIO_INLINE int
getchar (void)
{
  return getc (stdin);
}


# ifdef __USE_MISC
/* Faster version when locking is not necessary.  */
__STDIO_INLINE int
fgetc_unlocked (FILE *__fp)
{
  return __getc_unlocked_body (__fp);
}
# endif /* misc */
# 61 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


# ifdef __USE_POSIX
/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
getc_unlocked (FILE *__fp)
{
  return __getc_unlocked_body (__fp);
}

/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
getchar_unlocked (void)
{
  return __getc_unlocked_body (stdin);
}
# endif	/* POSIX */
# 78 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


/* Write a character to stdout.  */
__STDIO_INLINE int
putchar (int __c)
{
  return putc (__c, stdout);
}


# ifdef __USE_MISC
/* Faster version when locking is not necessary.  */
__STDIO_INLINE int
fputc_unlocked (int __c, FILE *__stream)
{
  return __putc_unlocked_body (__c, __stream);
}
# endif /* misc */
# 96 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


# ifdef __USE_POSIX
/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
putc_unlocked (int __c, FILE *__stream)
{
  return __putc_unlocked_body (__c, __stream);
}

/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
putchar_unlocked (int __c)
{
  return __putc_unlocked_body (__c, stdout);
}
# endif	/* POSIX */
# 113 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


# ifdef	__USE_GNU
/* Like `getdelim', but reads up to a newline.  */
__STDIO_INLINE __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}
# endif /* GNU */
# 123 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


# ifdef __USE_MISC
/* Faster versions when locking is not required.  */
__STDIO_INLINE int
__NTH (feof_unlocked (FILE *__stream))
{
  return __feof_unlocked_body (__stream);
}

/* Faster versions when locking is not required.  */
__STDIO_INLINE int
__NTH (ferror_unlocked (FILE *__stream))
{
  return __ferror_unlocked_body (__stream);
}
# endif /* misc */
# 140 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4

#endif /* Use extern inlines.  */
# 142 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC && defined __GNUC__ && defined __OPTIMIZE__ \
    && !defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 146 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4
/* Perform some simple optimizations.  */
# define fread_unlocked(ptr, size, n, stream) \
  (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n)    \
		   && (size_t) (size) * (size_t) (n) <= 8		      \
		   && (size_t) (size) != 0)				      \
		  ? ({ char *__ptr = (char *) (ptr);			      \
		       FILE *__stream = (stream);			      \
		       size_t __cnt;					      \
		       for (__cnt = (size_t) (size) * (size_t) (n);	      \
			    __cnt > 0; --__cnt)				      \
			 {						      \
			   int __c = getc_unlocked (__stream);		      \
			   if (__c == EOF)				      \
			     break;					      \
			   *__ptr++ = __c;				      \
			 }						      \
		       ((size_t) (size) * (size_t) (n) - __cnt)		      \
			/ (size_t) (size); })				      \
		  : (((__builtin_constant_p (size) && (size_t) (size) == 0)   \
		      || (__builtin_constant_p (n) && (size_t) (n) == 0))     \
			/* Evaluate all parameters once.  */		      \
		     ? ((void) (ptr), (void) (stream), (void) (size),	      \
			(void) (n), (size_t) 0)				      \
		     : fread_unlocked (ptr, size, n, stream))))

# define fwrite_unlocked(ptr, size, n, stream) \
  (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n)    \
		   && (size_t) (size) * (size_t) (n) <= 8		      \
		   && (size_t) (size) != 0)				      \
		  ? ({ const char *__ptr = (const char *) (ptr);	      \
		       FILE *__stream = (stream);			      \
		       size_t __cnt;					      \
		       for (__cnt = (size_t) (size) * (size_t) (n);	      \
			    __cnt > 0; --__cnt)				      \
			 if (putc_unlocked (*__ptr++, __stream) == EOF)	      \
			   break;					      \
		       ((size_t) (size) * (size_t) (n) - __cnt)		      \
			/ (size_t) (size); })				      \
		  : (((__builtin_constant_p (size) && (size_t) (size) == 0)   \
		      || (__builtin_constant_p (n) && (size_t) (n) == 0))     \
			/* Evaluate all parameters once.  */		      \
		     ? ((void) (ptr), (void) (stream), (void) (size),	      \
			(void) (n), (size_t) 0)				      \
		     : fwrite_unlocked (ptr, size, n, stream))))
#endif
# 191 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4

/* Define helper macro.  */
#undef __STDIO_INLINE

#endif /* bits/stdio.h.  */
# 196 "/usr/include/aarch64-linux-gnu/bits/stdio.h" 3 4
# 865 "/usr/include/stdio.h" 2 3 4
#endif
# 866 "/usr/include/stdio.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 867 "/usr/include/stdio.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio2.h>
#endif /* expanded by -frewrite-includes */
# 867 "/usr/include/stdio.h" 3 4
# 868 "/usr/include/stdio.h" 3 4
#endif
# 869 "/usr/include/stdio.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 870 "/usr/include/stdio.h" 3 4
# 871 "/usr/include/stdio.h" 3 4
#endif
# 872 "/usr/include/stdio.h" 3 4

__END_DECLS

#endif /* <stdio.h> included.  */
# 876 "/usr/include/stdio.h" 3 4
# 3 "colour_convert_int.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 3 "colour_convert_int.c"
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */

#ifndef	_STDLIB_H

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 40 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X; the symbols in Annex F
   still require that macro in C2X.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 51 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 53 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 55 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_BFP_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 57 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#else
# 59 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#endif
# 61 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 70 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 72 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_FUNCS_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 74 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#else
# 76 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#endif
# 78 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 83 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 85 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 87 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 26 "/usr/include/stdlib.h" 2 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 31 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 13 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 17 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define miscellaneous pieces when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 19 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __STDDEF_H
#endif
# 21 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 28 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_ptrdiff_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_PTRDIFF_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 31 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define ptrdiff_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 33 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _PTRDIFF_T
#endif
# 35 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 37 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 39 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_size_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 41 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_SIZE_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define size_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 44 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _SIZE_T
#endif
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 48 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define rsize_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _RSIZE_T
#endif
# 60 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 62 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 63 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wchar_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 65 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || (defined(_MSC_VER) && !_NATIVE_WCHAR_T_DEFINED)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 66 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wchar_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WCHAR_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 68 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 69 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 71 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T_DEFINED
#endif
# 73 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 74 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 76 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 77 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 79 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_NULL)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 81 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef NULL
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL __null
#  else
# 86 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 88 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#else
# 89 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 91 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 96 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 97 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 99 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 103 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef typeof(nullptr) nullptr_t;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L */
# 105 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc) && defined(__STDC_VERSION__) &&              \
    __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 108 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define unreachable() __builtin_unreachable()
#endif /* defined(__need_STDDEF_H_misc) && >= C23 */
# 110 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 112 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ||              \
    (defined(__cplusplus) && __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 115 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 116 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 119 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wint_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WINT_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 125 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WINT_T
#endif
# 128 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 130 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 132 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#endif
# 134 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 32 "/usr/include/stdlib.h" 2 3 4

__BEGIN_DECLS

#define	_STDLIB_H	1

#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 38 "/usr/include/stdlib.h" 3 4
/* XPG requires a few symbols from <sys/wait.h> being defined.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitflags.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if 0 /* disabled by -frewrite-includes */
#if !defined _SYS_WAIT_H && !defined _STDLIB_H
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 20 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4
# error "Never include <bits/waitflags.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4


/* Bits in the third argument to `waitpid'.  */
#define	WNOHANG		1	/* Don't block waiting.  */
#define	WUNTRACED	2	/* Report status of stopped children.  */

/* Bits in the fourth argument to `waitid'.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 30 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4
# define WSTOPPED	2	/* Report stopped child (same as WUNTRACED). */
# define WEXITED	4	/* Report dead child.  */
# define WCONTINUED	8	/* Report continued child.  */
# define WNOWAIT	0x01000000 /* Don't reap, just poll status.  */
#endif
# 35 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4

#define __WNOTHREAD     0x20000000 /* Don't wait on children of other threads
				      in this group */
#define __WALL		0x40000000 /* Wait for any child.  */
#define __WCLONE	0x80000000 /* Wait for cloned process.  */

/* The following values are used by the `waitid' function.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 43 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4
# ifndef __ENUM_IDTYPE_T
# define __ENUM_IDTYPE_T 1

/* The Linux kernel defines these bare, rather than an enum,
   which causes a conflict if the include order is reversed. */
# undef P_ALL
# undef P_PID
# undef P_PGID

typedef enum
{
  P_ALL,		/* Wait for any child.  */
  P_PID,		/* Wait for specified process.  */
  P_PGID		/* Wait for members of process group.  */
} idtype_t;
# endif
# 59 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4
#endif
# 60 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 3 4
# 40 "/usr/include/stdlib.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitstatus.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if 0 /* disabled by -frewrite-includes */
#if !defined _SYS_WAIT_H && !defined _STDLIB_H
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 20 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 3 4
# error "Never include <bits/waitstatus.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 3 4


/* Everything extant so far uses these same bits.  */


/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */
#define	__WEXITSTATUS(status)	(((status) & 0xff00) >> 8)

/* If WIFSIGNALED(STATUS), the terminating signal.  */
#define	__WTERMSIG(status)	((status) & 0x7f)

/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */
#define	__WSTOPSIG(status)	__WEXITSTATUS(status)

/* Nonzero if STATUS indicates normal termination.  */
#define	__WIFEXITED(status)	(__WTERMSIG(status) == 0)

/* Nonzero if STATUS indicates termination by a signal.  */
#define __WIFSIGNALED(status) \
  (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)

/* Nonzero if STATUS indicates the child is stopped.  */
#define	__WIFSTOPPED(status)	(((status) & 0xff) == 0x7f)

/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */
#ifdef WCONTINUED
# define __WIFCONTINUED(status)	((status) == __W_CONTINUED)
#endif
# 51 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 3 4

/* Nonzero if STATUS indicates the child dumped core.  */
#define	__WCOREDUMP(status)	((status) & __WCOREFLAG)

/* Macros for constructing status values.  */
#define	__W_EXITCODE(ret, sig)	((ret) << 8 | (sig))
#define	__W_STOPCODE(sig)	((sig) << 8 | 0x7f)
#define __W_CONTINUED		0xffff
#define	__WCOREFLAG		0x80
# 41 "/usr/include/stdlib.h" 2 3 4

/* Define the macros <sys/wait.h> also would define this way.  */
# define WEXITSTATUS(status)	__WEXITSTATUS (status)
# define WTERMSIG(status)	__WTERMSIG (status)
# define WSTOPSIG(status)	__WSTOPSIG (status)
# define WIFEXITED(status)	__WIFEXITED (status)
# define WIFSIGNALED(status)	__WIFSIGNALED (status)
# define WIFSTOPPED(status)	__WIFSTOPPED (status)
# ifdef __WIFCONTINUED
#  define WIFCONTINUED(status)	__WIFCONTINUED (status)
# endif
# 52 "/usr/include/stdlib.h" 3 4
#endif	/* X/Open or XPG7 and <sys/wait.h> not included.  */
# 53 "/usr/include/stdlib.h" 3 4

/* _FloatN API tests for enablement.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/floatn.h>
#endif /* expanded by -frewrite-includes */
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on ldbl-128 platforms.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_FLOATN_H
#define _BITS_FLOATN_H

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/long-double.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-128 version.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
#define __LONG_DOUBLE_USES_FLOAT128 0
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the IEEE 754 binary128 format, and this
   glibc includes corresponding *f128 interfaces for it.  */
#ifndef __NO_LONG_DOUBLE_MATH
# define __HAVE_FLOAT128 1
#else
# 31 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
/* glibc does not support _Float128 for platforms where long double is
   normally binary128 when building with long double as binary64.
   GCC's default for supported scalar modes does not support it either
   in that case.  */
# define __HAVE_FLOAT128 0
#endif
# 37 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

/* Defined to 1 if __HAVE_FLOAT128 is 1 and the type is ABI-distinct
   from the default float, double and long double types in this glibc.  */
#define __HAVE_DISTINCT_FLOAT128 0

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for _Float64x, and this
   glibc includes corresponding *f64x interfaces for it.  */
#define __HAVE_FLOAT64X __HAVE_FLOAT128

/* Defined to 1 if __HAVE_FLOAT64X is 1 and _Float64x has the format
   of long double.  Otherwise, if __HAVE_FLOAT64X is 1, _Float64x has
   the format of _Float128, which must be different from that of long
   double.  */
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128

#ifndef __ASSEMBLER__

/* Defined to concatenate the literal suffix to be used with _Float128
   types, if __HAVE_FLOAT128 is 1. */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 58 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 59 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
/* The literal suffix f128 exists only since GCC 7.0.  */
#   define __f128(x) x##l
#  else
# 62 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#   define __f128(x) x##f128
#  endif
# 64 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# endif
# 65 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

/* Defined to a complex binary128 type if __HAVE_FLOAT128 is 1.  */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 68 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 69 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#   define __CFLOAT128 _Complex long double
#  else
# 71 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#   define __CFLOAT128 _Complex _Float128
#  endif
# 73 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# endif
# 74 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

/* The remaining of this file provides support for older compilers.  */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 77 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

/* The type _Float128 exists only since GCC 7.0.  */
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 80 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
typedef long double _Float128;
#  endif
# 82 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

/* Various built-in functions do not exist before GCC 7.0.  */
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 85 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
#   define __builtin_huge_valf128() (__builtin_huge_vall ())
#   define __builtin_inff128() (__builtin_infl ())
#   define __builtin_nanf128(x) (__builtin_nanl (x))
#   define __builtin_nansf128(x) (__builtin_nansl (x))
#  endif
# 90 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

# endif
# 92 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

#endif /* !__ASSEMBLER__.  */
# 94 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/floatn-common.h>
#endif /* expanded by -frewrite-includes */
# 95 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 1 3 4
/* Macros to control TS 18661-3 glibc features where the same
   definitions are appropriate for all platforms.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_FLOATN_COMMON_H
#define _BITS_FLOATN_COMMON_H

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/long-double.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-128 version.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
#define __LONG_DOUBLE_USES_FLOAT128 0
# 25 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 2 3 4

/* This header should be included at the bottom of each bits/floatn.h.
   It defines the following macros for each _FloatN and _FloatNx type,
   where the same definitions, or definitions based only on the macros
   in bits/floatn.h, are appropriate for all glibc configurations.  */

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for this type, and this
   glibc includes corresponding *fN or *fNx interfaces for it.  */
#define __HAVE_FLOAT16 0
#define __HAVE_FLOAT32 1
#define __HAVE_FLOAT64 1
#define __HAVE_FLOAT32X 1
#define __HAVE_FLOAT128X 0

/* Defined to 1 if the corresponding __HAVE_<type> macro is 1 and the
   type is the first with its format in the sequence of (the default
   choices for) float, double, long double, _Float16, _Float32,
   _Float64, _Float128, _Float32x, _Float64x, _Float128x for this
   glibc; that is, if functions present once per floating-point format
   rather than once per type are present for this type.

   All configurations supported by glibc have _Float32 the same format
   as float, _Float64 and _Float32x the same format as double, the
   _Float64x the same format as either long double or _Float128.  No
   configurations support _Float128x or, as of GCC 7, have compiler
   support for a type meeting the requirements for _Float128x.  */
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __HAVE_DISTINCT_FLOAT32 0
#define __HAVE_DISTINCT_FLOAT64 0
#define __HAVE_DISTINCT_FLOAT32X 0
#define __HAVE_DISTINCT_FLOAT64X 0
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X

/* Defined to 1 if the corresponding _FloatN type is not binary compatible
   with the corresponding ISO C type in the current compilation unit as
   opposed to __HAVE_DISTINCT_FLOATN, which indicates the default types built
   in glibc.  */
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128	\
				     && __LDBL_MANT_DIG__ != 113)

/* Defined to 1 if any _FloatN or _FloatNx types that are not
   ABI-distinct are however distinct types at the C language level (so
   for the purposes of __builtin_types_compatible_p and _Generic).  */
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (7, 0) && !defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 70 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# define __HAVE_FLOATN_NOT_TYPEDEF 1
#else
# 72 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# define __HAVE_FLOATN_NOT_TYPEDEF 0
#endif
# 74 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#ifndef __ASSEMBLER__

/* Defined to concatenate the literal suffix to be used with _FloatN
   or _FloatNx types, if __HAVE_<type> is 1.  The corresponding
   literal suffixes exist since GCC 7, for C only.  */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT16
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 81 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 82 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
/* No corresponding suffix available for this type.  */
#   define __f16(x) ((_Float16) x##f)
#  else
# 85 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f16(x) x##f16
#  endif
# 87 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 88 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 90 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 91 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32(x) x##f
#  else
# 93 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32(x) x##f32
#  endif
# 95 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 96 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 98 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 99 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   ifdef __NO_LONG_DOUBLE_MATH
#    define __f64(x) x##l
#   else
# 102 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __f64(x) x
#   endif
# 104 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 105 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f64(x) x##f64
#  endif
# 107 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 108 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 110 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 111 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32x(x) x
#  else
# 113 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32x(x) x##f32x
#  endif
# 115 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 116 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 118 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 119 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#   if __HAVE_FLOAT64X_LONG_DOUBLE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 120 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __f64x(x) x##l
#   else
# 122 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __f64x(x) __f128 (x)
#   endif
# 124 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 125 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f64x(x) x##f64x
#  endif
# 127 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 128 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 130 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 131 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   error "_Float128X supported but no constant suffix"
#  else
# 133 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f128x(x) x##f128x
#  endif
# 135 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 136 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

/* Defined to a complex type if __HAVE_<type> is 1.  */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT16
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 139 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 140 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef _Complex float __cfloat16 __attribute__ ((__mode__ (__HC__)));
#   define __CFLOAT16 __cfloat16
#  else
# 143 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT16 _Complex _Float16
#  endif
# 145 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 146 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 148 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 149 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32 _Complex float
#  else
# 151 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32 _Complex _Float32
#  endif
# 153 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 154 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 156 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 157 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   ifdef __NO_LONG_DOUBLE_MATH
#    define __CFLOAT64 _Complex long double
#   else
# 160 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __CFLOAT64 _Complex double
#   endif
# 162 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 163 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT64 _Complex _Float64
#  endif
# 165 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 166 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 168 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 169 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32X _Complex double
#  else
# 171 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32X _Complex _Float32x
#  endif
# 173 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 174 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 176 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 177 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#   if __HAVE_FLOAT64X_LONG_DOUBLE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 178 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __CFLOAT64X _Complex long double
#   else
# 180 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __CFLOAT64X __CFLOAT128
#   endif
# 182 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 183 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT64X _Complex _Float64x
#  endif
# 185 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 186 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 188 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 189 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   error "_Float128X supported but no complex type"
#  else
# 191 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT128X _Complex _Float128x
#  endif
# 193 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 194 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

/* The remaining of this file provides support for older compilers.  */
#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT16
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 197 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 199 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float16 __attribute__ ((__mode__ (__HF__)));
#  endif
# 201 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 203 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __builtin_huge_valf16() ((_Float16) __builtin_huge_val ())
#   define __builtin_inff16() ((_Float16) __builtin_inf ())
#   define __builtin_nanf16(x) ((_Float16) __builtin_nan (x))
#   define __builtin_nansf16(x) ((_Float16) __builtin_nans (x))
#  endif
# 208 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 210 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 212 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 214 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
#  endif
# 216 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 218 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __builtin_huge_valf32() (__builtin_huge_valf ())
#   define __builtin_inff32() (__builtin_inff ())
#   define __builtin_nanf32(x) (__builtin_nanf (x))
#   define __builtin_nansf32(x) (__builtin_nansf (x))
#  endif
# 223 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 225 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 227 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

/* If double, long double and _Float64 all have the same set of
   values, TS 18661-3 requires the usual arithmetic conversions on
   long double and _Float64 to produce _Float64.  For this to be the
   case when building with a compiler without a distinct _Float64
   type, _Float64 must be a typedef for long double, not for
   double.  */

#  ifdef __NO_LONG_DOUBLE_MATH

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 238 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64;
#   endif
# 240 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 242 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __builtin_huge_valf64() (__builtin_huge_vall ())
#    define __builtin_inff64() (__builtin_infl ())
#    define __builtin_nanf64(x) (__builtin_nanl (x))
#    define __builtin_nansf64(x) (__builtin_nansl (x))
#   endif
# 247 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#  else
# 249 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 251 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
#   endif
# 253 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 255 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __builtin_huge_valf64() (__builtin_huge_val ())
#    define __builtin_inff64() (__builtin_inf ())
#    define __builtin_nanf64(x) (__builtin_nan (x))
#    define __builtin_nansf64(x) (__builtin_nans (x))
#   endif
# 260 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#  endif
# 262 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 264 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 266 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 268 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
#  endif
# 270 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 272 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __builtin_huge_valf32x() (__builtin_huge_val ())
#   define __builtin_inff32x() (__builtin_inf ())
#   define __builtin_nanf32x(x) (__builtin_nan (x))
#   define __builtin_nansf32x(x) (__builtin_nans (x))
#  endif
# 277 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 279 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64X
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 281 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if __HAVE_FLOAT64X_LONG_DOUBLE
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 283 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 285 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
#   endif
# 287 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 289 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __builtin_huge_valf64x() (__builtin_huge_vall ())
#    define __builtin_inff64x() (__builtin_infl ())
#    define __builtin_nanf64x(x) (__builtin_nanl (x))
#    define __builtin_nansf64x(x) (__builtin_nansl (x))
#   endif
# 294 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#  else
# 296 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 298 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef _Float128 _Float64x;
#   endif
# 300 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#   if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 302 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#    define __builtin_huge_valf64x() (__builtin_huge_valf128 ())
#    define __builtin_inff64x() (__builtin_inff128 ())
#    define __builtin_nanf64x(x) (__builtin_nanf128 (x))
#    define __builtin_nansf64x(x) (__builtin_nansf128 (x))
#   endif
# 307 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#  endif
# 309 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 311 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 313 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 315 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   error "_Float128x supported but no type"
#  endif
# 317 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#  if !__GNUC_PREREQ (7, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 319 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
#   define __builtin_huge_valf128x() ((_Float128x) __builtin_huge_val ())
#   define __builtin_inff128x() ((_Float128x) __builtin_inf ())
#   define __builtin_nanf128x(x) ((_Float128x) __builtin_nan (x))
#   define __builtin_nansf128x(x) ((_Float128x) __builtin_nans (x))
#  endif
# 324 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 326 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#endif /* !__ASSEMBLER__.  */
# 328 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4

#endif /* _BITS_FLOATN_COMMON_H */
# 330 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# 96 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4

#endif /* _BITS_FLOATN_H */
# 98 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 56 "/usr/include/stdlib.h" 2 3 4

/* Returned by `div'.  */
typedef struct
  {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */
#ifndef __ldiv_t_defined
typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } ldiv_t;
# define __ldiv_t_defined	1
#endif
# 73 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_ISOC99 && !defined __lldiv_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 75 "/usr/include/stdlib.h" 3 4
/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
  } lldiv_t;
# define __lldiv_t_defined	1
#endif
# 83 "/usr/include/stdlib.h" 3 4


/* The largest number rand will return (same as INT_MAX).  */
#define	RAND_MAX	2147483647


/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */
#define	EXIT_FAILURE	1	/* Failing exit status.  */
#define	EXIT_SUCCESS	0	/* Successful exit status.  */


/* Maximum length of a multibyte character in the current locale.  */
#define	MB_CUR_MAX	(__ctype_get_mb_cur_max ())
extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;


/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;

#ifdef __USE_ISOC99
/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
#endif
# 115 "/usr/include/stdlib.h" 3 4

/* Convert a string to a floating-point number.  */
extern double strtod (const char *__restrict __nptr,
		      char **__restrict __endptr)
     __THROW __nonnull ((1));

#ifdef	__USE_ISOC99
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *__restrict __nptr,
		     char **__restrict __endptr) __THROW __nonnull ((1));

extern long double strtold (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 130 "/usr/include/stdlib.h" 3 4

/* Likewise for '_FloatN' and '_FloatNx'.  */

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 134 "/usr/include/stdlib.h" 3 4
extern _Float16 strtof16 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 138 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 144 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 146 "/usr/include/stdlib.h" 3 4
extern _Float64 strtof64 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 150 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 152 "/usr/include/stdlib.h" 3 4
extern _Float128 strtof128 (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 156 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 158 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 162 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 164 "/usr/include/stdlib.h" 3 4
extern _Float64x strtof64x (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 168 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 170 "/usr/include/stdlib.h" 3 4
extern _Float128x strtof128x (const char *__restrict __nptr,
			      char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 174 "/usr/include/stdlib.h" 3 4

/* Convert a string to a long integer.  */
extern long int strtol (const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));

#ifdef __USE_MISC
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoq (const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
#endif /* Use misc.  */
# 196 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC99
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
#endif /* ISO C99 or use MISC.  */
# 209 "/usr/include/stdlib.h" 3 4

/* Convert a floating-point number to a string.  */
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_BFP_EXT_C2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 212 "/usr/include/stdlib.h" 3 4
extern int strfromd (char *__dest, size_t __size, const char *__format,
		     double __f)
     __THROW __nonnull ((3));

extern int strfromf (char *__dest, size_t __size, const char *__format,
		     float __f)
     __THROW __nonnull ((3));

extern int strfroml (char *__dest, size_t __size, const char *__format,
		     long double __f)
     __THROW __nonnull ((3));
#endif
# 224 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 226 "/usr/include/stdlib.h" 3 4
extern int strfromf16 (char *__dest, size_t __size, const char * __format,
		       _Float16 __f)
     __THROW __nonnull ((3));
#endif
# 230 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
		       _Float32 __f)
     __THROW __nonnull ((3));
#endif
# 236 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 238 "/usr/include/stdlib.h" 3 4
extern int strfromf64 (char *__dest, size_t __size, const char * __format,
		       _Float64 __f)
     __THROW __nonnull ((3));
#endif
# 242 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 244 "/usr/include/stdlib.h" 3 4
extern int strfromf128 (char *__dest, size_t __size, const char * __format,
			_Float128 __f)
     __THROW __nonnull ((3));
#endif
# 248 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 250 "/usr/include/stdlib.h" 3 4
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
			_Float32x __f)
     __THROW __nonnull ((3));
#endif
# 254 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 256 "/usr/include/stdlib.h" 3 4
extern int strfromf64x (char *__dest, size_t __size, const char * __format,
			_Float64x __f)
     __THROW __nonnull ((3));
#endif
# 260 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 262 "/usr/include/stdlib.h" 3 4
extern int strfromf128x (char *__dest, size_t __size, const char * __format,
			 _Float128x __f)
     __THROW __nonnull ((3));
#endif
# 266 "/usr/include/stdlib.h" 3 4


#ifdef __USE_GNU
/* Parallel versions of the functions above which take the locale to
   use as an additional parameter.  These are GNU extensions inspired
   by the POSIX.1-2008 extended locale API.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/locale_t.h>
#endif /* expanded by -frewrite-includes */
# 272 "/usr/include/stdlib.h" 3 4
# 273 "/usr/include/stdlib.h" 3 4

extern long int strtol_l (const char *__restrict __nptr,
			  char **__restrict __endptr, int __base,
			  locale_t __loc) __THROW __nonnull ((1, 4));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
				    char **__restrict __endptr,
				    int __base, locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
				char **__restrict __endptr, int __base,
				locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base, locale_t __loc)
     __THROW __nonnull ((1, 4));

extern double strtod_l (const char *__restrict __nptr,
			char **__restrict __endptr, locale_t __loc)
     __THROW __nonnull ((1, 3));

extern float strtof_l (const char *__restrict __nptr,
		       char **__restrict __endptr, locale_t __loc)
     __THROW __nonnull ((1, 3));

extern long double strtold_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT16
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 309 "/usr/include/stdlib.h" 3 4
extern _Float16 strtof16_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 314 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 321 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 323 "/usr/include/stdlib.h" 3 4
extern _Float64 strtof64_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 328 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 330 "/usr/include/stdlib.h" 3 4
extern _Float128 strtof128_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 335 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT32X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 337 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 342 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT64X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 344 "/usr/include/stdlib.h" 3 4
extern _Float64x strtof64x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 349 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
# if __HAVE_FLOAT128X
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 351 "/usr/include/stdlib.h" 3 4
extern _Float128x strtof128x_l (const char *__restrict __nptr,
				char **__restrict __endptr,
				locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 356 "/usr/include/stdlib.h" 3 4
#endif /* GNU */
# 357 "/usr/include/stdlib.h" 3 4


#ifdef __USE_EXTERN_INLINES
__extern_inline int
__NTH (atoi (const char *__nptr))
{
  return (int) strtol (__nptr, (char **) NULL, 10);
}
__extern_inline long int
__NTH (atol (const char *__nptr))
{
  return strtol (__nptr, (char **) NULL, 10);
}

# ifdef __USE_ISOC99
__extension__ __extern_inline long long int
__NTH (atoll (const char *__nptr))
{
  return strtoll (__nptr, (char **) NULL, 10);
}
# endif
# 378 "/usr/include/stdlib.h" 3 4
#endif /* Optimizing and Inlining.  */
# 379 "/usr/include/stdlib.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 382 "/usr/include/stdlib.h" 3 4
/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) __THROW __wur;

/* Read a number from a string S in base 64 as above.  */
extern long int a64l (const char *__s)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;

#endif	/* Use misc || extended X/Open.  */
# 392 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 394 "/usr/include/stdlib.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <sys/types.h>	/* we need int32_t... */
#endif /* expanded by -frewrite-includes */
# 394 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */

#ifndef	_SYS_TYPES_H
#define	_SYS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 26 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

__BEGIN_DECLS

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 29 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 30 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_MISC
# ifndef __u_char_defined
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#  define __u_char_defined
# endif
# 42 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __loff_t loff_t;
#endif
# 44 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __ino_t ino_t;
# else
# 49 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __ino64_t ino_t;
# endif
# 51 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# define __ino_t_defined
#endif
# 53 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_LARGEFILE64 && !defined __ino64_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 54 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __ino64_t ino64_t;
# define __ino64_t_defined
#endif
# 57 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __dev_t_defined
typedef __dev_t dev_t;
# define __dev_t_defined
#endif
# 62 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __gid_t_defined
typedef __gid_t gid_t;
# define __gid_t_defined
#endif
# 67 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __mode_t_defined
typedef __mode_t mode_t;
# define __mode_t_defined
#endif
# 72 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __nlink_t_defined
typedef __nlink_t nlink_t;
# define __nlink_t_defined
#endif
# 77 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __uid_t_defined
typedef __uid_t uid_t;
# define __uid_t_defined
#endif
# 82 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 87 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __off64_t off_t;
# endif
# 89 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# define __off_t_defined
#endif
# 91 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_LARGEFILE64 && !defined __off64_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 92 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __off64_t off64_t;
# define __off64_t_defined
#endif
# 95 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __pid_t_defined
typedef __pid_t pid_t;
# define __pid_t_defined
#endif
# 100 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) \
    && !defined __id_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 103 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# define __id_t_defined
#endif
# 106 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
#endif
# 111 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_MISC
# ifndef __daddr_t_defined
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#  define __daddr_t_defined
# endif
# 118 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#endif
# 119 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_MISC || defined __USE_XOPEN) && !defined __key_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 121 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __key_t key_t;
# define __key_t_defined
#endif
# 124 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 126 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/clock_t.h>
#endif /* expanded by -frewrite-includes */
# 126 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 1 3 4
#ifndef __clock_t_defined
#define __clock_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 3 4

/* Returned by `clock'.  */
typedef __clock_t clock_t;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 3 4
# 127 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
#endif
# 128 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/clockid_t.h>
#endif /* expanded by -frewrite-includes */
# 128 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 1 3 4
#ifndef __clockid_t_defined
#define __clockid_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 3 4

/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 3 4
# 129 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/time_t.h>
#endif /* expanded by -frewrite-includes */
# 129 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 1 3 4
#ifndef __time_t_defined
#define __time_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4

/* Returned by `time'.  */
typedef __time_t time_t;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
# 130 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/timer_t.h>
#endif /* expanded by -frewrite-includes */
# 130 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 1 3 4
#ifndef __timer_t_defined
#define __timer_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 3 4

/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 3 4
# 131 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_XOPEN
# ifndef __useconds_t_defined
typedef __useconds_t useconds_t;
#  define __useconds_t_defined
# endif
# 137 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
#  define __suseconds_t_defined
# endif
# 141 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#endif
# 142 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 144 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 13 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 17 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define miscellaneous pieces when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 19 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __STDDEF_H
#endif
# 21 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 28 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_ptrdiff_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_PTRDIFF_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 31 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define ptrdiff_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 33 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _PTRDIFF_T
#endif
# 35 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 37 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 39 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_size_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 41 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_SIZE_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define size_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 44 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _SIZE_T
#endif
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 48 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define rsize_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _RSIZE_T
#endif
# 60 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 62 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 63 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wchar_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 65 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || (defined(_MSC_VER) && !_NATIVE_WCHAR_T_DEFINED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 66 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wchar_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WCHAR_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 69 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 71 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T_DEFINED
#endif
# 73 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 74 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 76 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 77 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 79 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_NULL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 81 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef NULL
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL __null
#  else
# 86 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 88 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#else
# 89 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 91 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 96 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 97 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 99 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 103 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef typeof(nullptr) nullptr_t;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L */
# 105 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc) && defined(__STDC_VERSION__) &&              \
    __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 108 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define unreachable() __builtin_unreachable()
#endif /* defined(__need_STDDEF_H_misc) && >= C23 */
# 110 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 112 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ||              \
    (defined(__cplusplus) && __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 115 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 116 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 119 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wint_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WINT_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 125 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WINT_T
#endif
# 128 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 130 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 132 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#endif
# 134 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 145 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_MISC
/* Old compatibility names for C types.  */
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#endif
# 152 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

/* These size-specific names are used by some of the inet code.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/stdint-intn.h>
#endif /* expanded by -frewrite-includes */
# 155 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 1 3 4
/* Define intN_t types.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDINT_INTN_H
#define _BITS_STDINT_INTN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;

#endif /* bits/stdint-intn.h */
# 30 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4
# 156 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

/* These were defined by ISO C without the first `_'.  */
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (2, 7)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 164 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef int register_t __attribute__ ((__mode__ (__word__)));
#else
# 166 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef int register_t;
#endif
# 168 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

/* Some code from BIND tests this macro to see if the types above are
   defined.  */
#define __BIT_TYPES_DEFINED__	1


#ifdef	__USE_MISC
/* In BSD <sys/types.h> is expected to define BYTE_ORDER.  */
#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 176 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_ENDIAN_H
#define	_ENDIAN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/endian.h" 3 4
# 22 "/usr/include/endian.h" 3 4

/* Get the definitions of __*_ENDIAN, __BYTE_ORDER, and __FLOAT_WORD_ORDER.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/endian.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endian.h" 1 3 4
/* Endian macros for string.h functions
   Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_ENDIAN_H
#define _BITS_ENDIAN_H 1

/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */

#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321
#define	__PDP_ENDIAN	3412

/* This file defines `__BYTE_ORDER' for the particular machine.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/endianness.h>
#endif /* expanded by -frewrite-includes */
# 35 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 1 3 4
#ifndef _BITS_ENDIANNESS_H
#define _BITS_ENDIANNESS_H 1

#ifndef _BITS_ENDIAN_H
# error "Never use <bits/endianness.h> directly; include <endian.h> instead."
#endif
# 7 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 3 4

/* AArch64 has selectable endianness.  */
#ifdef __AARCH64EB__
# define __BYTE_ORDER __BIG_ENDIAN
#else
# 12 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 3 4
# define __BYTE_ORDER __LITTLE_ENDIAN
#endif
# 14 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 3 4

#endif /* bits/endianness.h */
# 16 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/endian.h" 2 3 4

/* Some machines may need to use a different endianness for floating point
   values.  */
#ifndef __FLOAT_WORD_ORDER
# define __FLOAT_WORD_ORDER __BYTE_ORDER
#endif
# 42 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __BYTE_ORDER == __LITTLE_ENDIAN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 44 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# define __LONG_LONG_PAIR(HI, LO) LO, HI
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __BYTE_ORDER == __BIG_ENDIAN
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 46 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# define __LONG_LONG_PAIR(HI, LO) HI, LO
#endif
# 48 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4

#endif /* bits/endian.h */
# 50 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 25 "/usr/include/endian.h" 2 3 4

#ifdef __USE_MISC
# define LITTLE_ENDIAN	__LITTLE_ENDIAN
# define BIG_ENDIAN	__BIG_ENDIAN
# define PDP_ENDIAN	__PDP_ENDIAN
# define BYTE_ORDER	__BYTE_ORDER
#endif
# 32 "/usr/include/endian.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC && !defined __ASSEMBLER__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 34 "/usr/include/endian.h" 3 4
/* Conversion interfaces.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/byteswap.h>
#endif /* expanded by -frewrite-includes */
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 1 3 4
/* Macros and inline functions to swap the order of bytes in integer values.
   Copyright (C) 1997-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if 0 /* disabled by -frewrite-includes */
#if !defined _BYTESWAP_H && !defined _NETINET_IN_H && !defined _ENDIAN_H
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 20 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
# error "Never use <bits/byteswap.h> directly; include <byteswap.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4

#ifndef _BITS_BYTESWAP_H
#define _BITS_BYTESWAP_H 1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4

/* Swap bytes in 16-bit value.  */
#define __bswap_constant_16(x)					\
  ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))

static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4, 8)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 37 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __builtin_bswap16 (__bsx);
#else
# 39 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __bswap_constant_16 (__bsx);
#endif
# 41 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
}

/* Swap bytes in 32-bit value.  */
#define __bswap_constant_32(x)					\
  ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8)	\
   | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))

static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 52 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __builtin_bswap32 (__bsx);
#else
# 54 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __bswap_constant_32 (__bsx);
#endif
# 56 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
}

/* Swap bytes in 64-bit value.  */
#define __bswap_constant_64(x)			\
  ((((x) & 0xff00000000000000ull) >> 56)	\
   | (((x) & 0x00ff000000000000ull) >> 40)	\
   | (((x) & 0x0000ff0000000000ull) >> 24)	\
   | (((x) & 0x000000ff00000000ull) >> 8)	\
   | (((x) & 0x00000000ff000000ull) << 8)	\
   | (((x) & 0x0000000000ff0000ull) << 24)	\
   | (((x) & 0x000000000000ff00ull) << 40)	\
   | (((x) & 0x00000000000000ffull) << 56))

__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
#if 0 /* disabled by -frewrite-includes */
#if __GNUC_PREREQ (4, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 73 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __builtin_bswap64 (__bsx);
#else
# 75 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
  return __bswap_constant_64 (__bsx);
#endif
# 77 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
}

#endif /* _BITS_BYTESWAP_H */
# 80 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
# 36 "/usr/include/endian.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/uintn-identity.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 1 3 4
/* Inline functions to return unsigned integer values unchanged.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if 0 /* disabled by -frewrite-includes */
#if !defined _NETINET_IN_H && !defined _ENDIAN_H
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 20 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4
# error "Never use <bits/uintn-identity.h> directly; include <netinet/in.h> or <endian.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4

#ifndef _BITS_UINTN_IDENTITY_H
#define _BITS_UINTN_IDENTITY_H 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4

/* These inline functions are to ensure the appropriate type
   conversions and associated diagnostics from macros that convert to
   a given endianness.  */

static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}

#endif /* _BITS_UINTN_IDENTITY_H.  */
# 51 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4
# 37 "/usr/include/endian.h" 2 3 4

#if 0 /* disabled by -frewrite-includes */
# if __BYTE_ORDER == __LITTLE_ENDIAN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 39 "/usr/include/endian.h" 3 4
#  define htobe16(x) __bswap_16 (x)
#  define htole16(x) __uint16_identity (x)
#  define be16toh(x) __bswap_16 (x)
#  define le16toh(x) __uint16_identity (x)

#  define htobe32(x) __bswap_32 (x)
#  define htole32(x) __uint32_identity (x)
#  define be32toh(x) __bswap_32 (x)
#  define le32toh(x) __uint32_identity (x)

#  define htobe64(x) __bswap_64 (x)
#  define htole64(x) __uint64_identity (x)
#  define be64toh(x) __bswap_64 (x)
#  define le64toh(x) __uint64_identity (x)

# else
# 55 "/usr/include/endian.h" 3 4
#  define htobe16(x) __uint16_identity (x)
#  define htole16(x) __bswap_16 (x)
#  define be16toh(x) __uint16_identity (x)
#  define le16toh(x) __bswap_16 (x)

#  define htobe32(x) __uint32_identity (x)
#  define htole32(x) __bswap_32 (x)
#  define be32toh(x) __uint32_identity (x)
#  define le32toh(x) __bswap_32 (x)

#  define htobe64(x) __uint64_identity (x)
#  define htole64(x) __bswap_64 (x)
#  define be64toh(x) __uint64_identity (x)
#  define le64toh(x) __bswap_64 (x)
# endif
# 70 "/usr/include/endian.h" 3 4
#endif
# 71 "/usr/include/endian.h" 3 4

#endif	/* endian.h */
# 73 "/usr/include/endian.h" 3 4
# 177 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

/* It also defines `fd_set' and the FD_* macros for `select'.  */
#if 0 /* expanded by -frewrite-includes */
# include <sys/select.h>
#endif /* expanded by -frewrite-includes */
# 179 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */

#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 25 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

/* Get definition of needed basic types.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 28 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

/* Get __FD_* definitions.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/select.h>
#endif /* expanded by -frewrite-includes */
# 30 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/select.h" 1 3 4
/* Copyright (C) 1997-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _SYS_SELECT_H
# error "Never use <bits/select.h> directly; include <sys/select.h> instead."
#endif
# 21 "/usr/include/aarch64-linux-gnu/bits/select.h" 3 4


/* We don't use `memset' because this would require a prototype and
   the array isn't too big.  */
#define __FD_ZERO(s) \
  do {									      \
    unsigned int __i;							      \
    fd_set *__arr = (s);						      \
    for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i)	      \
      __FDS_BITS (__arr)[__i] = 0;					      \
  } while (0)
#define __FD_SET(d, s) \
  ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define __FD_CLR(d, s) \
  ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define __FD_ISSET(d, s) \
  ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
# 31 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4

/* Get sigset_t.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/sigset_t.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 1 3 4
#ifndef __sigset_t_defined
#define __sigset_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__sigset_t.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigset_t.h" 1 3 4
#ifndef ____sigset_t_defined
#define ____sigset_t_defined

#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
typedef struct
{
  unsigned long int __val[_SIGSET_NWORDS];
} __sigset_t;

#endif
# 11 "/usr/include/aarch64-linux-gnu/bits/types/__sigset_t.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 2 3 4

/* A set of signals to be blocked, unblocked, or waited for.  */
typedef __sigset_t sigset_t;

#endif
# 10 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 3 4
# 34 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4

/* Get definition of timer specification structures.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/time_t.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 37 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/struct_timeval.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 1 3 4
#ifndef __timeval_defined
#define __timeval_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 3 4
# 5 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 3 4

/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
{
  __time_t tv_sec;		/* Seconds.  */
  __suseconds_t tv_usec;	/* Microseconds.  */
};
#endif
# 14 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 3 4
# 38 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4
#ifdef __USE_XOPEN2K
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/struct_timespec.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */
#ifndef _STRUCT_TIMESPEC
#define _STRUCT_TIMESPEC 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 5 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
# 6 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/endian.h>
#endif /* expanded by -frewrite-includes */
# 6 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
# 7 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4

/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
{
  __time_t tv_sec;		/* Seconds.  */
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64 \
  || (defined __SYSCALL_WORDSIZE && __SYSCALL_WORDSIZE == 64) \
  || __TIMESIZE == 32
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 16 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
  __syscall_slong_t tv_nsec;	/* Nanoseconds.  */
#else
# 18 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
#if 0 /* disabled by -frewrite-includes */
# if __BYTE_ORDER == __BIG_ENDIAN
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 19 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
  int: 32;           /* Padding.  */
  long int tv_nsec;  /* Nanoseconds.  */
# else
# 22 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
  long int tv_nsec;  /* Nanoseconds.  */
  int: 32;           /* Padding.  */
# endif
# 25 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
#endif
# 26 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
};

#endif
# 29 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
# 40 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4
#endif
# 41 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

#ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
# define __suseconds_t_defined
#endif
# 46 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4


/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */
#undef	__NFDBITS
/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */
#define __NFDBITS	(8 * (int) sizeof (__fd_mask))
#define	__FD_ELT(d)	((d) / __NFDBITS)
#define	__FD_MASK(d)	((__fd_mask) (1UL << ((d) % __NFDBITS)))

/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */
#ifdef __USE_XOPEN
    __fd_mask fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->fds_bits)
#else
# 67 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
    __fd_mask __fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->__fds_bits)
#endif
# 70 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
  } fd_set;

/* Maximum number of file descriptors in `fd_set'.  */
#define	FD_SETSIZE		__FD_SETSIZE

#ifdef __USE_MISC
/* Sometimes the fd_set member is assumed to have this type.  */
typedef __fd_mask fd_mask;

/* Number of bits per word of `fd_set' (some code assumes this is 32).  */
# define NFDBITS		__NFDBITS
#endif
# 82 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4


/* Access macros for `fd_set'.  */
#define	FD_SET(fd, fdsetp)	__FD_SET (fd, fdsetp)
#define	FD_CLR(fd, fdsetp)	__FD_CLR (fd, fdsetp)
#define	FD_ISSET(fd, fdsetp)	__FD_ISSET (fd, fdsetp)
#define	FD_ZERO(fdsetp)		__FD_ZERO (fdsetp)


__BEGIN_DECLS

/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);

#ifdef __USE_XOPEN2K
/* Same as above only that the TIMEOUT value is given with higher
   resolution and a sigmask which is been set temporarily.  This version
   should be used.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);
#endif
# 119 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4


/* Define some inlines helping to catch common problems.  */
#if 0 /* disabled by -frewrite-includes */
#if __USE_FORTIFY_LEVEL > 0 && defined __GNUC__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/select2.h>
#endif /* expanded by -frewrite-includes */
# 123 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 124 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
#endif
# 125 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

__END_DECLS

#endif /* sys/select.h */
# 129 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 180 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
#endif /* Use misc.  */
# 181 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_UNIX98 || defined __USE_XOPEN2K8) \
    && !defined __blksize_t_defined
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 185 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __blksize_t blksize_t;
# define __blksize_t_defined
#endif
# 188 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

/* Types from the Large File Support interface.  */
#ifndef __USE_FILE_OFFSET64
# ifndef __blkcnt_t_defined
typedef __blkcnt_t blkcnt_t;	 /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 195 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 199 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 203 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#else
# 204 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __blkcnt_t_defined
typedef __blkcnt64_t blkcnt_t;	   /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 208 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt64_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 212 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt64_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 216 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#endif
# 217 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

#ifdef __USE_LARGEFILE64
typedef __blkcnt64_t blkcnt64_t;     /* Type to count number of disk blocks. */
typedef __fsblkcnt64_t fsblkcnt64_t; /* Type to count file system blocks.  */
typedef __fsfilcnt64_t fsfilcnt64_t; /* Type to count file system inodes.  */
#endif
# 223 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4


/* Now add the thread types.  */
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_POSIX199506 || defined __USE_UNIX98
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 227 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/pthreadtypes.h>
#endif /* expanded by -frewrite-includes */
# 227 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Declaration of common pthread types for all architectures.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_PTHREADTYPES_COMMON_H
# define _BITS_PTHREADTYPES_COMMON_H	1

/* For internal mutex and condition variable definitions.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/thread-shared-types.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 1 3 4
/* Common threading primitives definitions for both POSIX and C11.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _THREAD_SHARED_TYPES_H
#define _THREAD_SHARED_TYPES_H 1

/* Arch-specific definitions.  Each architecture must define the following
   macros to define the expected sizes of pthread data types:

   __SIZEOF_PTHREAD_ATTR_T        - size of pthread_attr_t.
   __SIZEOF_PTHREAD_MUTEX_T       - size of pthread_mutex_t.
   __SIZEOF_PTHREAD_MUTEXATTR_T   - size of pthread_mutexattr_t.
   __SIZEOF_PTHREAD_COND_T        - size of pthread_cond_t.
   __SIZEOF_PTHREAD_CONDATTR_T    - size of pthread_condattr_t.
   __SIZEOF_PTHREAD_RWLOCK_T      - size of pthread_rwlock_t.
   __SIZEOF_PTHREAD_RWLOCKATTR_T  - size of pthread_rwlockattr_t.
   __SIZEOF_PTHREAD_BARRIER_T     - size of pthread_barrier_t.
   __SIZEOF_PTHREAD_BARRIERATTR_T - size of pthread_barrierattr_t.

   The additional macro defines any constraint for the lock alignment
   inside the thread structures:

   __LOCK_ALIGNMENT - for internal lock/futex usage.

   Same idea but for the once locking primitive:

   __ONCE_ALIGNMENT - for pthread_once_t/once_flag definition.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/pthreadtypes-arch.h>
#endif /* expanded by -frewrite-includes */
# 44 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
/* Copyright (C) 2002-2020 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_PTHREADTYPES_ARCH_H
#define _BITS_PTHREADTYPES_ARCH_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/endian.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 3 4

#ifdef __ILP32__
# define __SIZEOF_PTHREAD_ATTR_T        32
# define __SIZEOF_PTHREAD_MUTEX_T       32
# define __SIZEOF_PTHREAD_MUTEXATTR_T    4
# define __SIZEOF_PTHREAD_CONDATTR_T     4
# define __SIZEOF_PTHREAD_RWLOCK_T      48
# define __SIZEOF_PTHREAD_BARRIER_T     20
# define __SIZEOF_PTHREAD_BARRIERATTR_T  4
#else
# 33 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# define __SIZEOF_PTHREAD_ATTR_T        64
# define __SIZEOF_PTHREAD_MUTEX_T       48
# define __SIZEOF_PTHREAD_MUTEXATTR_T    8
# define __SIZEOF_PTHREAD_CONDATTR_T     8
# define __SIZEOF_PTHREAD_RWLOCK_T      56
# define __SIZEOF_PTHREAD_BARRIER_T     32
# define __SIZEOF_PTHREAD_BARRIERATTR_T  8
#endif
# 41 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
#define __SIZEOF_PTHREAD_COND_T         48
#define __SIZEOF_PTHREAD_RWLOCKATTR_T	8

#define __LOCK_ALIGNMENT
#define __ONCE_ALIGNMENT

#endif	/* bits/pthreadtypes.h */
# 48 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 45 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_mutex_t. */

typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;

/* Arch-specific mutex definitions.  A generic implementation is provided
   by sysdeps/nptl/bits/struct_mutex.h.  If required, an architecture
   can override it by defining:

   1. struct __pthread_mutex_s (used on both pthread_mutex_t and mtx_t
      definition).  It should contains at least the internal members
      defined in the generic version.

   2. __LOCK_ALIGNMENT for any extra attribute for internal lock used with
      atomic operations.

   3. The macro __PTHREAD_MUTEX_INITIALIZER used for static initialization.
      It should initialize the mutex internal flag.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/struct_mutex.h>
#endif /* expanded by -frewrite-includes */
# 74 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 1 3 4
/* Default mutex implementation struct definitions.
   Copyright (C) 2019-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _THREAD_MUTEX_INTERNAL_H
#define _THREAD_MUTEX_INTERNAL_H 1

/* Generic struct for both POSIX and C11 mutexes.  New ports are expected
   to use the default layout, however architecture can redefine it to
   add arch-specific extension (such as lock-elision).  The struct have
   a size of 32 bytes on LP32 and 40 bytes on LP64 architectures.  */

struct __pthread_mutex_s
{
  int __lock __LOCK_ALIGNMENT;
  unsigned int __count;
  int __owner;
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  unsigned int __nusers;
#endif
# 35 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  /* KIND must stay at this position in the structure to maintain
     binary compatibility with static initializers.

     Concurrency notes:
     The __kind of a mutex is initialized either by the static
     PTHREAD_MUTEX_INITIALIZER or by a call to pthread_mutex_init.

     After a mutex has been initialized, the __kind of a mutex is usually not
     changed.  BUT it can be set to -1 in pthread_mutex_destroy or elision can
     be enabled.  This is done concurrently in the pthread_mutex_*lock
     functions by using the macro FORCE_ELISION. This macro is only defined
     for architectures which supports lock elision.

     For elision, there are the flags PTHREAD_MUTEX_ELISION_NP and
     PTHREAD_MUTEX_NO_ELISION_NP which can be set in addition to the already
     set type of a mutex.  Before a mutex is initialized, only
     PTHREAD_MUTEX_NO_ELISION_NP can be set with pthread_mutexattr_settype.

     After a mutex has been initialized, the functions pthread_mutex_*lock can
     enable elision - if the mutex-type and the machine supports it - by
     setting the flag PTHREAD_MUTEX_ELISION_NP. This is done concurrently.
     Afterwards the lock / unlock functions are using specific elision
     code-paths.  */
  int __kind;
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE != 64
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 60 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  unsigned int __nusers;
#endif
# 62 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 63 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  int __spins;
  __pthread_list_t __list;
# define __PTHREAD_MUTEX_HAVE_PREV      1
#else
# 67 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  __extension__ union
  {
    int __spins;
    __pthread_slist_t __list;
  };
# define __PTHREAD_MUTEX_HAVE_PREV      0
#endif
# 74 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
};

#if 0 /* disabled by -frewrite-includes */
#if __PTHREAD_MUTEX_HAVE_PREV == 1
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 77 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
# define __PTHREAD_MUTEX_INITIALIZER(__kind) \
  0, 0, 0, 0, __kind, 0, { 0, 0 }
#else
# 80 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
# define __PTHREAD_MUTEX_INITIALIZER(__kind) \
  0, 0, 0, __kind, 0, { 0 }
#endif
# 83 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4

#endif
# 85 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
# 75 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4

/* Arch-sepecific read-write lock definitions.  A generic implementation is
   provided by struct_rwlock.h.  If required, an architecture can override it
   by defining:

   1. struct __pthread_rwlock_arch_t (used on pthread_rwlock_t definition).
      It should contain at least the internal members defined in the
      generic version.

   2. The macro __PTHREAD_RWLOCK_INITIALIZER used for static initialization.
      It should initialize the rwlock internal type.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/struct_rwlock.h>
#endif /* expanded by -frewrite-includes */
# 87 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 1 3 4
/* AArch64 internal rwlock struct definitions.
   Copyright (C) 2019-2020 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _RWLOCK_INTERNAL_H
#define _RWLOCK_INTERNAL_H

struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  unsigned long int __pad1;
  unsigned long int __pad2;
  unsigned int __flags;
};

#define __PTHREAD_RWLOCK_INITIALIZER(__flags) \
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags

#endif
# 42 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 3 4
# 88 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_cond_t. */

struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] __LOCK_ALIGNMENT;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

#endif /* _THREAD_SHARED_TYPES_H  */
# 120 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 2 3 4

/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;


/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_MUTEXATTR_T];
  int __align;
} pthread_mutexattr_t;


/* Data structure for condition variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_CONDATTR_T];
  int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;


/* Once-only execution */
typedef int __ONCE_ALIGNMENT pthread_once_t;


union pthread_attr_t
{
  char __size[__SIZEOF_PTHREAD_ATTR_T];
  long int __align;
};
#ifndef __have_pthread_attr_t
typedef union pthread_attr_t pthread_attr_t;
# define __have_pthread_attr_t 1
#endif
# 65 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4


typedef union
{
  struct __pthread_mutex_s __data;
  char __size[__SIZEOF_PTHREAD_MUTEX_T];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[__SIZEOF_PTHREAD_COND_T];
  __extension__ long long int __align;
} pthread_cond_t;


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 84 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4
/* Data structure for reader-writer lock variable handling.  The
   structure of the attribute type is deliberately not exposed.  */
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[__SIZEOF_PTHREAD_RWLOCK_T];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_RWLOCKATTR_T];
  long int __align;
} pthread_rwlockattr_t;
#endif
# 99 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4


#ifdef __USE_XOPEN2K
/* POSIX spinlock data type.  */
typedef volatile int pthread_spinlock_t;


/* POSIX barriers data type.  The structure of the type is
   deliberately not exposed.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIER_T];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIERATTR_T];
  int __align;
} pthread_barrierattr_t;
#endif
# 120 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4

#endif
# 122 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4
# 228 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
#endif
# 229 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4

__END_DECLS

#endif /* sys/types.h */
# 233 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 395 "/usr/include/stdlib.h" 2 3 4

/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and RAND_MAX inclusive.  */
extern long int random (void) __THROW;

/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) __THROW;

/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen) __THROW __nonnull ((2));

/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) __THROW __nonnull ((1));


# ifdef __USE_MISC
/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */

struct random_data
  {
    int32_t *fptr;		/* Front pointer.  */
    int32_t *rptr;		/* Rear pointer.  */
    int32_t *state;		/* Array of state values.  */
    int rand_type;		/* Type of random number generator.  */
    int rand_deg;		/* Degree of random number generator.  */
    int rand_sep;		/* Distance between front and rear.  */
    int32_t *end_ptr;		/* Pointer behind state table.  */
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result) __THROW __nonnull ((1, 2));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __THROW __nonnull ((2));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
     __THROW __nonnull ((2, 4));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 449 "/usr/include/stdlib.h" 3 4
#endif	/* Use extended X/Open || misc. */
# 450 "/usr/include/stdlib.h" 3 4


/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) __THROW;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) __THROW;

#ifdef __USE_POSIX199506
/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) __THROW;
#endif
# 461 "/usr/include/stdlib.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 464 "/usr/include/stdlib.h" 3 4
/* System V style 48-bit random number generator functions.  */

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) __THROW;
extern double erand48 (unsigned short int __xsubi[3]) __THROW __nonnull ((1));

/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) __THROW;
extern long int nrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) __THROW;
extern long int jrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Seed random number generator.  */
extern void srand48 (long int __seedval) __THROW;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __THROW __nonnull ((1));
extern void lcong48 (unsigned short int __param[7]) __THROW __nonnull ((1));

# ifdef __USE_MISC
/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3];	/* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c;	/* Additive const. in congruential formula.  */
    unsigned short int __init;	/* Flag for initializing.  */
    __extension__ unsigned long long int __a;	/* Factor in congruential
						   formula.  */
  };

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));

/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __THROW __nonnull ((2));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer) __THROW __nonnull ((1, 2));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 536 "/usr/include/stdlib.h" 3 4
#endif	/* Use misc or X/Open.  */
# 537 "/usr/include/stdlib.h" 3 4

/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) __THROW __attribute_malloc__
     __attribute_alloc_size__ ((1)) __wur;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     __THROW __attribute_malloc__ __attribute_alloc_size__ ((1, 2)) __wur;

/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     __THROW __attribute_warn_unused_result__ __attribute_alloc_size__ ((2));

#ifdef __USE_MISC
/* Re-allocate the previously allocated block in PTR, making the new
   block large enough for NMEMB elements of SIZE bytes each.  */
/* __attribute_malloc__ is not used, because if reallocarray returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __THROW __attribute_warn_unused_result__
     __attribute_alloc_size__ ((2, 3));
#endif
# 563 "/usr/include/stdlib.h" 3 4

/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) __THROW;

#ifdef __USE_MISC
#if 0 /* expanded by -frewrite-includes */
# include <alloca.h>
#endif /* expanded by -frewrite-includes */
# 568 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef	_ALLOCA_H
#define	_ALLOCA_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/alloca.h" 3 4
# 22 "/usr/include/alloca.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 13 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 17 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define miscellaneous pieces when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 19 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __STDDEF_H
#endif
# 21 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 28 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_ptrdiff_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 30 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_PTRDIFF_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 31 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define ptrdiff_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 33 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _PTRDIFF_T
#endif
# 35 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 37 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 39 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_size_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 41 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(_SIZE_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define size_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 44 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _SIZE_T
#endif
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 48 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define rsize_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _RSIZE_T
#endif
# 60 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 62 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 63 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wchar_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 65 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || (defined(_MSC_VER) && !_NATIVE_WCHAR_T_DEFINED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 66 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wchar_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WCHAR_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 69 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 71 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WCHAR_T_DEFINED
#endif
# 73 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 74 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 76 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 77 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 79 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_NULL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 81 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef NULL
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL __null
#  else
# 86 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 88 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#else
# 89 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 91 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 96 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 97 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 99 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 103 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef typeof(nullptr) nullptr_t;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L */
# 105 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc) && defined(__STDC_VERSION__) &&              \
    __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 108 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define unreachable() __builtin_unreachable()
#endif /* defined(__need_STDDEF_H_misc) && >= C23 */
# 110 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 112 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) ||              \
    (defined(__cplusplus) && __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 114 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 115 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#endif
# 116 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 119 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
/* Always define wint_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WINT_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 125 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#define _WINT_T
#endif
# 128 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 130 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 132 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4

#endif
# 134 "/usr/lib/llvm-17/lib/clang/17/include/stddef.h" 3 4
# 25 "/usr/include/alloca.h" 2 3 4

__BEGIN_DECLS

/* Remove any previous definitions.  */
#undef	alloca

/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __THROW;

#ifdef	__GNUC__
# define alloca(size)	__builtin_alloca (size)
#endif /* GCC.  */
# 37 "/usr/include/alloca.h" 3 4

__END_DECLS

#endif /* alloca.h */
# 41 "/usr/include/alloca.h" 3 4
# 569 "/usr/include/stdlib.h" 2 3 4
#endif /* Use misc.  */
# 570 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) \
    || defined __USE_MISC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 573 "/usr/include/stdlib.h" 3 4
/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size) __THROW __attribute_malloc__
     __attribute_alloc_size__ ((1)) __wur;
#endif
# 577 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K
/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __THROW __nonnull ((1)) __wur;
#endif
# 583 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC11
/* ISO C variant of aligned allocation.  */
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __THROW __attribute_malloc__ __attribute_alloc_size__ ((2)) __wur;
#endif
# 589 "/usr/include/stdlib.h" 3 4

/* Abort execution and generate a core-dump.  */
extern void abort (void) __THROW __attribute__ ((__noreturn__));


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) __THROW __nonnull ((1));

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_ISOC11 || defined __USE_ISOCXX11
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 598 "/usr/include/stdlib.h" 3 4
/* Register a function to be called when `quick_exit' is called.  */
# ifdef __cplusplus
extern "C++" int at_quick_exit (void (*__func) (void))
     __THROW __asm ("at_quick_exit") __nonnull ((1));
# else
# 603 "/usr/include/stdlib.h" 3 4
extern int at_quick_exit (void (*__func) (void)) __THROW __nonnull ((1));
# endif
# 605 "/usr/include/stdlib.h" 3 4
#endif
# 606 "/usr/include/stdlib.h" 3 4

#ifdef	__USE_MISC
/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __THROW __nonnull ((1));
#endif
# 613 "/usr/include/stdlib.h" 3 4

/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) __THROW __attribute__ ((__noreturn__));

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_ISOC11 || defined __USE_ISOCXX11
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 620 "/usr/include/stdlib.h" 3 4
/* Call all functions registered with `at_quick_exit' in the reverse
   of the order in which they were registered and terminate program
   execution with STATUS.  */
extern void quick_exit (int __status) __THROW __attribute__ ((__noreturn__));
#endif
# 625 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC99
/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) __THROW __attribute__ ((__noreturn__));
#endif
# 631 "/usr/include/stdlib.h" 3 4


/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) __THROW __nonnull ((1)) __wur;

#ifdef __USE_GNU
/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *secure_getenv (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 642 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 644 "/usr/include/stdlib.h" 3 4
/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) __THROW __nonnull ((1));
#endif
# 649 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K
/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (const char *__name, const char *__value, int __replace)
     __THROW __nonnull ((2));

/* Remove the variable NAME from the environment.  */
extern int unsetenv (const char *__name) __THROW __nonnull ((1));
#endif
# 659 "/usr/include/stdlib.h" 3 4

#ifdef	__USE_MISC
/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) __THROW;
#endif
# 666 "/usr/include/stdlib.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC \
    || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 670 "/usr/include/stdlib.h" 3 4
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Always returns TEMPLATE, it's either a temporary file name or a null
   string if it cannot get a unique file name.  */
extern char *mktemp (char *__template) __THROW __nonnull ((1));
#endif
# 677 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 679 "/usr/include/stdlib.h" 3 4
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemp (char *__template) __nonnull ((1)) __wur;
# else
# 690 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemp, (char *__template), mkstemp64)
     __nonnull ((1)) __wur;
#  else
# 694 "/usr/include/stdlib.h" 3 4
#   define mkstemp mkstemp64
#  endif
# 696 "/usr/include/stdlib.h" 3 4
# endif
# 697 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemp64 (char *__template) __nonnull ((1)) __wur;
# endif
# 700 "/usr/include/stdlib.h" 3 4
#endif
# 701 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemps (char *__template, int __suffixlen) __nonnull ((1)) __wur;
# else
# 712 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemps, (char *__template, int __suffixlen),
		       mkstemps64) __nonnull ((1)) __wur;
#  else
# 716 "/usr/include/stdlib.h" 3 4
#   define mkstemps mkstemps64
#  endif
# 718 "/usr/include/stdlib.h" 3 4
# endif
# 719 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemps64 (char *__template, int __suffixlen)
     __nonnull ((1)) __wur;
# endif
# 723 "/usr/include/stdlib.h" 3 4
#endif
# 724 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K8
/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) __THROW __nonnull ((1)) __wur;
#endif
# 733 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Generate a unique temporary file name from TEMPLATE similar to
   mkstemp.  But allow the caller to pass additional flags which are
   used in the open call to create the file..

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemp (char *__template, int __flags) __nonnull ((1)) __wur;
# else
# 744 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemp, (char *__template, int __flags), mkostemp64)
     __nonnull ((1)) __wur;
#  else
# 748 "/usr/include/stdlib.h" 3 4
#   define mkostemp mkostemp64
#  endif
# 750 "/usr/include/stdlib.h" 3 4
# endif
# 751 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemp64 (char *__template, int __flags) __nonnull ((1)) __wur;
# endif
# 754 "/usr/include/stdlib.h" 3 4

/* Similar to mkostemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# else
# 765 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemps, (char *__template, int __suffixlen,
				   int __flags), mkostemps64)
     __nonnull ((1)) __wur;
#  else
# 770 "/usr/include/stdlib.h" 3 4
#   define mkostemps mkostemps64
#  endif
# 772 "/usr/include/stdlib.h" 3 4
# endif
# 773 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# endif
# 777 "/usr/include/stdlib.h" 3 4
#endif
# 778 "/usr/include/stdlib.h" 3 4


/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) __wur;


#ifdef	__USE_GNU
/* Return a malloc'd string containing the canonical absolute name of the
   existing named file.  */
extern char *canonicalize_file_name (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 793 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 795 "/usr/include/stdlib.h" 3 4
/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (const char *__restrict __name,
		       char *__restrict __resolved) __THROW __wur;
#endif
# 803 "/usr/include/stdlib.h" 3 4


/* Shorthand for type of comparison functions.  */
#ifndef __COMPAR_FN_T
# define __COMPAR_FN_T
typedef int (*__compar_fn_t) (const void *, const void *);

# ifdef	__USE_GNU
typedef __compar_fn_t comparison_fn_t;
# endif
# 813 "/usr/include/stdlib.h" 3 4
#endif
# 814 "/usr/include/stdlib.h" 3 4
#ifdef __USE_GNU
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
#endif
# 817 "/usr/include/stdlib.h" 3 4

/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __nonnull ((1, 2, 5)) __wur;

#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-bsearch.h>
#endif /* expanded by -frewrite-includes */
# 825 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
/* Perform binary search - inline version.
   Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

__extern_inline void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
	 __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
	__u = __idx;
      else if (__comparison > 0)
	__l = __idx + 1;
      else
	return (void *) __p;
    }

  return NULL;
}
# 826 "/usr/include/stdlib.h" 2 3 4
#endif
# 827 "/usr/include/stdlib.h" 3 4

/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) __nonnull ((1, 4));
#ifdef __USE_GNU
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
		     __compar_d_fn_t __compar, void *__arg)
  __nonnull ((1, 4));
#endif
# 837 "/usr/include/stdlib.h" 3 4


/* Return the absolute value of X.  */
extern int abs (int __x) __THROW __attribute__ ((__const__)) __wur;
extern long int labs (long int __x) __THROW __attribute__ ((__const__)) __wur;

#ifdef __USE_ISOC99
__extension__ extern long long int llabs (long long int __x)
     __THROW __attribute__ ((__const__)) __wur;
#endif
# 847 "/usr/include/stdlib.h" 3 4


/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     __THROW __attribute__ ((__const__)) __wur;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __THROW __attribute__ ((__const__)) __wur;

#ifdef __USE_ISOC99
__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
     __THROW __attribute__ ((__const__)) __wur;
#endif
# 862 "/usr/include/stdlib.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) \
    || defined __USE_MISC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 866 "/usr/include/stdlib.h" 3 4
/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */

/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;
#endif
# 887 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;


/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
#endif	/* misc */
# 918 "/usr/include/stdlib.h" 3 4


/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) __THROW;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
		   const char *__restrict __s, size_t __n) __THROW;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) __THROW;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			const char *__restrict __s, size_t __n) __THROW;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
			const wchar_t *__restrict __pwcs, size_t __n)
     __THROW;


#ifdef __USE_MISC
/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (const char *__response) __THROW __nonnull ((1)) __wur;
#endif
# 948 "/usr/include/stdlib.h" 3 4


#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 951 "/usr/include/stdlib.h" 3 4
/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **__restrict __optionp,
		      char *const *__restrict __tokens,
		      char **__restrict __valuep)
     __THROW __nonnull ((1, 2, 3)) __wur;
#endif
# 962 "/usr/include/stdlib.h" 3 4


/* X/Open pseudo terminal handling.  */

#ifdef __USE_XOPEN2KXSI
/* Return a master pseudo-terminal handle.  */
extern int posix_openpt (int __oflag) __wur;
#endif
# 970 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN_EXTENDED
/* The next four functions all take a master pseudo-tty fd and
   perform an operation on the associated slave:  */

/* Chown the slave to the calling user.  */
extern int grantpt (int __fd) __THROW;

/* Release an internal lock so the slave can be opened.
   Call after grantpt().  */
extern int unlockpt (int __fd) __THROW;

/* Return the pathname of the pseudo terminal slave associated with
   the master FD is open on, or NULL on errors.
   The returned storage is good until the next call to this function.  */
extern char *ptsname (int __fd) __THROW __wur;
#endif
# 987 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Store at most BUFLEN characters of the pathname of the slave pseudo
   terminal associated with the master FD is open on in BUF.
   Return 0 on success, otherwise an error number.  */
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __THROW __nonnull ((2));

/* Open a master pseudo terminal and return its file descriptor.  */
extern int getpt (void);
#endif
# 998 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     __THROW __nonnull ((1));
#endif
# 1006 "/usr/include/stdlib.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1008 "/usr/include/stdlib.h" 3 4
/* Return the index into the active-logins file (utmp) for
   the controlling terminal.  */
extern int ttyslot (void) __THROW;
#endif
# 1012 "/usr/include/stdlib.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/stdlib-float.h>
#endif /* expanded by -frewrite-includes */
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _STDLIB_H
# error "Never use <bits/stdlib-float.h> directly; include <stdlib.h> instead."
#endif
# 22 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 3 4

#ifdef __USE_EXTERN_INLINES
__extern_inline double
__NTH (atof (const char *__nptr))
{
  return strtod (__nptr, (char **) NULL);
}
#endif /* Optimizing and Inlining.  */
# 30 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */
#if 0 /* disabled by -frewrite-includes */
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1017 "/usr/include/stdlib.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 1017 "/usr/include/stdlib.h" 3 4
# 1018 "/usr/include/stdlib.h" 3 4
#endif
# 1019 "/usr/include/stdlib.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 1020 "/usr/include/stdlib.h" 3 4
# 1021 "/usr/include/stdlib.h" 3 4
#endif
# 1022 "/usr/include/stdlib.h" 3 4

__END_DECLS

#endif /* stdlib.h  */
# 1026 "/usr/include/stdlib.h" 3 4
# 4 "colour_convert_int.c" 2
// #include <math.h>
#if 0 /* expanded by -frewrite-includes */
#include <stdint.h>
#endif /* expanded by -frewrite-includes */
# 5 "colour_convert_int.c"
# 1 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 1 3
/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/

#ifndef __CLANG_STDINT_H
// AIX system headers need stdint.h to be re-enterable while _STD_TYPES_T
// is defined until an inclusion of it without _STD_TYPES_T occurs, in which
// case the header guard macro is defined.
#if 0 /* disabled by -frewrite-includes */
#if !defined(_AIX) || !defined(_STD_TYPES_T) || !defined(__STDC_HOSTED__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 14 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#define __CLANG_STDINT_H
#endif
# 16 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* If we're hosted, fall back to the system's stdint.h, which might have
 * additional definitions.
 */
#if 0 /* disabled by -frewrite-includes */
#if __STDC_HOSTED__ && __has_include_next(<stdint.h>)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 21 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

// C99 7.18.3 Limits of other integer types
//
//  Footnote 219, 220: C++ implementations should define these macros only when
//  __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
//  Footnote 222: C++ implementations should define these macros only when
//  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
//  The macros defined by <cstdint> are provided unconditionally. In particular,
//  the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
//  footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.
# ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__STDC_LIMIT_MACROS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 43 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#   define __STDC_LIMIT_MACROS
#   define __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
#  endif
# 46 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__STDC_CONSTANT_MACROS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 47 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#   define __STDC_CONSTANT_MACROS
#   define __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
#  endif
# 50 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# endif
# 51 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#if 0 /* expanded by -frewrite-includes */
# include_next <stdint.h>
#endif /* expanded by -frewrite-includes */
# 52 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
/* Copyright (C) 1997-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99: 7.18 Integer types <stdint.h>
 */

#ifndef _STDINT_H
#define _STDINT_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if 0 /* disabled by -frewrite-includes */
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 40 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X; the symbols in Annex F
   still require that macro in C2X.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 51 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 53 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 55 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_BFP_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 57 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#else
# 59 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 0
#endif
# 61 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 70 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 72 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_FUNCS_EXT) || __GLIBC_USE (ISOC2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 74 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#else
# 76 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 0
#endif
# 78 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if 0 /* disabled by -frewrite-includes */
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 83 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 85 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 87 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 27 "/usr/include/stdint.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/stdint.h" 3 4
# 28 "/usr/include/stdint.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wchar.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 1 3 4
/* wchar_t type related definitions.
   Copyright (C) 2000-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_WCHAR_H
#define _BITS_WCHAR_H	1

/* The fallback definitions, for when __WCHAR_MAX__ or __WCHAR_MIN__
   are not defined, give the right value and type as long as both int
   and wchar_t are 32-bit types.  Adding L'\0' to a constant value
   ensures that the type is correct; it is necessary to use (L'\0' +
   0) rather than just L'\0' so that the type in C++ is the promoted
   version of wchar_t rather than the distinct wchar_t type itself.
   Because wchar_t in preprocessor #if expressions is treated as
   intmax_t or uintmax_t, the expression (L'\0' - 1) would have the
   wrong value for WCHAR_MAX in such expressions and so cannot be used
   to define __WCHAR_MAX in the unsigned case.  */

#ifdef __WCHAR_MAX__
# define __WCHAR_MAX	__WCHAR_MAX__
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif L'\0' - 1 > 0
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 36 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4
# define __WCHAR_MAX	(0xffffffffu + L'\0')
#else
# 38 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4
# define __WCHAR_MAX	(0x7fffffff + L'\0')
#endif
# 40 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4

#ifdef __WCHAR_MIN__
# define __WCHAR_MIN	__WCHAR_MIN__
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif L'\0' - 1 > 0
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 44 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4
# define __WCHAR_MIN	(L'\0' + 0)
#else
# 46 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4
# define __WCHAR_MIN	(-__WCHAR_MAX - 1)
#endif
# 48 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4

#endif	/* bits/wchar.h */
# 50 "/usr/include/aarch64-linux-gnu/bits/wchar.h" 3 4
# 29 "/usr/include/stdint.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 29 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifdef __LP64__
# define __WORDSIZE			64
#else
# 23 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#endif
# 27 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 3 4

#define __WORDSIZE_TIME64_COMPAT32	0
# 30 "/usr/include/stdint.h" 2 3 4

/* Exact integral types.  */

/* Signed.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/stdint-intn.h>
#endif /* expanded by -frewrite-includes */
# 34 "/usr/include/stdint.h" 3 4
# 35 "/usr/include/stdint.h" 3 4

/* Unsigned.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/stdint-uintn.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 1 3 4
/* Define uintN_t types.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDINT_UINTN_H
#define _BITS_STDINT_UINTN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 3 4

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;

#endif /* bits/stdint-uintn.h */
# 30 "/usr/include/aarch64-linux-gnu/bits/stdint-uintn.h" 3 4
# 38 "/usr/include/stdint.h" 2 3 4


/* Small types.  */

/* Signed.  */
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

/* Unsigned.  */
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;


/* Fast types.  */

/* Signed.  */
typedef signed char		int_fast8_t;
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 60 "/usr/include/stdint.h" 3 4
typedef long int		int_fast16_t;
typedef long int		int_fast32_t;
typedef long int		int_fast64_t;
#else
# 64 "/usr/include/stdint.h" 3 4
typedef int			int_fast16_t;
typedef int			int_fast32_t;
__extension__
typedef long long int		int_fast64_t;
#endif
# 69 "/usr/include/stdint.h" 3 4

/* Unsigned.  */
typedef unsigned char		uint_fast8_t;
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 73 "/usr/include/stdint.h" 3 4
typedef unsigned long int	uint_fast16_t;
typedef unsigned long int	uint_fast32_t;
typedef unsigned long int	uint_fast64_t;
#else
# 77 "/usr/include/stdint.h" 3 4
typedef unsigned int		uint_fast16_t;
typedef unsigned int		uint_fast32_t;
__extension__
typedef unsigned long long int	uint_fast64_t;
#endif
# 82 "/usr/include/stdint.h" 3 4


/* Types for `void *' pointers.  */
#if 0 /* disabled by -frewrite-includes */
#if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 86 "/usr/include/stdint.h" 3 4
# ifndef __intptr_t_defined
typedef long int		intptr_t;
#  define __intptr_t_defined
# endif
# 90 "/usr/include/stdint.h" 3 4
typedef unsigned long int	uintptr_t;
#else
# 92 "/usr/include/stdint.h" 3 4
# ifndef __intptr_t_defined
typedef int			intptr_t;
#  define __intptr_t_defined
# endif
# 96 "/usr/include/stdint.h" 3 4
typedef unsigned int		uintptr_t;
#endif
# 98 "/usr/include/stdint.h" 3 4


/* Largest integral types.  */
typedef __intmax_t		intmax_t;
typedef __uintmax_t		uintmax_t;


#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 106 "/usr/include/stdint.h" 3 4
#  define __INT64_C(c)	c ## L
#  define __UINT64_C(c)	c ## UL
# else
# 109 "/usr/include/stdint.h" 3 4
#  define __INT64_C(c)	c ## LL
#  define __UINT64_C(c)	c ## ULL
# endif
# 112 "/usr/include/stdint.h" 3 4

/* Limits of integral types.  */

/* Minimum of signed integral types.  */
# define INT8_MIN		(-128)
# define INT16_MIN		(-32767-1)
# define INT32_MIN		(-2147483647-1)
# define INT64_MIN		(-__INT64_C(9223372036854775807)-1)
/* Maximum of signed integral types.  */
# define INT8_MAX		(127)
# define INT16_MAX		(32767)
# define INT32_MAX		(2147483647)
# define INT64_MAX		(__INT64_C(9223372036854775807))

/* Maximum of unsigned integral types.  */
# define UINT8_MAX		(255)
# define UINT16_MAX		(65535)
# define UINT32_MAX		(4294967295U)
# define UINT64_MAX		(__UINT64_C(18446744073709551615))


/* Minimum of signed integral types having a minimum size.  */
# define INT_LEAST8_MIN		(-128)
# define INT_LEAST16_MIN	(-32767-1)
# define INT_LEAST32_MIN	(-2147483647-1)
# define INT_LEAST64_MIN	(-__INT64_C(9223372036854775807)-1)
/* Maximum of signed integral types having a minimum size.  */
# define INT_LEAST8_MAX		(127)
# define INT_LEAST16_MAX	(32767)
# define INT_LEAST32_MAX	(2147483647)
# define INT_LEAST64_MAX	(__INT64_C(9223372036854775807))

/* Maximum of unsigned integral types having a minimum size.  */
# define UINT_LEAST8_MAX	(255)
# define UINT_LEAST16_MAX	(65535)
# define UINT_LEAST32_MAX	(4294967295U)
# define UINT_LEAST64_MAX	(__UINT64_C(18446744073709551615))


/* Minimum of fast signed integral types having a minimum size.  */
# define INT_FAST8_MIN		(-128)
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 154 "/usr/include/stdint.h" 3 4
#  define INT_FAST16_MIN	(-9223372036854775807L-1)
#  define INT_FAST32_MIN	(-9223372036854775807L-1)
# else
# 157 "/usr/include/stdint.h" 3 4
#  define INT_FAST16_MIN	(-2147483647-1)
#  define INT_FAST32_MIN	(-2147483647-1)
# endif
# 160 "/usr/include/stdint.h" 3 4
# define INT_FAST64_MIN		(-__INT64_C(9223372036854775807)-1)
/* Maximum of fast signed integral types having a minimum size.  */
# define INT_FAST8_MAX		(127)
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 164 "/usr/include/stdint.h" 3 4
#  define INT_FAST16_MAX	(9223372036854775807L)
#  define INT_FAST32_MAX	(9223372036854775807L)
# else
# 167 "/usr/include/stdint.h" 3 4
#  define INT_FAST16_MAX	(2147483647)
#  define INT_FAST32_MAX	(2147483647)
# endif
# 170 "/usr/include/stdint.h" 3 4
# define INT_FAST64_MAX		(__INT64_C(9223372036854775807))

/* Maximum of fast unsigned integral types having a minimum size.  */
# define UINT_FAST8_MAX		(255)
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 175 "/usr/include/stdint.h" 3 4
#  define UINT_FAST16_MAX	(18446744073709551615UL)
#  define UINT_FAST32_MAX	(18446744073709551615UL)
# else
# 178 "/usr/include/stdint.h" 3 4
#  define UINT_FAST16_MAX	(4294967295U)
#  define UINT_FAST32_MAX	(4294967295U)
# endif
# 181 "/usr/include/stdint.h" 3 4
# define UINT_FAST64_MAX	(__UINT64_C(18446744073709551615))


/* Values to test for integral types holding `void *' pointer.  */
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 186 "/usr/include/stdint.h" 3 4
#  define INTPTR_MIN		(-9223372036854775807L-1)
#  define INTPTR_MAX		(9223372036854775807L)
#  define UINTPTR_MAX		(18446744073709551615UL)
# else
# 190 "/usr/include/stdint.h" 3 4
#  define INTPTR_MIN		(-2147483647-1)
#  define INTPTR_MAX		(2147483647)
#  define UINTPTR_MAX		(4294967295U)
# endif
# 194 "/usr/include/stdint.h" 3 4


/* Minimum for largest signed integral type.  */
# define INTMAX_MIN		(-__INT64_C(9223372036854775807)-1)
/* Maximum for largest signed integral type.  */
# define INTMAX_MAX		(__INT64_C(9223372036854775807))

/* Maximum for largest unsigned integral type.  */
# define UINTMAX_MAX		(__UINT64_C(18446744073709551615))


/* Limits of other integer types.  */

/* Limits of `ptrdiff_t' type.  */
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 209 "/usr/include/stdint.h" 3 4
#  define PTRDIFF_MIN		(-9223372036854775807L-1)
#  define PTRDIFF_MAX		(9223372036854775807L)
# else
# 212 "/usr/include/stdint.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if __WORDSIZE32_PTRDIFF_LONG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 213 "/usr/include/stdint.h" 3 4
#   define PTRDIFF_MIN		(-2147483647L-1)
#   define PTRDIFF_MAX		(2147483647L)
#  else
# 216 "/usr/include/stdint.h" 3 4
#   define PTRDIFF_MIN		(-2147483647-1)
#   define PTRDIFF_MAX		(2147483647)
#  endif
# 219 "/usr/include/stdint.h" 3 4
# endif
# 220 "/usr/include/stdint.h" 3 4

/* Limits of `sig_atomic_t'.  */
# define SIG_ATOMIC_MIN		(-2147483647-1)
# define SIG_ATOMIC_MAX		(2147483647)

/* Limit of `size_t' type.  */
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 227 "/usr/include/stdint.h" 3 4
#  define SIZE_MAX		(18446744073709551615UL)
# else
# 229 "/usr/include/stdint.h" 3 4
#if 0 /* disabled by -frewrite-includes */
#  if __WORDSIZE32_SIZE_ULONG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 230 "/usr/include/stdint.h" 3 4
#   define SIZE_MAX		(4294967295UL)
#  else
# 232 "/usr/include/stdint.h" 3 4
#   define SIZE_MAX		(4294967295U)
#  endif
# 234 "/usr/include/stdint.h" 3 4
# endif
# 235 "/usr/include/stdint.h" 3 4

/* Limits of `wchar_t'.  */
# ifndef WCHAR_MIN
/* These constants might also be defined in <wchar.h>.  */
#  define WCHAR_MIN		__WCHAR_MIN
#  define WCHAR_MAX		__WCHAR_MAX
# endif
# 242 "/usr/include/stdint.h" 3 4

/* Limits of `wint_t'.  */
# define WINT_MIN		(0u)
# define WINT_MAX		(4294967295u)

/* Signed.  */
# define INT8_C(c)	c
# define INT16_C(c)	c
# define INT32_C(c)	c
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 252 "/usr/include/stdint.h" 3 4
#  define INT64_C(c)	c ## L
# else
# 254 "/usr/include/stdint.h" 3 4
#  define INT64_C(c)	c ## LL
# endif
# 256 "/usr/include/stdint.h" 3 4

/* Unsigned.  */
# define UINT8_C(c)	c
# define UINT16_C(c)	c
# define UINT32_C(c)	c ## U
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 262 "/usr/include/stdint.h" 3 4
#  define UINT64_C(c)	c ## UL
# else
# 264 "/usr/include/stdint.h" 3 4
#  define UINT64_C(c)	c ## ULL
# endif
# 266 "/usr/include/stdint.h" 3 4

/* Maximal type.  */
#if 0 /* disabled by -frewrite-includes */
# if __WORDSIZE == 64
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 269 "/usr/include/stdint.h" 3 4
#  define INTMAX_C(c)	c ## L
#  define UINTMAX_C(c)	c ## UL
# else
# 272 "/usr/include/stdint.h" 3 4
#  define INTMAX_C(c)	c ## LL
#  define UINTMAX_C(c)	c ## ULL
# endif
# 275 "/usr/include/stdint.h" 3 4

#if 0 /* disabled by -frewrite-includes */
#if __GLIBC_USE (IEC_60559_BFP_EXT_C2X)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 277 "/usr/include/stdint.h" 3 4

# define INT8_WIDTH 8
# define UINT8_WIDTH 8
# define INT16_WIDTH 16
# define UINT16_WIDTH 16
# define INT32_WIDTH 32
# define UINT32_WIDTH 32
# define INT64_WIDTH 64
# define UINT64_WIDTH 64

# define INT_LEAST8_WIDTH 8
# define UINT_LEAST8_WIDTH 8
# define INT_LEAST16_WIDTH 16
# define UINT_LEAST16_WIDTH 16
# define INT_LEAST32_WIDTH 32
# define UINT_LEAST32_WIDTH 32
# define INT_LEAST64_WIDTH 64
# define UINT_LEAST64_WIDTH 64

# define INT_FAST8_WIDTH 8
# define UINT_FAST8_WIDTH 8
# define INT_FAST16_WIDTH __WORDSIZE
# define UINT_FAST16_WIDTH __WORDSIZE
# define INT_FAST32_WIDTH __WORDSIZE
# define UINT_FAST32_WIDTH __WORDSIZE
# define INT_FAST64_WIDTH 64
# define UINT_FAST64_WIDTH 64

# define INTPTR_WIDTH __WORDSIZE
# define UINTPTR_WIDTH __WORDSIZE

# define INTMAX_WIDTH 64
# define UINTMAX_WIDTH 64

# define PTRDIFF_WIDTH __WORDSIZE
# define SIG_ATOMIC_WIDTH 32
# define SIZE_WIDTH __WORDSIZE
# define WCHAR_WIDTH 32
# define WINT_WIDTH 32

#endif
# 318 "/usr/include/stdint.h" 3 4

#endif /* stdint.h */
# 320 "/usr/include/stdint.h" 3 4
# 53 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 2 3

# ifdef __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
#  undef __STDC_LIMIT_MACROS
#  undef __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
# endif
# 58 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# ifdef __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
#  undef __STDC_CONSTANT_MACROS
#  undef __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
# endif
# 62 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#else
# 64 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* C99 7.18.1.1 Exact-width integer types.
 * C99 7.18.1.2 Minimum-width integer types.
 * C99 7.18.1.3 Fastest minimum-width integer types.
 *
 * The standard requires that exact-width type be defined for 8-, 16-, 32-, and
 * 64-bit types if they are implemented. Other exact width types are optional.
 * This implementation defines an exact-width types for every integer width
 * that is represented in the standard integer types.
 *
 * The standard also requires minimum-width types be defined for 8-, 16-, 32-,
 * and 64-bit widths regardless of whether there are corresponding exact-width
 * types.
 *
 * To accommodate targets that are missing types that are exactly 8, 16, 32, or
 * 64 bits wide, this implementation takes an approach of cascading
 * redefinitions, redefining __int_leastN_t to successively smaller exact-width
 * types. It is therefore important that the types are defined in order of
 * descending widths.
 *
 * We currently assume that the minimum-width types and the fastest
 * minimum-width types are the same. This is allowed by the standard, but is
 * suboptimal.
 *
 * In violation of the standard, some targets do not implement a type that is
 * wide enough to represent all of the required widths (8-, 16-, 32-, 64-bit).
 * To accommodate these targets, a required minimum-width type is only
 * defined if there exists an exact-width type of equal or greater width.
 */

#ifdef __INT64_TYPE__
# ifndef __int8_t_defined /* glibc sys/types.h also defines int64_t*/
typedef __INT64_TYPE__ int64_t;
# endif /* __int8_t_defined */
# 98 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
typedef __UINT64_TYPE__ uint64_t;
# undef __int_least64_t
# define __int_least64_t int64_t
# undef __uint_least64_t
# define __uint_least64_t uint64_t
# undef __int_least32_t
# define __int_least32_t int64_t
# undef __uint_least32_t
# define __uint_least32_t uint64_t
# undef __int_least16_t
# define __int_least16_t int64_t
# undef __uint_least16_t
# define __uint_least16_t uint64_t
# undef __int_least8_t
# define __int_least8_t int64_t
# undef __uint_least8_t
# define __uint_least8_t uint64_t
#endif /* __INT64_TYPE__ */
# 116 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least64_t
typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
typedef __int_least64_t int_fast64_t;
typedef __uint_least64_t uint_fast64_t;
#endif /* __int_least64_t */
# 123 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT56_TYPE__
typedef __INT56_TYPE__ int56_t;
typedef __UINT56_TYPE__ uint56_t;
typedef int56_t int_least56_t;
typedef uint56_t uint_least56_t;
typedef int56_t int_fast56_t;
typedef uint56_t uint_fast56_t;
# undef __int_least32_t
# define __int_least32_t int56_t
# undef __uint_least32_t
# define __uint_least32_t uint56_t
# undef __int_least16_t
# define __int_least16_t int56_t
# undef __uint_least16_t
# define __uint_least16_t uint56_t
# undef __int_least8_t
# define __int_least8_t int56_t
# undef __uint_least8_t
# define __uint_least8_t uint56_t
#endif /* __INT56_TYPE__ */
# 144 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT48_TYPE__
typedef __INT48_TYPE__ int48_t;
typedef __UINT48_TYPE__ uint48_t;
typedef int48_t int_least48_t;
typedef uint48_t uint_least48_t;
typedef int48_t int_fast48_t;
typedef uint48_t uint_fast48_t;
# undef __int_least32_t
# define __int_least32_t int48_t
# undef __uint_least32_t
# define __uint_least32_t uint48_t
# undef __int_least16_t
# define __int_least16_t int48_t
# undef __uint_least16_t
# define __uint_least16_t uint48_t
# undef __int_least8_t
# define __int_least8_t int48_t
# undef __uint_least8_t
# define __uint_least8_t uint48_t
#endif /* __INT48_TYPE__ */
# 166 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT40_TYPE__
typedef __INT40_TYPE__ int40_t;
typedef __UINT40_TYPE__ uint40_t;
typedef int40_t int_least40_t;
typedef uint40_t uint_least40_t;
typedef int40_t int_fast40_t;
typedef uint40_t uint_fast40_t;
# undef __int_least32_t
# define __int_least32_t int40_t
# undef __uint_least32_t
# define __uint_least32_t uint40_t
# undef __int_least16_t
# define __int_least16_t int40_t
# undef __uint_least16_t
# define __uint_least16_t uint40_t
# undef __int_least8_t
# define __int_least8_t int40_t
# undef __uint_least8_t
# define __uint_least8_t uint40_t
#endif /* __INT40_TYPE__ */
# 188 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT32_TYPE__

# ifndef __int8_t_defined /* glibc sys/types.h also defines int32_t*/
typedef __INT32_TYPE__ int32_t;
# endif /* __int8_t_defined */
# 195 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

# ifndef __uint32_t_defined  /* more glibc compatibility */
# define __uint32_t_defined
typedef __UINT32_TYPE__ uint32_t;
# endif /* __uint32_t_defined */
# 200 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

# undef __int_least32_t
# define __int_least32_t int32_t
# undef __uint_least32_t
# define __uint_least32_t uint32_t
# undef __int_least16_t
# define __int_least16_t int32_t
# undef __uint_least16_t
# define __uint_least16_t uint32_t
# undef __int_least8_t
# define __int_least8_t int32_t
# undef __uint_least8_t
# define __uint_least8_t uint32_t
#endif /* __INT32_TYPE__ */
# 214 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least32_t
typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
typedef __int_least32_t int_fast32_t;
typedef __uint_least32_t uint_fast32_t;
#endif /* __int_least32_t */
# 221 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT24_TYPE__
typedef __INT24_TYPE__ int24_t;
typedef __UINT24_TYPE__ uint24_t;
typedef int24_t int_least24_t;
typedef uint24_t uint_least24_t;
typedef int24_t int_fast24_t;
typedef uint24_t uint_fast24_t;
# undef __int_least16_t
# define __int_least16_t int24_t
# undef __uint_least16_t
# define __uint_least16_t uint24_t
# undef __int_least8_t
# define __int_least8_t int24_t
# undef __uint_least8_t
# define __uint_least8_t uint24_t
#endif /* __INT24_TYPE__ */
# 238 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT16_TYPE__
#ifndef __int8_t_defined /* glibc sys/types.h also defines int16_t*/
typedef __INT16_TYPE__ int16_t;
#endif /* __int8_t_defined */
# 243 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
typedef __UINT16_TYPE__ uint16_t;
# undef __int_least16_t
# define __int_least16_t int16_t
# undef __uint_least16_t
# define __uint_least16_t uint16_t
# undef __int_least8_t
# define __int_least8_t int16_t
# undef __uint_least8_t
# define __uint_least8_t uint16_t
#endif /* __INT16_TYPE__ */
# 253 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least16_t
typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
typedef __int_least16_t int_fast16_t;
typedef __uint_least16_t uint_fast16_t;
#endif /* __int_least16_t */
# 260 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT8_TYPE__
#ifndef __int8_t_defined  /* glibc sys/types.h also defines int8_t*/
typedef __INT8_TYPE__ int8_t;
#endif /* __int8_t_defined */
# 266 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
typedef __UINT8_TYPE__ uint8_t;
# undef __int_least8_t
# define __int_least8_t int8_t
# undef __uint_least8_t
# define __uint_least8_t uint8_t
#endif /* __INT8_TYPE__ */
# 272 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least8_t
typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
typedef __int_least8_t int_fast8_t;
typedef __uint_least8_t uint_fast8_t;
#endif /* __int_least8_t */
# 279 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* prevent glibc sys/types.h from defining conflicting types */
#ifndef __int8_t_defined
# define __int8_t_defined
#endif /* __int8_t_defined */
# 284 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* C99 7.18.1.4 Integer types capable of holding object pointers.
 */
#define __stdint_join3(a,b,c) a ## b ## c

#ifndef _INTPTR_T
#ifndef __intptr_t_defined
typedef __INTPTR_TYPE__ intptr_t;
#define __intptr_t_defined
#define _INTPTR_T
#endif
# 295 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif
# 296 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifndef _UINTPTR_T
typedef __UINTPTR_TYPE__ uintptr_t;
#define _UINTPTR_T
#endif
# 301 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* C99 7.18.1.5 Greatest-width integer types.
 */
typedef __INTMAX_TYPE__  intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;

/* C99 7.18.4 Macros for minimum-width integer constants.
 *
 * The standard requires that integer constant macros be defined for all the
 * minimum-width types defined above. As 8-, 16-, 32-, and 64-bit minimum-width
 * types are required, the corresponding integer constant macros are defined
 * here. This implementation also defines minimum-width types for every other
 * integer width that the target implements, so corresponding macros are
 * defined below, too.
 *
 * These macros are defined using the same successive-shrinking approach as
 * the type definitions above. It is likewise important that macros are defined
 * in order of decending width.
 *
 * Note that C++ should not check __STDC_CONSTANT_MACROS here, contrary to the
 * claims of the C standard (see C++ 18.3.1p2, [cstdint.syn]).
 */

#define __int_c_join(a, b) a ## b
#define __int_c(v, suffix) __int_c_join(v, suffix)
#define __uint_c(v, suffix) __int_c_join(v##U, suffix)


#ifdef __INT64_TYPE__
# undef __int64_c_suffix
# undef __int32_c_suffix
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT64_C_SUFFIX__
#  define __int64_c_suffix __INT64_C_SUFFIX__
#  define __int32_c_suffix __INT64_C_SUFFIX__
#  define __int16_c_suffix __INT64_C_SUFFIX__
#  define  __int8_c_suffix __INT64_C_SUFFIX__
# endif /* __INT64_C_SUFFIX__ */
# 340 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT64_TYPE__ */
# 341 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least64_t
# ifdef __int64_c_suffix
#  define INT64_C(v) __int_c(v, __int64_c_suffix)
#  define UINT64_C(v) __uint_c(v, __int64_c_suffix)
# else
# 347 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT64_C(v) v
#  define UINT64_C(v) v ## U
# endif /* __int64_c_suffix */
# 350 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __int_least64_t */
# 351 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT56_TYPE__
# undef __int32_c_suffix
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT56_C_SUFFIX__
#  define INT56_C(v) __int_c(v, __INT56_C_SUFFIX__)
#  define UINT56_C(v) __uint_c(v, __INT56_C_SUFFIX__)
#  define __int32_c_suffix __INT56_C_SUFFIX__
#  define __int16_c_suffix __INT56_C_SUFFIX__
#  define __int8_c_suffix  __INT56_C_SUFFIX__
# else
# 364 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT56_C(v) v
#  define UINT56_C(v) v ## U
# endif /* __INT56_C_SUFFIX__ */
# 367 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT56_TYPE__ */
# 368 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT48_TYPE__
# undef __int32_c_suffix
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT48_C_SUFFIX__
#  define INT48_C(v) __int_c(v, __INT48_C_SUFFIX__)
#  define UINT48_C(v) __uint_c(v, __INT48_C_SUFFIX__)
#  define __int32_c_suffix __INT48_C_SUFFIX__
#  define __int16_c_suffix __INT48_C_SUFFIX__
#  define __int8_c_suffix  __INT48_C_SUFFIX__
# else
# 381 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT48_C(v) v
#  define UINT48_C(v) v ## U
# endif /* __INT48_C_SUFFIX__ */
# 384 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT48_TYPE__ */
# 385 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT40_TYPE__
# undef __int32_c_suffix
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT40_C_SUFFIX__
#  define INT40_C(v) __int_c(v, __INT40_C_SUFFIX__)
#  define UINT40_C(v) __uint_c(v, __INT40_C_SUFFIX__)
#  define __int32_c_suffix __INT40_C_SUFFIX__
#  define __int16_c_suffix __INT40_C_SUFFIX__
#  define __int8_c_suffix  __INT40_C_SUFFIX__
# else
# 398 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT40_C(v) v
#  define UINT40_C(v) v ## U
# endif /* __INT40_C_SUFFIX__ */
# 401 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT40_TYPE__ */
# 402 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT32_TYPE__
# undef __int32_c_suffix
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT32_C_SUFFIX__
#  define __int32_c_suffix __INT32_C_SUFFIX__
#  define __int16_c_suffix __INT32_C_SUFFIX__
#  define __int8_c_suffix  __INT32_C_SUFFIX__
# endif /* __INT32_C_SUFFIX__ */
# 413 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT32_TYPE__ */
# 414 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least32_t
# ifdef __int32_c_suffix
#  define INT32_C(v) __int_c(v, __int32_c_suffix)
#  define UINT32_C(v) __uint_c(v, __int32_c_suffix)
# else
# 420 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT32_C(v) v
#  define UINT32_C(v) v ## U
# endif /* __int32_c_suffix */
# 423 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __int_least32_t */
# 424 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT24_TYPE__
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT24_C_SUFFIX__
#  define INT24_C(v) __int_c(v, __INT24_C_SUFFIX__)
#  define UINT24_C(v) __uint_c(v, __INT24_C_SUFFIX__)
#  define __int16_c_suffix __INT24_C_SUFFIX__
#  define __int8_c_suffix  __INT24_C_SUFFIX__
# else
# 435 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT24_C(v) v
#  define UINT24_C(v) v ## U
# endif /* __INT24_C_SUFFIX__ */
# 438 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT24_TYPE__ */
# 439 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT16_TYPE__
# undef __int16_c_suffix
# undef  __int8_c_suffix
# ifdef __INT16_C_SUFFIX__
#  define __int16_c_suffix __INT16_C_SUFFIX__
#  define __int8_c_suffix  __INT16_C_SUFFIX__
# endif /* __INT16_C_SUFFIX__ */
# 448 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT16_TYPE__ */
# 449 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least16_t
# ifdef __int16_c_suffix
#  define INT16_C(v) __int_c(v, __int16_c_suffix)
#  define UINT16_C(v) __uint_c(v, __int16_c_suffix)
# else
# 455 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT16_C(v) v
#  define UINT16_C(v) v ## U
# endif /* __int16_c_suffix */
# 458 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __int_least16_t */
# 459 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT8_TYPE__
# undef  __int8_c_suffix
# ifdef __INT8_C_SUFFIX__
#  define __int8_c_suffix __INT8_C_SUFFIX__
# endif /* __INT8_C_SUFFIX__ */
# 466 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT8_TYPE__ */
# 467 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __int_least8_t
# ifdef __int8_c_suffix
#  define INT8_C(v) __int_c(v, __int8_c_suffix)
#  define UINT8_C(v) __uint_c(v, __int8_c_suffix)
# else
# 473 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define INT8_C(v) v
#  define UINT8_C(v) v ## U
# endif /* __int8_c_suffix */
# 476 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __int_least8_t */
# 477 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


/* C99 7.18.2.1 Limits of exact-width integer types.
 * C99 7.18.2.2 Limits of minimum-width integer types.
 * C99 7.18.2.3 Limits of fastest minimum-width integer types.
 *
 * The presence of limit macros are completely optional in C99.  This
 * implementation defines limits for all of the types (exact- and
 * minimum-width) that it defines above, using the limits of the minimum-width
 * type for any types that do not have exact-width representations.
 *
 * As in the type definitions, this section takes an approach of
 * successive-shrinking to determine which limits to use for the standard (8,
 * 16, 32, 64) bit widths when they don't have exact representations. It is
 * therefore important that the definitions be kept in order of decending
 * widths.
 *
 * Note that C++ should not check __STDC_LIMIT_MACROS here, contrary to the
 * claims of the C standard (see C++ 18.3.1p2, [cstdint.syn]).
 */

#ifdef __INT64_TYPE__
# define INT64_MAX           INT64_C( 9223372036854775807)
# define INT64_MIN         (-INT64_C( 9223372036854775807)-1)
# define UINT64_MAX         UINT64_C(18446744073709551615)
/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 505 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT64_WIDTH         64
# define INT64_WIDTH          UINT64_WIDTH

# define __UINT_LEAST64_WIDTH UINT64_WIDTH
# undef __UINT_LEAST32_WIDTH
# define __UINT_LEAST32_WIDTH UINT64_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT64_WIDTH
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX UINT64_MAX
#endif /* __STDC_VERSION__ */
# 516 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

# define __INT_LEAST64_MIN   INT64_MIN
# define __INT_LEAST64_MAX   INT64_MAX
# define __UINT_LEAST64_MAX UINT64_MAX
# undef __INT_LEAST32_MIN
# define __INT_LEAST32_MIN   INT64_MIN
# undef __INT_LEAST32_MAX
# define __INT_LEAST32_MAX   INT64_MAX
# undef __UINT_LEAST32_MAX
# define __UINT_LEAST32_MAX UINT64_MAX
# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT64_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT64_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT64_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT64_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT64_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT64_MAX
#endif /* __INT64_TYPE__ */
# 539 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT_LEAST64_MIN
# define INT_LEAST64_MIN   __INT_LEAST64_MIN
# define INT_LEAST64_MAX   __INT_LEAST64_MAX
# define UINT_LEAST64_MAX __UINT_LEAST64_MAX
# define INT_FAST64_MIN    __INT_LEAST64_MIN
# define INT_FAST64_MAX    __INT_LEAST64_MAX
# define UINT_FAST64_MAX  __UINT_LEAST64_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) &&  __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 551 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT_LEAST64_WIDTH __UINT_LEAST64_WIDTH
# define INT_LEAST64_WIDTH  UINT_LEAST64_WIDTH
# define UINT_FAST64_WIDTH  __UINT_LEAST64_WIDTH
# define INT_FAST64_WIDTH   UINT_FAST64_WIDTH
#endif /* __STDC_VERSION__ */
# 556 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT_LEAST64_MIN */
# 557 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT56_TYPE__
# define INT56_MAX           INT56_C(36028797018963967)
# define INT56_MIN         (-INT56_C(36028797018963967)-1)
# define UINT56_MAX         UINT56_C(72057594037927935)
# define INT_LEAST56_MIN     INT56_MIN
# define INT_LEAST56_MAX     INT56_MAX
# define UINT_LEAST56_MAX   UINT56_MAX
# define INT_FAST56_MIN      INT56_MIN
# define INT_FAST56_MAX      INT56_MAX
# define UINT_FAST56_MAX    UINT56_MAX

# undef __INT_LEAST32_MIN
# define __INT_LEAST32_MIN   INT56_MIN
# undef __INT_LEAST32_MAX
# define __INT_LEAST32_MAX   INT56_MAX
# undef __UINT_LEAST32_MAX
# define __UINT_LEAST32_MAX UINT56_MAX
# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT56_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT56_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT56_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT56_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT56_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT56_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 592 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT56_WIDTH         56
# define INT56_WIDTH          UINT56_WIDTH
# define UINT_LEAST56_WIDTH   UINT56_WIDTH
# define INT_LEAST56_WIDTH    UINT_LEAST56_WIDTH
# define UINT_FAST56_WIDTH    UINT56_WIDTH
# define INT_FAST56_WIDTH     UINT_FAST56_WIDTH
# undef __UINT_LEAST32_WIDTH
# define __UINT_LEAST32_WIDTH UINT56_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT56_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH  UINT56_WIDTH
#endif /* __STDC_VERSION__ */
# 605 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT56_TYPE__ */
# 606 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT48_TYPE__
# define INT48_MAX           INT48_C(140737488355327)
# define INT48_MIN         (-INT48_C(140737488355327)-1)
# define UINT48_MAX         UINT48_C(281474976710655)
# define INT_LEAST48_MIN     INT48_MIN
# define INT_LEAST48_MAX     INT48_MAX
# define UINT_LEAST48_MAX   UINT48_MAX
# define INT_FAST48_MIN      INT48_MIN
# define INT_FAST48_MAX      INT48_MAX
# define UINT_FAST48_MAX    UINT48_MAX

# undef __INT_LEAST32_MIN
# define __INT_LEAST32_MIN   INT48_MIN
# undef __INT_LEAST32_MAX
# define __INT_LEAST32_MAX   INT48_MAX
# undef __UINT_LEAST32_MAX
# define __UINT_LEAST32_MAX UINT48_MAX
# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT48_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT48_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT48_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT48_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT48_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT48_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 641 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#define UINT48_WIDTH         48
#define INT48_WIDTH          UINT48_WIDTH
#define UINT_LEAST48_WIDTH   UINT48_WIDTH
#define INT_LEAST48_WIDTH    UINT_LEAST48_WIDTH
#define UINT_FAST48_WIDTH    UINT48_WIDTH
#define INT_FAST48_WIDTH     UINT_FAST48_WIDTH
#undef __UINT_LEAST32_WIDTH
#define __UINT_LEAST32_WIDTH UINT48_WIDTH
# undef __UINT_LEAST16_WIDTH
#define __UINT_LEAST16_WIDTH UINT48_WIDTH
# undef __UINT_LEAST8_WIDTH
#define __UINT_LEAST8_WIDTH  UINT48_WIDTH
#endif /* __STDC_VERSION__ */
# 654 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT48_TYPE__ */
# 655 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT40_TYPE__
# define INT40_MAX           INT40_C(549755813887)
# define INT40_MIN         (-INT40_C(549755813887)-1)
# define UINT40_MAX         UINT40_C(1099511627775)
# define INT_LEAST40_MIN     INT40_MIN
# define INT_LEAST40_MAX     INT40_MAX
# define UINT_LEAST40_MAX   UINT40_MAX
# define INT_FAST40_MIN      INT40_MIN
# define INT_FAST40_MAX      INT40_MAX
# define UINT_FAST40_MAX    UINT40_MAX

# undef __INT_LEAST32_MIN
# define __INT_LEAST32_MIN   INT40_MIN
# undef __INT_LEAST32_MAX
# define __INT_LEAST32_MAX   INT40_MAX
# undef __UINT_LEAST32_MAX
# define __UINT_LEAST32_MAX UINT40_MAX
# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT40_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT40_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT40_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT40_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT40_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT40_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 690 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT40_WIDTH         40
# define INT40_WIDTH          UINT40_WIDTH
# define UINT_LEAST40_WIDTH   UINT40_WIDTH
# define INT_LEAST40_WIDTH    UINT_LEAST40_WIDTH
# define UINT_FAST40_WIDTH    UINT40_WIDTH
# define INT_FAST40_WIDTH     UINT_FAST40_WIDTH
# undef __UINT_LEAST32_WIDTH
# define __UINT_LEAST32_WIDTH UINT40_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT40_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH  UINT40_WIDTH
#endif /* __STDC_VERSION__ */
# 703 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT40_TYPE__ */
# 704 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT32_TYPE__
# define INT32_MAX           INT32_C(2147483647)
# define INT32_MIN         (-INT32_C(2147483647)-1)
# define UINT32_MAX         UINT32_C(4294967295)

# undef __INT_LEAST32_MIN
# define __INT_LEAST32_MIN   INT32_MIN
# undef __INT_LEAST32_MAX
# define __INT_LEAST32_MAX   INT32_MAX
# undef __UINT_LEAST32_MAX
# define __UINT_LEAST32_MAX UINT32_MAX
# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT32_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT32_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT32_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT32_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT32_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT32_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 733 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT32_WIDTH         32
# define INT32_WIDTH          UINT32_WIDTH
# undef __UINT_LEAST32_WIDTH
# define __UINT_LEAST32_WIDTH UINT32_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT32_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH  UINT32_WIDTH
#endif /* __STDC_VERSION__ */
# 742 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT32_TYPE__ */
# 743 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT_LEAST32_MIN
# define INT_LEAST32_MIN   __INT_LEAST32_MIN
# define INT_LEAST32_MAX   __INT_LEAST32_MAX
# define UINT_LEAST32_MAX __UINT_LEAST32_MAX
# define INT_FAST32_MIN    __INT_LEAST32_MIN
# define INT_FAST32_MAX    __INT_LEAST32_MAX
# define UINT_FAST32_MAX  __UINT_LEAST32_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 755 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT_LEAST32_WIDTH __UINT_LEAST32_WIDTH
# define INT_LEAST32_WIDTH  UINT_LEAST32_WIDTH
# define UINT_FAST32_WIDTH  __UINT_LEAST32_WIDTH
# define INT_FAST32_WIDTH   UINT_FAST32_WIDTH
#endif /* __STDC_VERSION__ */
# 760 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT_LEAST32_MIN */
# 761 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT24_TYPE__
# define INT24_MAX           INT24_C(8388607)
# define INT24_MIN         (-INT24_C(8388607)-1)
# define UINT24_MAX         UINT24_C(16777215)
# define INT_LEAST24_MIN     INT24_MIN
# define INT_LEAST24_MAX     INT24_MAX
# define UINT_LEAST24_MAX   UINT24_MAX
# define INT_FAST24_MIN      INT24_MIN
# define INT_FAST24_MAX      INT24_MAX
# define UINT_FAST24_MAX    UINT24_MAX

# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT24_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT24_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT24_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT24_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT24_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT24_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 790 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT24_WIDTH         24
# define INT24_WIDTH          UINT24_WIDTH
# define UINT_LEAST24_WIDTH   UINT24_WIDTH
# define INT_LEAST24_WIDTH    UINT_LEAST24_WIDTH
# define UINT_FAST24_WIDTH    UINT24_WIDTH
# define INT_FAST24_WIDTH     UINT_FAST24_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT24_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH  UINT24_WIDTH
#endif /* __STDC_VERSION__ */
# 801 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT24_TYPE__ */
# 802 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT16_TYPE__
#define INT16_MAX            INT16_C(32767)
#define INT16_MIN          (-INT16_C(32767)-1)
#define UINT16_MAX          UINT16_C(65535)

# undef __INT_LEAST16_MIN
# define __INT_LEAST16_MIN   INT16_MIN
# undef __INT_LEAST16_MAX
# define __INT_LEAST16_MAX   INT16_MAX
# undef __UINT_LEAST16_MAX
# define __UINT_LEAST16_MAX UINT16_MAX
# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT16_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT16_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT16_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 825 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT16_WIDTH         16
# define INT16_WIDTH          UINT16_WIDTH
# undef __UINT_LEAST16_WIDTH
# define __UINT_LEAST16_WIDTH UINT16_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH  UINT16_WIDTH
#endif /* __STDC_VERSION__ */
# 832 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT16_TYPE__ */
# 833 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT_LEAST16_MIN
# define INT_LEAST16_MIN   __INT_LEAST16_MIN
# define INT_LEAST16_MAX   __INT_LEAST16_MAX
# define UINT_LEAST16_MAX __UINT_LEAST16_MAX
# define INT_FAST16_MIN    __INT_LEAST16_MIN
# define INT_FAST16_MAX    __INT_LEAST16_MAX
# define UINT_FAST16_MAX  __UINT_LEAST16_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 845 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT_LEAST16_WIDTH __UINT_LEAST16_WIDTH
# define INT_LEAST16_WIDTH  UINT_LEAST16_WIDTH
# define UINT_FAST16_WIDTH  __UINT_LEAST16_WIDTH
# define INT_FAST16_WIDTH   UINT_FAST16_WIDTH
#endif /* __STDC_VERSION__ */
# 850 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT_LEAST16_MIN */
# 851 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3


#ifdef __INT8_TYPE__
# define INT8_MAX            INT8_C(127)
# define INT8_MIN          (-INT8_C(127)-1)
# define UINT8_MAX          UINT8_C(255)

# undef __INT_LEAST8_MIN
# define __INT_LEAST8_MIN    INT8_MIN
# undef __INT_LEAST8_MAX
# define __INT_LEAST8_MAX    INT8_MAX
# undef __UINT_LEAST8_MAX
# define __UINT_LEAST8_MAX  UINT8_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 868 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT8_WIDTH         8
# define INT8_WIDTH          UINT8_WIDTH
# undef __UINT_LEAST8_WIDTH
# define __UINT_LEAST8_WIDTH UINT8_WIDTH
#endif /* __STDC_VERSION__ */
# 873 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT8_TYPE__ */
# 874 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifdef __INT_LEAST8_MIN
# define INT_LEAST8_MIN   __INT_LEAST8_MIN
# define INT_LEAST8_MAX   __INT_LEAST8_MAX
# define UINT_LEAST8_MAX __UINT_LEAST8_MAX
# define INT_FAST8_MIN    __INT_LEAST8_MIN
# define INT_FAST8_MAX    __INT_LEAST8_MAX
# define UINT_FAST8_MAX  __UINT_LEAST8_MAX

/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 886 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define UINT_LEAST8_WIDTH __UINT_LEAST8_WIDTH
# define INT_LEAST8_WIDTH  UINT_LEAST8_WIDTH
# define UINT_FAST8_WIDTH  __UINT_LEAST8_WIDTH
# define INT_FAST8_WIDTH   UINT_FAST8_WIDTH
#endif /* __STDC_VERSION__ */
# 891 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __INT_LEAST8_MIN */
# 892 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* Some utility macros */
#define  __INTN_MIN(n)  __stdint_join3( INT, n, _MIN)
#define  __INTN_MAX(n)  __stdint_join3( INT, n, _MAX)
#define __UINTN_MAX(n)  __stdint_join3(UINT, n, _MAX)
#define  __INTN_C(n, v) __stdint_join3( INT, n, _C(v))
#define __UINTN_C(n, v) __stdint_join3(UINT, n, _C(v))

/* C99 7.18.2.4 Limits of integer types capable of holding object pointers. */
/* C99 7.18.3 Limits of other integer types. */

#define  INTPTR_MIN  (-__INTPTR_MAX__-1)
#define  INTPTR_MAX    __INTPTR_MAX__
#define UINTPTR_MAX   __UINTPTR_MAX__
#define PTRDIFF_MIN (-__PTRDIFF_MAX__-1)
#define PTRDIFF_MAX   __PTRDIFF_MAX__
#define    SIZE_MAX      __SIZE_MAX__

/* C2x 7.20.2.4 Width of integer types capable of holding object pointers. */
/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 914 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
/* NB: The C standard requires that these be the same value, but the compiler
   exposes separate internal width macros. */
#define INTPTR_WIDTH  __INTPTR_WIDTH__
#define UINTPTR_WIDTH __UINTPTR_WIDTH__
#endif
# 919 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* ISO9899:2011 7.20 (C11 Annex K): Define RSIZE_MAX if __STDC_WANT_LIB_EXT1__
 * is enabled. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 923 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#define   RSIZE_MAX            (SIZE_MAX >> 1)
#endif
# 925 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* C99 7.18.2.5 Limits of greatest-width integer types. */
#define  INTMAX_MIN (-__INTMAX_MAX__-1)
#define  INTMAX_MAX   __INTMAX_MAX__
#define UINTMAX_MAX  __UINTMAX_MAX__

/* C2x 7.20.2.5 Width of greatest-width integer types. */
/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 935 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
/* NB: The C standard requires that these be the same value, but the compiler
   exposes separate internal width macros. */
#define INTMAX_WIDTH __INTMAX_WIDTH__
#define UINTMAX_WIDTH __UINTMAX_WIDTH__
#endif
# 940 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* C99 7.18.3 Limits of other integer types. */
#define SIG_ATOMIC_MIN __INTN_MIN(__SIG_ATOMIC_WIDTH__)
#define SIG_ATOMIC_MAX __INTN_MAX(__SIG_ATOMIC_WIDTH__)
#ifdef __WINT_UNSIGNED__
# define WINT_MIN       __UINTN_C(__WINT_WIDTH__, 0)
# define WINT_MAX       __UINTN_MAX(__WINT_WIDTH__)
#else
# 948 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# define WINT_MIN       __INTN_MIN(__WINT_WIDTH__)
# define WINT_MAX       __INTN_MAX(__WINT_WIDTH__)
#endif
# 951 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#ifndef WCHAR_MAX
# define WCHAR_MAX __WCHAR_MAX__
#endif
# 955 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#ifndef WCHAR_MIN
#if 0 /* disabled by -frewrite-includes */
# if __WCHAR_MAX__ == __INTN_MAX(__WCHAR_WIDTH__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 957 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define WCHAR_MIN __INTN_MIN(__WCHAR_WIDTH__)
# else
# 959 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#  define WCHAR_MIN __UINTN_C(__WCHAR_WIDTH__, 0)
# endif
# 961 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif
# 962 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

/* 7.18.4.2 Macros for greatest-width integer constants. */
#define  INTMAX_C(v) __int_c(v,  __INTMAX_C_SUFFIX__)
#define UINTMAX_C(v) __int_c(v, __UINTMAX_C_SUFFIX__)

/* C2x 7.20.3.x Width of other integer types. */
/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 971 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#define PTRDIFF_WIDTH    __PTRDIFF_WIDTH__
#define SIG_ATOMIC_WIDTH __SIG_ATOMIC_WIDTH__
#define SIZE_WIDTH       __SIZE_WIDTH__
#define WCHAR_WIDTH      __WCHAR_WIDTH__
#define WINT_WIDTH       __WINT_WIDTH__
#endif
# 977 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3

#endif /* __STDC_HOSTED__ */
# 979 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
#endif /* __CLANG_STDINT_H */
# 980 "/usr/lib/llvm-17/lib/clang/17/include/stdint.h" 3
# 6 "colour_convert_int.c" 2

typedef uint32_t DWORD; // DWORD = unsigned 32 bit value
typedef uint16_t WORD;  // WORD = unsigned 16 bit value
typedef uint8_t BYTE;   // BYTE = unsigned 8 bit value

#define K 8

// #include "pico/stdlib.h"
// #include "pico/float.h"

// #pragma pack(push, 1)
// typedef struct {
//     unsigned char signature[2];
//     unsigned int fileSize;
//     unsigned short reserved1;
//     unsigned short reserved2;
//     unsigned int dataOffset;
// } BitmapFileHeader;
// #pragma pack(pop)

#pragma pack(push, 1)

typedef struct tagBITMAPFILEHEADER {
    WORD bfType;      // specifies the file type
    DWORD bfSize;     // specifies the size in bytes of the bitmap file
    WORD bfReserved1; // reserved; must be 0
    WORD bfReserved2; // reserved; must be 0
    DWORD bfOffBits;  // specifies the offset in bytes from the bitmapfileheader
                      // to the bitmap bits
} BITMAPFILEHEADER;

#pragma pack(pop)

#pragma pack(push, 1)

typedef struct tagBITMAPINFOHEADER {
    DWORD biSize;        // specifies the number of bytes required by the struct
    uint32_t biWidth;    // specifies width in pixels
    uint32_t biHeight;   // specifies height in pixels
    WORD biPlanes;       // specifies the number of color planes, must be 1
    WORD biBitCount;     // specifies the number of bits per pixel
    DWORD biCompression; // specifies the type of compression
    DWORD biSizeImage;   // size of image in bytes
    uint32_t biXPelsPerMeter; // number of pixels per meter in x axis
    uint32_t biYPelsPerMeter; // number of pixels per meter in y axis
    DWORD biClrUsed;          // number of colors used by the bitmap
    DWORD biClrImportant;     // number of colors that are important
} BITMAPINFOHEADER;

#pragma pack(pop)

uint16_t rgb_clamp(int x) {

    // // Clamp the RGB values to 0-255 range
    uint16_t r = (x < 0) ? 0 : (x > 255) ? 255 : (uint16_t)x;

    return r;
}

BYTE y_clamp(uint8_t x) {
    // // Clamp the RGB values to 0-255 range
    WORD r = (x < 16) ? 16 : (x > 255) ? 235 : (WORD)x;

    return r;
}

BYTE c_clamp(uint8_t x) {
    // // Clamp the RGB values to 0-255 range
    WORD r = (x < 16) ? 16 : (x > 255) ? 240 : x;

    return r;
}

void rgbToCmyk(BYTE redtl, BYTE greentl, BYTE bluetl, BYTE redtr, BYTE greentr,
               BYTE bluetr, BYTE redbl, BYTE greenbl, BYTE bluebl, BYTE redbr,
               BYTE greenbr, BYTE bluebr, unsigned char *Ytl,
               unsigned char *Ytr, unsigned char *Ybl, unsigned char *Ybr,
               unsigned char *CB, unsigned char *CR) {

    // YCC_pixel *YCC = malloc(sizeof(YCC_pixel));

    // int R = red; /// 255.0;
    // int G = green; /// 255.0;
    // int B = blue; /// 255.0;
    int Rtl = (int)redtl;
    int Gtl = (int)greentl;
    int Btl = (int)bluetl;
    int Rtr = (int)redtr;
    int Gtr = (int)greentr;
    int Btr = (int)bluetr;
    int Rbl = (int)redbl;
    int Gbl = (int)greenbl;
    int Bbl = (int)bluebl;
    int Rbr = (int)redbr;
    int Gbr = (int)greenbr;
    int Bbr = (int)bluebr;

    int y_tl = (16 << K) + (66 * Rtl) + (129 * Gtl) + (25 * Btl);
    int y_tr = (16 << K) + (66 * Rtr) + (129 * Gtr) + (25 * Btr);
    int y_bl = ((16 << K) + (66 * Rbl) + (129 * Gbl) + (25 * Bbl));
    int y_br = ((16 << K) + (66 * Rbr) + (129 * Gbr) + (25 * Bbr));

    int cb_tl = (128 << K) - (38 * Rtl) - (74 * Gtl) + (112 * Btl);
    int cr_tl = (128 << K) + (112 * Rtl) - (94 * Gtl) - (18 * Btl);

    int cb_tr = (128 << K) - (38 * Rtr) - (74 * Gtr) + (112 * Btr);
    int cr_tr = (128 << K) + (112 * Rtr) - (94 * Gtr) - (18 * Btr);

    int cb_bl = (128 << K) - (38 * Rbl) - (74 * Gbl) + (112 * Bbl);
    int cr_bl = (128 << K) + (112 * Rbl) - (94 * Gbl) - (18 * Bbl);

    int cb_br = (128 << K) - (38 * Rbr) - (74 * Gbr) + (112 * Bbr);
    int cr_br = (128 << K) + (112 * Rbr) - (94 * Gbr) - (18 * Bbr);

    // R =  (DWORD)(16.0 + 0.257 * (DWORD) R + 0.504 * (DWORD) G + 0.098 *
    // (DWORD) B); G =  (DWORD)(128 - 0.148 * (DWORD) R - 0.291 * (DWORD) G +
    // 0.439 * (DWORD) B); B =  (DWORD)(128 + 0.439 * (DWORD) R - 0.368 *
    // (DWORD) G - 0.071 * (DWORD) B);

    // Calculate Average
    int cba = (int)((cb_tl + cb_tr + cb_bl + cb_br) >> 2);
    int cra = (int)((cr_tl + cr_tr + cr_bl + cr_br) >> 2);

    *Ytl = (uint8_t)((y_tl + (1 << (K - 1))) >> K);
    *Ytr = (uint8_t)((y_tr + (1 << (K - 1))) >> K);
    *Ybl = (uint8_t)((y_bl + (1 << (K - 1))) >> K);
    *Ybr = (uint8_t)((y_br + (1 << (K - 1))) >> K);

    *CB = (uint8_t)((cba + (1 << (K - 1))) >> K);
    *CR = (uint8_t)((cra + (1 << (K - 1))) >> K);

    // // // Clamp the values to xxx-255 range
    // BYTE Rb = (R < 16) ? 16 : (R > 255) ? 235 : (BYTE)R;
    // BYTE Gb = (G < 16) ? 16 : (B > 255) ? 240 : (BYTE)B;
    // BYTE Bb = (B < 16) ? 16 : (G > 255) ? 240 : (BYTE)G;

    // Y = &Rb;
    // CB = &Gb;
    // CR = &Bb;

    // *Y = Rb;
    // *CB = Gb;
    // *CR = Bb;
    // return YCC
}

void YCbCrTorgb(unsigned char Ytl, unsigned char Ytr, unsigned char Ybl,
                unsigned char Ybr, unsigned char CB, unsigned char CR,
                unsigned char *red, unsigned char *green, unsigned char *blue,
                unsigned char *red1, unsigned char *green1,
                unsigned char *blue1, unsigned char *red2,
                unsigned char *green2, unsigned char *blue2,
                unsigned char *red3, unsigned char *green3,
                unsigned char *blue3) {

    // float Yf = Y; /// 255.0;
    // float CBf = CB; /// 255.0;
    // float CRf = CR; /// 255.0;
    WORD Yf = (WORD)Ytl;
    WORD CBf = (WORD)CB;
    WORD CRf = (WORD)CR;

    // Convert YCbCr to RGB

    int r = rgb_clamp((74 * (int)(Yf - 16)) + (102 * (int)(CRf - 128)));
    int g = rgb_clamp((74 * (int)(Yf - 16)) - (52 * (int)(CRf - 128))) -
            (25 * (int)(CBf - 128));
    int b = rgb_clamp((74 * (int)(Yf - 16)) + (129 * (int)(CBf - 128)));

    Yf = (WORD)Ytr;
    int r1 = rgb_clamp((74 * (int)(Yf - 16)) + (102 * (int)(CRf - 128)));
    int g1 = rgb_clamp((74 * (int)(Yf - 16)) - (52 * (int)(CRf - 128)) -
                       (25 * (int)(CBf - 128)));
    int b1 = rgb_clamp((74 * (int)(Yf - 16)) + (129 * (int)(CBf - 128)));

    Yf = (WORD)Ybl;
    int r2 = rgb_clamp((74 * (int)(Yf - 16)) + (102 * (int)(CRf - 128)));
    int g2 = rgb_clamp((74 * (int)(Yf - 16)) - (52 * (int)(CRf - 128)) -
                       (25 * (int)(CBf - 128)));
    int b2 = rgb_clamp((74 * (int)(Yf - 16)) + (129 * (int)(CBf - 128)));

    Yf = (WORD)Ybr;
    int r3 = rgb_clamp((74 * (int)(Yf - 16)) + (102 * (int)(CRf - 128)));
    int g3 = rgb_clamp((74 * (int)(Yf - 16)) - (52 * (int)(CRf - 128)) -
                       (25 * (int)(CBf - 128)));
    int b3 = rgb_clamp((74 * (int)(Yf - 16)) + (129 * (int)(CBf - 128)));

    *red = (BYTE)((r + (1 << (K - 1))) >> K);
    *green = (BYTE)((g + (1 << (K - 1))) >> K);
    *blue = (BYTE)((b + (1 << (K - 1))) >> K);

    *red1 = (BYTE)(((r1 + (1 << (K - 1))) >> K));
    *green1 = (BYTE)((g1 + (1 << (K - 1))) >> K);
    *blue1 = (BYTE)((b1 + (1 << (K - 1))) >> K);

    *red2 = (BYTE)((r2 + (1 << (K - 1))) >> K);
    *green2 = (BYTE)((g2 + (1 << (K - 1))) >> K);
    *blue2 = (BYTE)((b2 + (1 << (K - 1))) >> K);

    *red3 = (BYTE)((r3 + (1 << (K - 1))) >> K);
    *green3 = (BYTE)((g3 + (1 << (K - 1))) >> K);
    *blue3 = (BYTE)((b3 + (1 << (K - 1))) >> K);
    // *red = red1
    // *green = green1;
    // *blue = blue1;

    // *red = std::clamp(Yf, 0, UINT8_MAX);
    // *green = std::clamp(CBf, 0, UINT8_MAX);
    // *blue = std::clamp(CRf, 0, UINT8_MAX);
    // printf("%d", r);
    // printf("%d", g);
    // printf("%d", b);

    // *red = r;
    // *green = g;
    // *blue = b;

    // *red = r;
    // *green = g;
    // *blue = b;
}

unsigned char *LoadBitmapFile(FILE *filePtr, BITMAPINFOHEADER *bitmapInfoHeader,
                              BITMAPFILEHEADER *bitmapFileHeader) {
    // FILE *filePtr;  //our file pointer
    // BITMAPFILEHEADER bitmapFileHeader;  //our bitmap file header
    unsigned char *bitmapImage; // store image data
    // unsigned char *bitmapImageOut;
    uint32_t imageIdx = 0; // image index counter
    WORD tempRGB;          // our swap variable

    // //open file in read binary mode
    // filePtr = fopen(filename,"rb");
    // if (filePtr == NULL)
    //     return NULL;

    // read the bitmap file header
    fread(bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, filePtr);

    // verify that this is a .BMP file by checking bitmap id
    if (bitmapFileHeader->bfType != 0x4D42) {
        fclose(filePtr);
        return NULL;
    }

    // read the bitmap info header
    fread(bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, filePtr);

    // Check if the BMP uses 24-bit RGB format
    if (bitmapInfoHeader->biBitCount != 24) {
        printf("Error: Only 24-bit RGB BMP images are supported.\n");
        fclose(filePtr);
        // fclose(output_file);
        return NULL;
    }

    // move file pointer to the beginning of bitmap data
    fseek(filePtr, bitmapFileHeader->bfOffBits, SEEK_SET);
    // fseek(filePtr, bitmapFileHeaderOut->bfOffBits, SEEK_SET);

    // allocate enough memory for the bitmap image data
    //  printf("size: %zu\n",bitmapInfoHeader->biSizeImage);
    bitmapImage = (unsigned char *)malloc(bitmapInfoHeader->biSizeImage);
    // printf("size: %zu\n",sizeof(bitmapImage));
    // bitmapImageOut = (unsigned char*)malloc(bitmapInfoHeader->biSizeImage);
    // verify memory allocation
    if (!bitmapImage) {
        free(bitmapImage);
        fclose(filePtr);
        return NULL;
    }

    // read in the bitmap image data
    fread(bitmapImage, bitmapInfoHeader->biSizeImage, 1, filePtr);

    // make sure bitmap image data was read
    if (bitmapImage == NULL) {
        fclose(filePtr);
        return NULL;
    }

    return bitmapImage;
}

int main() {

    BITMAPINFOHEADER bitmapInfoHeader;
    BITMAPFILEHEADER bitmapFileHeader;
    unsigned char *bitmapData;
    FILE *inputFile, *outputFile;
    // BitmapFileHeader fileHeader;
    // BitmapInfoHeader infoHeader;
    unsigned char *imageData;
    unsigned char *outputData;
    DWORD newImageSize;
    uint32_t index, index2, outputIndex, outputIndex2, i, j;

    // Open input file
    inputFile = fopen("../input.bmp", "rb");
    if (inputFile == NULL) {
        printf("Failed to open input file.\n");

        return 1;
    }

    bitmapData =
        LoadBitmapFile(inputFile, &bitmapInfoHeader, &bitmapFileHeader);

    uint32_t width = bitmapInfoHeader.biWidth;
    uint32_t height = bitmapInfoHeader.biHeight;

    newImageSize = (width * height * 6); // 6pix
    // printf("size: %d\n",newImageSize);

    // outputData = (unsigned char*)malloc(bitmapInfoHeader.biSizeImage);
    outputData = (unsigned char *)malloc(newImageSize);
    imageData = (unsigned char *)malloc(bitmapInfoHeader.biSizeImage);
    // printf("biHeight: %d\n",height);
    // printf("biWidth: %d\n",width);
    // printf("size: %lu\n",&bitmapData);
    // printf("size: %lu\n",sizeof(outputData));
    // printf("size: %lu\n",bitmapInfoHeader.biSizeImage);

    FILE *ppm_file = fopen("../output_YCC_int.ppm", "wb");
    if (!ppm_file) {
        printf("Error: Could not create ppm");
        fclose(ppm_file);
        return 1;
    }
    // const BYTE *string_write = ("P6\n%d %d\n%d\n", width, height, 255);
    // Write the PPM header
    fseek(ppm_file, 0, SEEK_SET);
    fprintf(ppm_file, "P6\n%u %u\n%d\n", width, height, 255);
    // fprintf(ppm_file, "P6\n%d %d\n%d\n", width, height, 255);
    // fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    // Perform RGB to YCC conversion
    // for (i = bitmapInfoHeader.biHeight -2; i >= 0 ; i -=2) {
    for (i = 0; i < bitmapInfoHeader.biHeight - 2; i += 2) {
        for (j = 0; j < bitmapInfoHeader.biWidth - 2; j += 2) {
            index = (i * bitmapInfoHeader.biWidth + j) * (3); // 3x2 pixels
                                                              // worth
            index2 = ((i + 1) * bitmapInfoHeader.biWidth + j) *
                     (3); // 3x2 pixels worth
            outputIndex = (i * bitmapInfoHeader.biWidth + j) * 6; // 2 *
                                                                  // index;//
            // outputIndex2 = (i * bitmapInfoHeader.biWidth + j) * 6;

            // printf("lo;\n");

            unsigned char redtl = bitmapData[index];
            unsigned char greentl = bitmapData[index + 1];
            unsigned char bluetl = bitmapData[index + 2];

            unsigned char redtr = bitmapData[index + 3];
            unsigned char greentr = bitmapData[index + 4];
            unsigned char bluetr = bitmapData[index + 5];

            unsigned char redbl = bitmapData[index2];
            unsigned char greenbl = bitmapData[index2 + 1];
            unsigned char bluebl = bitmapData[index2 + 2];

            unsigned char redbr = bitmapData[index2 + 3];
            unsigned char greenbr = bitmapData[index2 + 4];
            unsigned char bluebr = bitmapData[index2 + 5];

            // printf("2;\n");
            rgbToCmyk(
                redtl, greentl, bluetl, redtr, greentr, bluetr, redbl, greenbl,
                bluebl, redbr, greenbr, bluebr, &outputData[outputIndex],
                &outputData[outputIndex + 1], &outputData[outputIndex + 2],
                &outputData[outputIndex + 3], &outputData[outputIndex + 4],
                &outputData[outputIndex + 5]);
            // printf("3;\n");

            imageData[index] = outputData[outputIndex];
            imageData[index + 1] = outputData[outputIndex + 4];
            imageData[index + 2] = outputData[outputIndex + 5];

            imageData[index + 3] = outputData[outputIndex + 1];
            imageData[index + 4] = outputData[outputIndex + 4];
            imageData[index + 5] = outputData[outputIndex + 5];

            imageData[index2] = outputData[outputIndex + 2];
            imageData[index2 + 1] = outputData[outputIndex + 4];
            imageData[index2 + 2] = outputData[outputIndex + 5];

            imageData[index2 + 3] = outputData[outputIndex + 3];
            imageData[index2 + 4] = outputData[outputIndex + 4];
            imageData[index2 + 5] = outputData[outputIndex + 5];

            // // // // Write the YCC pixel to the PPM file
            // fwrite(&outputData[outputIndex], sizeof(BYTE), 1, ppm_file);
            // //(outputData[outputIndex], ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fwrite(&outputData[outputIndex + 1], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fseek(ppm_file, 3*height, SEEK_CUR);

            // fwrite(&outputData[outputIndex + 2], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fwrite(&outputData[outputIndex + 3], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 4], sizeof(BYTE), 1, ppm_file);
            // fwrite(&outputData[outputIndex + 5], sizeof(BYTE), 1, ppm_file);

            // fseek(ppm_file, -3*height, SEEK_CUR);
            // //-sizeof(BYTE)*((i+1)*height); fseek(fInput, -sizeof(rgb_pixel)
            // * width, SEEK_CUR);

            // printf("ok");
        }
    }
    printf("ok");
    fwrite(imageData, bitmapInfoHeader.biSizeImage, 1, ppm_file);

    // // RGBtoYCC(bitmapData, outputData, bitmapInfoHeader.biWidth,
    // bitmapInfoHeader.biHeight);
    // // Create output file
    // outputFile = fopen("../output.bmp", "wb");
    // if (outputFile == NULL) {
    //     printf("Failed to create output file.\n");
    //     return 1;
    // }

    // Write file and info headers
    // fwrite(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, outputFile);
    // fwrite(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, outputFile);

    // // Write output image data
    // fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    // fwrite(outputData, bitmapInfoHeader.biSizeImage, 1, outputFile);

    // Cleanup
    fclose(ppm_file);
    // fclose(inputFile);
    // fclose(outputFile);
    // free(bitmapData);
    // free(outputData);

    printf("Conversion to YCBCR complete.\n");

    /* ------------------------------------------------------------------ */
    FILE *inputFile2;
    unsigned char *new_output_data;

    // Open input file
    inputFile2 = fopen("../output_YCC.ppm", "rb");
    if (inputFile2 == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    // inputFile2 = fopen("../input.bmp", "rb");
    // if (inputFile == NULL) {
    //     printf("Failed to open input file.\n");
    //     return 1;
    // }

    // bitmapData =
    // LoadBitmapFile(inputFile2,&bitmapInfoHeader,&bitmapFileHeader);

    // width = bitmapInfoHeader.biWidth;
    // height = bitmapInfoHeader.biHeight;
    // free(bitmapData);
    // bitmapData = (unsigned char*)malloc(sizeof(newImageSize));
    // outputData = (unsigned char*)malloc(sizeof(newImageSize));

    // bitmapData = (unsigned char*)malloc(newImageSize);
    // outputData = (unsigned char*)malloc(newImageSize);
    // outputData = (unsigned char*)malloc(height * width * 3);

    // printf("biHeight: %d\n",height);
    // printf("biWidth: %d\n",width);
    // printf("size: %lu\n",bitmapInfoHeader.biSizeImage);
    // char id[3] = {0, 0, 0};
    // long vals[5];
    // int count = 0; /* # of vals so far */
    // char *buf = malloc(256);

    // fgets(buf, 256, inputFile);
    // id[0] = buf[0];
    // id[1] = buf[1];
    // count = sscanf(buf + 2, "%d %d %d",
    // &vals[0], &vals[1], &vals[2]);
    // printf("Got %d vals \n", count);
    // printf("%4d %4d %4d \n", vals[0], vals[1], vals[2]);

    // printf("color: %d\n",vals[2]);

    // Read and validate the PPM header

    new_output_data = (unsigned char *)malloc(height * width * 3);

    char magic_number[3];
    fscanf(inputFile2, "%2s", magic_number);
    // fscanf(inputFile, "%s",magic_number);
    printf("mm1: %2s \n", magic_number);
    // printf("mm2: %s\n",(char) magic_number[1]);
    if (magic_number[0] != 'P' || magic_number[1] != '6') {
        printf("Error: magicnum not a valid PPM file.\n");
        fclose(inputFile2);
        return 1;
    }

    int max_colour;
    int wid;
    int ht;
    fscanf(inputFile2, "%d %d %d", &wid, &ht, &max_colour);
    fgetc(inputFile2); // Consume newline character

    printf("color: %d \n", max_colour);

    printf("biHeight: %d \n", ht);
    printf("biWidth: %d \n", wid);
    // Check if the PPM uses 8-bit per color channel
    if ((int)max_colour != 255) {
        printf("Error: Only PPM files with 8-bit color depth are supported.\n");
        fclose(inputFile2);
        return 1;
    }
    printf("currpos: %d \n", (int)ftell(inputFile2));
    int header_size = ftell(inputFile2);
    fseek(inputFile2, ftell(inputFile2), SEEK_SET);
    fread(new_output_data, 1, width * height * 3, inputFile2);

    outputFile = fopen("../RGB_Output_int.bmp", "wb");
    if (outputFile == NULL) {
        printf("Failed to create output file.\n");
        return 1;
    }
    // v
    // Perform YCC to RGB conversion
    for (i = 0; i < height - 2; i += 2) {
        // for (i = height -2; i >= 1 ; i -=2) {
        for (j = 0; j + 2 < width; j += 2) {
            index = (i * width + j) * 6;
            outputIndex = (i * width + j) * 3;
            outputIndex2 = ((i + 1) * width + j) * 3;

            // BYTE Ytl  =  outputData[index];
            // BYTE Ytr  =  outputData[index -1];
            // BYTE Ybl  =  outputData[index -2];
            // BYTE Ybr  =  outputData[index -3];
            // BYTE CB = outputData[index -4];
            // BYTE CR = outputData[index -5];
            // BYTE Ytl  =  outputData[index];
            // BYTE Ytr  =  outputData[index +1];
            // BYTE Ybl  =  outputData[index +2];
            // BYTE Ybr  =  outputData[index +3];
            // BYTE CB = outputData[index +4];
            // BYTE CR = outputData[index +5];
            // BYTE Ytl  =  outputData[index-5];
            // BYTE Ytr  =  outputData[index -4];
            // BYTE Ybl  =  outputData[index -3];
            // BYTE Ybr  =  outputData[index -2];
            // BYTE CB = outputData[index -1];
            // BYTE CR = outputData[index ];

            // BYTE Ytl  =  imageData[outputIndex -5];
            // BYTE Ytr  =  imageData[outputIndex -4];
            // BYTE Ybl  =  imageData[outputIndex -3];
            // BYTE Ybr  =  imageData[outputIndex -2];
            // BYTE CB = imageData[outputIndex -1];
            // BYTE CR = imageData[outputIndex ];

            // BYTE Ytl  =  imageData[outputIndex ];
            // BYTE Ytr  =  imageData[outputIndex -1];
            // BYTE Ybl  =  imageData[outputIndex -2];
            // BYTE Ybr  =  imageData[outputIndex -3];
            // BYTE CB = imageData[outputIndex -4];
            // BYTE CR = imageData[outputIndex -5];
            BYTE Ytl = imageData[outputIndex];
            BYTE Ytr = imageData[outputIndex + 3];
            BYTE Ybl = imageData[outputIndex2];
            BYTE Ybr = imageData[outputIndex + 3];
            BYTE CB = imageData[outputIndex + 1];
            BYTE CR = imageData[outputIndex + 2];

            // unsigned char Y =  fgetc(inputFile);
            // unsigned char CR = fgetc(inputFile);
            // unsigned char CB = fgetc(inputFile);

            YCbCrTorgb(Ytl, Ytr, Ybl, Ybr, CB, CR,
                       &new_output_data[outputIndex],
                       &new_output_data[outputIndex + 1],
                       &new_output_data[outputIndex + 2],
                       &new_output_data[outputIndex + 3],
                       &new_output_data[outputIndex + 4],
                       &new_output_data[outputIndex + 5],
                       &new_output_data[outputIndex2],
                       &new_output_data[outputIndex2 + 1],
                       &new_output_data[outputIndex2 + 2],
                       &new_output_data[outputIndex2 + 3],
                       &new_output_data[outputIndex2 + 4],
                       &new_output_data[outputIndex2 + 5]);

            // fwrite(outputData[outputIndex + 1], sizeof(BYTE), 1, output);
            // fwrite(outputData[outputIndex + 4], sizeof(BYTE), 1, output);
            // fwrite(outputData[outputIndex + 5], sizeof(BYTE), 1, output);

            // fseek(output, height, SEEK_CUR);
        }
    }

    // RGBtoYCC(bitmapData, outputData, bitmapInfoHeader.biWidth,
    // bitmapInfoHeader.biHeight); Create output file uint32_t tempRGB=0; int
    // imageIdx;
    // // swap the R and B values to get RGB (bitmap is BGR)
    // for (int imageIdx = 0;imageIdx < height*width*3;imageIdx+=3){
    //     // printf("star\n");
    //     tempRGB = new_output_data[imageIdx];
    //     new_output_data[imageIdx] = new_output_data[imageIdx + 2];
    //     new_output_data[imageIdx + 2] = tempRGB;
    //     // printf("temprgb: %d\n", tempRGB);
    // }

    // Write file and info headers
    fseek(outputFile, 0, SEEK_SET);
    fwrite(&bitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, outputFile);
    fwrite(&bitmapInfoHeader, sizeof(BITMAPINFOHEADER), 1, outputFile);

    // Write output image data
    fseek(outputFile, bitmapFileHeader.bfOffBits, SEEK_SET);
    fwrite(new_output_data, width * height * 3, 1, outputFile);

    // Cleanup
    fclose(inputFile);
    fclose(inputFile2);
    fclose(outputFile);
    free(bitmapData);
    free(outputData);
    free(new_output_data);
    free(imageData);

    printf("Conversion to RGB complete.\n");

    return 0;
}

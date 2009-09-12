/*
 * Error functions
 *
 * Copyright (c) 2006-2009, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <types.h>

#include <liberror.h>

#include <stdio.h>

#include "libvmdk_error.h"

#if !defined( HAVE_LOCAL_LIBVMDK )

/* Free an error and its elements
 */
void libvmdk_error_free(
      libvmdk_error_t **error )
{
	liberror_error_free(
	 (liberror_error_t **) error );
}

/* Prints a descriptive string of the error to the stream
 * Returns the amount of printed characters if successful or -1 on error
 */
int libvmdk_error_fprint(
     libvmdk_error_t *error,
     FILE *stream )
{
	return( liberror_error_fprint(
	         (liberror_error_t *) error,
	         stream ) );
}

/* Prints a descriptive string of the error to the string
 * Returns the amount of printed characters if successful or -1 on error
 */
int libvmdk_error_sprint(
     libvmdk_error_t *error,
     char *string,
     size_t size )
{
	return( liberror_error_sprint(
	         (liberror_error_t *) error,
	         string,
	         size ) );
}

/* Prints a backtrace of the error to the stream
 * Returns the amount of printed characters if successful or -1 on error
 */
int libvmdk_error_backtrace_fprint(
     libvmdk_error_t *error,
      FILE *stream )
{
	return( liberror_error_backtrace_fprint(
	         (liberror_error_t *) error,
	         stream ) );
}

/* Prints a backtrace of the error to the string
 * Returns the amount of printed characters if successful or -1 on error
 */
int libvmdk_error_backtrace_sprint(
     libvmdk_error_t *error,
     char *string,
     size_t size )
{
	return( liberror_error_backtrace_sprint(
	         (liberror_error_t *) error,
	         string,
	         size ) );
}

#endif

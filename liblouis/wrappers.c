/* liblouis Braille Translation and Back-Translation Library

   Based on the Linux screenreader BRLTTY, copyright (C) 1999-2006 by
   The BRLTTY Team

   Copyright (C) 2004, 2005, 2006, 2009 ViewPlus Technologies, Inc.
   www.viewplus.com and JJB Software, Inc. www.jjb-software.com

   liblouis is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   liblouis is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this program. If not, see
   <http://www.gnu.org/licenses/>.

   Maintained by John J. Boyer john.boyer@abilitiessoft.com
   */

#include "louis.h"

int
other_translate (const char *trantab, const widechar
		 * inbuf,
		 int *inlen, widechar * outbuf, int *outlen,
		 char *typeform, char *spacing, int *outputPos, int
		 *inputPos, int *cursorPos, int mode)
{
  return 0;
}

int
other_backTranslate (const char *trantab, const widechar
		     * inbuf,
		     int *inlen, widechar * outbuf, int *outlen,
		     char *typeform, char *spacing, int *outputPos, int
		     *inputPos, int *cursorPos, int mode)
{
  return 0;
}

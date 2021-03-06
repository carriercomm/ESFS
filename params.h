/*
  This file is part of ESFS, a FUSE-based filesystem that supports snapshots.
  ESFS is Copyright (C) 2013 Elod Csirmaz
  <http://www.epcsirmaz.com/> <https://github.com/csirmaz>.

  ESFS is based on Big Brother File System (fuse-tutorial)
  Copyright (C) 2012 Joseph J. Pfeiffer, Jr., Ph.D. <pfeiffer@cs.nmsu.edu>,
  and was forked from it on 21 August 2013.
  Big Brother File System can be distributed under the terms of
  the GNU GPLv3. See the file COPYING.
  See also <http://www.cs.nmsu.edu/~pfeiffer/fuse-tutorial/>.

  Big Brother File System was derived from function prototypes found in
  /usr/include/fuse/fuse.h
  Copyright (C) 2001-2007  Miklos Szeredi <miklos@szeredi.hu>
  fuse.h is licensed under the LGPLv2.

  ESFS is free software: you can redistribute it and/or modify it under the
  terms of the GNU General Public License as published by the Free Software
  Foundation, either version 3 of the License, or (at your option) any later
  version.

  ESFS is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  You should have received a copy of the GNU General Public License along
  with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * NOTE: A Perl script is used to replace $ with esfs_ and $$ with ESFS_
 * in this file. To write $, use \$.
 */

/*
  There are a couple of symbols that need to be #defined before
  #including all the headers.
*/

#ifndef $$PARAMS_H_
#define $$PARAMS_H_


/** Debug level
 * * 0 = no logs
 * * 1 = important messages
 * * 2 = debug messages
 */
#define $$DEBUG 1


// For libraries
// -------------

/** The FUSE API has been changed a number of times.  So, our code
 *needs to define the version of the API that we assume.  As of this
 * writing, the most current API version is 26
 */
#define FUSE_USE_VERSION 26

//   Need this to get pwrite().  I have to use setvbuf() instead of
//     setlinebuf() later in consequence.
//   pwrite needs >= 500
//   pselect needs >= 600
//   nftw needs >= 500
// define _XOPEN_SOURCE 600
// Included in _GNU_SOURCE

//   Needed to get utimensat and AT_FDCWD
// define _ATFILE_SOURCE 1
// Included in _GNU_SOURCE

// Needed for O_NOATIME
#define _GNU_SOURCE 1

#endif

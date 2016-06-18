/*
  FUSE: Filesystem in Userspace
  Copyright (C) 2001-2007  Miklos Szeredi <miklos@szeredi.hu>

  This program can be distributed under the terms of the GNU LGPLv2.
  See the file COPYING.LIB.
*/

/* these definitions provide source compatibility to prior versions.
   Do not include this file directly! */
 /* BEGIN: Added by l00198597, 2012/4/10 FOR NTFS-3G*/

//#define off_t off64_t 
#define off_t __kernel_loff_t

 /* END: Added by l00198597, 2012/4/10 FOR NTFS-3G*/

size_t fuse_dirent_size(size_t namelen);

char *fuse_add_dirent(char *buf, const char *name, const struct stat *stbuf,
		      off_t off);


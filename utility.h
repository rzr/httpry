/*

  ----------------------------------------------------
  httpry - HTTP logging and information retrieval tool
  ----------------------------------------------------

  Copyright (c) 2005-2012 Jason Bittel <jason.bittel@gmail.com>

*/

#ifndef _HAVE_UTILITY_H
#define _HAVE_UTILITY_H

char *str_strip_whitespace(char *str);
char *str_tolower(char *str);
int str_compare(const char *str1, const char *str2);
int str_copy(char *str1, const char *str2, size_t len);
char *str_duplicate(const char *str);
unsigned int hash_str(char *key, unsigned int hashsize);

#endif /* ! _HAVE_UTILITY_H */

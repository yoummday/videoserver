/*
 * Base64 encoding/decoding (RFC1341)
 * Copyright (c) 2005, Jouni Malinen <j@w1.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of BSD
 * license.
 *
 * See README and COPYING for more details.
 */
#ifndef BASE64_H
#define base64_h
int Base64decode_len(const char *bufcoded);
int Base64encode_len(int len);
int Base64encode(char *encoded, const char *string, int len);
int Base64decode(char *bufplain, const char *bufcoded);
#endif /* BASE64_H */
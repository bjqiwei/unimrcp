/*
 * This file is part of the Sofia-SIP package
 *
 * Copyright (C) 2005 Nokia Corporation.
 *
 * Contact: Pekka Pessi <pekka.pessi@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

/**@ingroup test_msg
 *
 * @CFILE test_table.c
 * @brief Parser table used for testing.
 *
 * This file is automatically generated from <test_class.h> by msg_parser.awk.
 *
 * @author Pekka Pessi <Pekka.Pessi@nokia.com>
 *
 * @date Created: Wed Jan 22 19:03:21 EET 2003 ppessi
 */

#include "config.h"

#include <stddef.h>
#include <string.h>

#include "test_class.h"
#include "test_protos.h"
#include <sofia-sip/msg_mime_protos.h>

#include <sofia-sip/msg_mclass.h>



#define msg_offsetof(s, f) ((unsigned short)offsetof(s ,f))


msg_mclass_t const msg_test_mclass[1] = 
{{
# if defined (MSG_TEST_HCLASS)
  MSG_TEST_HCLASS,
#else
  {{ 0 }},
#endif
  MSG_TEST_VERSION_CURRENT,
  MSG_TEST_PROTOCOL_TAG,
#if defined (MSG_TEST_PARSER_FLAGS)
  MSG_TEST_PARSER_FLAGS,
#else
  0,
#endif
  sizeof (msg_test_t),
  msg_test_extract_body,
  {{ msg_request_class, msg_offsetof(msg_test_t, msg_request) }},
  {{ msg_status_class, msg_offsetof(msg_test_t, msg_status) }},
  {{ msg_separator_class, msg_offsetof(msg_test_t, msg_separator) }},
  {{ msg_payload_class, msg_offsetof(msg_test_t, msg_payload) }},
  {{ msg_unknown_class, msg_offsetof(msg_test_t, msg_unknown) }},
  {{ msg_error_class, msg_offsetof(msg_test_t, msg_error) }},
  {{ msg_multipart_class, msg_offsetof(msg_test_t, msg_multipart) }},
  NULL, 
  127, 
  14,
  {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_language_class, msg_offsetof(msg_test_t, msg_content_language) },
    { NULL, 0 },
    { msg_accept_class, msg_offsetof(msg_test_t, msg_accept) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_accept_charset_class, msg_offsetof(msg_test_t, msg_accept_charset) },
    { msg_content_length_class, msg_offsetof(msg_test_t, msg_content_length) },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_location_class, msg_offsetof(msg_test_t, msg_content_location) },
    { msg_mime_version_class, msg_offsetof(msg_test_t, msg_mime_version) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_auth_class, msg_offsetof(msg_test_t, msg_auth) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_md5_class, msg_offsetof(msg_test_t, msg_content_md5) },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_type_class, msg_offsetof(msg_test_t, msg_content_type) },
    { NULL, 0 },
    { NULL, 0 },
    { msg_accept_language_class, msg_offsetof(msg_test_t, msg_accept_language) },
    { NULL, 0 },
    { NULL, 0 },
    { msg_numeric_class, msg_offsetof(msg_test_t, msg_numeric) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_encoding_class, msg_offsetof(msg_test_t, msg_content_encoding) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_content_disposition_class, msg_offsetof(msg_test_t, msg_content_disposition) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { msg_accept_encoding_class, msg_offsetof(msg_test_t, msg_accept_encoding) },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 }
  }
}};


/*
 * libEtPan! -- a mail stuff library
 *
 * Copyright (C) 2001, 2005 - DINH Viet Hoa
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the libEtPan! project nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * $Id: libetpan.h,v 1.17 2007/01/18 09:15:02 hoa Exp $
 */

#ifndef LIBETPAN_H

#define LIBETPAN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "libetpan_version.h"
#include "maildriver.h"
#include "mailmessage.h"
#include "mailfolder.h"
#include "mailstorage.h"
#include "mailthread.h"
#include "mailsmtp.h"
#include "charconv.h"
#include "mailsem.h"
#include "carray.h"
#include "chash.h"
#include "maillock.h"
  
/* mbox driver */
#include "mboxdriver.h"
#include "mboxdriver_message.h"
#include "mboxdriver_cached.h"
#include "mboxdriver_cached_message.h"
#include "mboxstorage.h"

/* MH driver */
#include "mhdriver.h"
#include "mhdriver_message.h"
#include "mhdriver_cached.h"
#include "mhdriver_cached_message.h"
#include "mhstorage.h"

/* IMAP4rev1 driver */
#include "imapdriver.h"
#include "imapdriver_message.h"
#include "imapdriver_cached.h"
#include "imapdriver_cached_message.h"
#include "imapstorage.h"

/* POP3 driver */
#include "pop3driver.h"
#include "pop3driver_message.h"
#include "pop3driver_cached.h"
#include "pop3driver_cached_message.h"
#include "pop3storage.h"

/* Hotmail */
#include "hotmailstorage.h"

/* NNTP driver */
#include "nntpdriver.h"
#include "nntpdriver_message.h"
#include "nntpdriver_cached.h"
#include "nntpdriver_cached_message.h"
#include "nntpstorage.h"

/* maildir driver */
#include "maildirdriver.h"
#include "maildirdriver_message.h"
#include "maildirdriver_cached.h"
#include "maildirdriver_cached_message.h"
#include "maildirstorage.h"

/* db driver */
#include "dbdriver.h"
#include "dbdriver_message.h"
#include "dbstorage.h"

/* feed driver */
#include "feeddriver.h"
#include "feeddriver_message.h"
#include "feedstorage.h"

/* message which content is given by a MIME structure */
#include "mime_message_driver.h"

/* message which content given by a string */
#include "data_message_driver.h"

/* engine */
#include "mailprivacy.h"
#include "mailengine.h"
#include "mailprivacy_gnupg.h"
#include "mailprivacy_smime.h"

/* utils */
#include "mailimap_parser.h"

/* other */
#include "quota_sender.h"
#include "mailprivacy_tools_private.h"
#include "maildriver_tools.h"
#include "mailmessage_tools.h"
#include "mailstream_cancel.h"
#include "parser_atom10.h"
#include "quota_parser.h"
#include "mailimap_sender.h"
#include "parser_rdf.h"
#include "base64.h"
#include "config.h"
#include "mailimap_id_sender.h"
#include "parser.h"
#include "mailimap_keywords.h"
#include "md5.h"
#include "mmapstring_private.h"
#include "parser_atom03.h"
#include "mailstream_ssl_private.h"
#include "connect.h"
#include "date.h"
#include "mailimap_id_parser.h"
#include "mailsasl_private.h"
#include "mailmime_write.h"
#include "imfcache.h"
#include "timeutils.h"
#include "namespace_parser.h"
#include "mailsasl.h"
#include "mailsmtp_private.h"
#include "mail_cache_db.h"
#include "mail.h"
#include "md5global.h"
#include "parser_rss20.h"
#include "annotatemore_parser.h"
#include "generic_cache.h"
#include "namespace_sender.h"
#include "annotatemore_sender.h"
#include "md5namespace.h"
#include "mailimf_write.h"
#include "condstore_private.h"
#include "uidplus_parser.h"
#include "clientid.h"
#include "mailstream_cancel_types.h"
#include "acl_parser.h"
#include "imapdriver_tools_private.h"
#include "clientid_sender.h"
#include "imapdriver_tools.h"
#include "mail_cache_db_types.h"
#include "acl_sender.h"
#include "maildirdriver_tools.h"
#include "uidplus_sender.h"
#include "qresync_private.h"
#include "mailstream_compress.h"
#include "mailmbox_parse.h"
#include "mailstorage_tools.h"
#include "newsfeed_private.h"
#include "mailimap_print.h"

#ifdef __cplusplus
}
#endif

#endif

/*
 * PLEASE NOTE: 
 * 
 * This file is automatically generated by tag_dll.awk.
 * It contains tag_typedef_t for tag references.
 * 
 * Do not, repeat, do not edit this file. Edit 'soa_tag.c' instead.
 * 
 */

#include "config.h"

#include <sofia-sip/su_tag_class.h>

#if defined _WIN32 || defined HAVE_OPEN_C
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <stddef.h>

#undef TAG_NAMESPACE
#define TAG_NAMESPACE soa_tag_namespace

#undef TAG_NAMESPACE
#define TAG_NAMESPACE "soa"

extern tag_typedef_t soatag_caps_sdp;
EXPORT tag_typedef_t soatag_caps_sdp_ref = 
  REFTAG_TYPEDEF(soatag_caps_sdp);
extern tag_typedef_t soatag_caps_sdp_str;
EXPORT tag_typedef_t soatag_caps_sdp_str_ref = 
  REFTAG_TYPEDEF(soatag_caps_sdp_str);
extern tag_typedef_t soatag_local_sdp;
EXPORT tag_typedef_t soatag_local_sdp_ref = 
  REFTAG_TYPEDEF(soatag_local_sdp);
extern tag_typedef_t soatag_local_sdp_str;
EXPORT tag_typedef_t soatag_local_sdp_str_ref = 
  REFTAG_TYPEDEF(soatag_local_sdp_str);
extern tag_typedef_t soatag_remote_sdp;
EXPORT tag_typedef_t soatag_remote_sdp_ref = 
  REFTAG_TYPEDEF(soatag_remote_sdp);
extern tag_typedef_t soatag_remote_sdp_str;
EXPORT tag_typedef_t soatag_remote_sdp_str_ref = 
  REFTAG_TYPEDEF(soatag_remote_sdp_str);
extern tag_typedef_t soatag_user_sdp;
EXPORT tag_typedef_t soatag_user_sdp_ref = 
  REFTAG_TYPEDEF(soatag_user_sdp);
extern tag_typedef_t soatag_user_sdp_str;
EXPORT tag_typedef_t soatag_user_sdp_str_ref = 
  REFTAG_TYPEDEF(soatag_user_sdp_str);
extern tag_typedef_t soatag_user_o_line;
EXPORT tag_typedef_t soatag_user_o_line_ref = 
  REFTAG_TYPEDEF(soatag_user_o_line);
extern tag_typedef_t soatag_af;
EXPORT tag_typedef_t soatag_af_ref = 
  REFTAG_TYPEDEF(soatag_af);
extern tag_typedef_t soatag_address;
EXPORT tag_typedef_t soatag_address_ref = 
  REFTAG_TYPEDEF(soatag_address);
extern tag_typedef_t soatag_rtp_select;
EXPORT tag_typedef_t soatag_rtp_select_ref = 
  REFTAG_TYPEDEF(soatag_rtp_select);
extern tag_typedef_t soatag_audio_aux;
EXPORT tag_typedef_t soatag_audio_aux_ref = 
  REFTAG_TYPEDEF(soatag_audio_aux);
extern tag_typedef_t soatag_rtp_sort;
EXPORT tag_typedef_t soatag_rtp_sort_ref = 
  REFTAG_TYPEDEF(soatag_rtp_sort);
extern tag_typedef_t soatag_rtp_mismatch;
EXPORT tag_typedef_t soatag_rtp_mismatch_ref = 
  REFTAG_TYPEDEF(soatag_rtp_mismatch);
extern tag_typedef_t soatag_active_audio;
EXPORT tag_typedef_t soatag_active_audio_ref = 
  REFTAG_TYPEDEF(soatag_active_audio);
extern tag_typedef_t soatag_active_video;
EXPORT tag_typedef_t soatag_active_video_ref = 
  REFTAG_TYPEDEF(soatag_active_video);
extern tag_typedef_t soatag_active_image;
EXPORT tag_typedef_t soatag_active_image_ref = 
  REFTAG_TYPEDEF(soatag_active_image);
extern tag_typedef_t soatag_active_chat;
EXPORT tag_typedef_t soatag_active_chat_ref = 
  REFTAG_TYPEDEF(soatag_active_chat);
extern tag_typedef_t soatag_srtp_enable;
EXPORT tag_typedef_t soatag_srtp_enable_ref = 
  REFTAG_TYPEDEF(soatag_srtp_enable);
extern tag_typedef_t soatag_srtp_confidentiality;
EXPORT tag_typedef_t soatag_srtp_confidentiality_ref = 
  REFTAG_TYPEDEF(soatag_srtp_confidentiality);
extern tag_typedef_t soatag_srtp_integrity;
EXPORT tag_typedef_t soatag_srtp_integrity_ref = 
  REFTAG_TYPEDEF(soatag_srtp_integrity);
extern tag_typedef_t soatag_hold;
EXPORT tag_typedef_t soatag_hold_ref = 
  REFTAG_TYPEDEF(soatag_hold);
extern tag_typedef_t soatag_ordered_user;
EXPORT tag_typedef_t soatag_ordered_user_ref = 
  REFTAG_TYPEDEF(soatag_ordered_user);
extern tag_typedef_t soatag_reuse_rejected;
EXPORT tag_typedef_t soatag_reuse_rejected_ref = 
  REFTAG_TYPEDEF(soatag_reuse_rejected);
extern tag_typedef_t soatag_delayed_offer_enable;
EXPORT tag_typedef_t soatag_delayed_offer_enable_ref = 
  REFTAG_TYPEDEF(soatag_delayed_offer_enable);

EXPORT tag_type_t soa_tag_list[] =
{
  soatag_ordered_user,
  soatag_user_sdp,
  soatag_caps_sdp,
  soatag_user_o_line,
  soatag_rtp_select,
  soatag_srtp_integrity,
  soatag_remote_sdp_str,
  soatag_local_sdp_str,
  soatag_user_sdp_str,
  soatag_caps_sdp_str,
  soatag_af,
  soatag_rtp_sort,
  soatag_rtp_mismatch,
  soatag_srtp_confidentiality,
  soatag_active_image,
  soatag_active_chat,
  soatag_active_audio,
  soatag_remote_sdp,
  soatag_delayed_offer_enable,
  soatag_reuse_rejected,
  soatag_address,
  soatag_active_video,
  soatag_audio_aux,
  soatag_hold,
  soatag_local_sdp,
  soatag_srtp_enable,
  NULL
};

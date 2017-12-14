#include "mediastreamer2/msfilter.h"

MS2_VAR_PUBLIC MSFilterDesc ms_alaw_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_alaw_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_audio_mixer_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_channel_adapter_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_dtmf_gen_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_equalizer_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_audio_flow_control_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_genericplc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_l16_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_l16_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_file_player_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_file_rec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_g722_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_g722_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_vad_dtx_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_volume_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_tone_detector_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_ulaw_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_ulaw_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_rtp_send_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_rtp_recv_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_rtt_4103_source_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_rtt_4103_sink_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_udp_send_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_au_read_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_au_write_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_aac_eld_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_aac_eld_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_gsm_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_gsm_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_bv16_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_bv16_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_opus_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_opus_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_resample_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_speex_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_speex_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_speex_ec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_ext_display_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_mire_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_static_image_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_pix_conv_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_size_conv_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_jpeg_writer_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_ogl_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_vp8_enc_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_vp8_dec_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_mkv_recorder_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_mkv_player_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_osx_gl_display_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_v4m_desc;
MSFilterDesc * ms_voip_filter_descs[]={
&ms_alaw_dec_desc,
&ms_alaw_enc_desc,
&ms_audio_mixer_desc,
&ms_channel_adapter_desc,
&ms_dtmf_gen_desc,
&ms_equalizer_desc,
&ms_audio_flow_control_desc,
&ms_genericplc_desc,
&ms_l16_dec_desc,
&ms_l16_enc_desc,
&ms_file_player_desc,
&ms_file_rec_desc,
&ms_g722_dec_desc,
&ms_g722_enc_desc,
&ms_vad_dtx_desc,
&ms_volume_desc,
&ms_tone_detector_desc,
&ms_ulaw_dec_desc,
&ms_ulaw_enc_desc,
&ms_rtp_send_desc,
&ms_rtp_recv_desc,
&ms_rtt_4103_source_desc,
&ms_rtt_4103_sink_desc,
&ms_udp_send_desc,
&ms_au_read_desc,
&ms_au_write_desc,
&ms_aac_eld_dec_desc,
&ms_aac_eld_enc_desc,
&ms_gsm_dec_desc,
&ms_gsm_enc_desc,
&ms_bv16_dec_desc,
&ms_bv16_enc_desc,
&ms_opus_enc_desc,
&ms_opus_dec_desc,
&ms_resample_desc,
&ms_speex_dec_desc,
&ms_speex_enc_desc,
&ms_speex_ec_desc,
&ms_ext_display_desc,
&ms_mire_desc,
&ms_static_image_desc,
&ms_pix_conv_desc,
&ms_size_conv_desc,
&ms_jpeg_writer_desc,
&ms_ogl_desc,
&ms_vp8_enc_desc,
&ms_vp8_dec_desc,
&ms_mkv_recorder_desc,
&ms_mkv_player_desc,
&ms_osx_gl_display_desc,
&ms_v4m_desc,
NULL
};


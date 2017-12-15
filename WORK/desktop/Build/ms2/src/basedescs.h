#include "mediastreamer2/msfilter.h"

MS2_VAR_PUBLIC MSFilterDesc ms_itc_source_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_itc_sink_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_join_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_tee_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_void_source_desc;
MS2_VAR_PUBLIC MSFilterDesc ms_void_sink_desc;
MSFilterDesc * ms_base_filter_descs[]={
&ms_itc_source_desc,
&ms_itc_sink_desc,
&ms_join_desc,
&ms_tee_desc,
&ms_void_source_desc,
&ms_void_sink_desc,
NULL
};


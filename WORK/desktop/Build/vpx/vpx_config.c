/* Copyright (c) 2011 The WebM project authors. All Rights Reserved. */
/*  */
/* Use of this source code is governed by a BSD-style license */
/* that can be found in the LICENSE file in the root of the source */
/* tree. An additional intellectual property rights grant can be found */
/* in the file PATENTS.  All contributing project authors may */
/* be found in the AUTHORS file in the root of the source tree. */
#include "vpx/vpx_codec.h"
static const char* const cfg = "--prefix=/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop --target=x86_64-darwin10-gcc --prefix=/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop --target=x86_64-darwin10-gcc --enable-static --disable-shared --enable-pic --enable-error-concealment --enable-multithread --enable-realtime-only --enable-spatial-resampling --enable-vp8 --disable-vp9 --enable-libs --disable-install-docs --disable-debug-libs --disable-examples --disable-unit-tests --as=yasm";
const char *vpx_codec_build_config(void) {return cfg;}

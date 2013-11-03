/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggVorbis SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS LIBRARY SOURCE IS     *
 * GOVERNED BY A BSD-STYLE SOURCE LICENSE INCLUDED WITH THIS SOURCE *
 * IN 'COPYING'. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.       *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2007             *
 * by the Xiph.Org Foundation http://www.xiph.org/                  *
 *                                                                  *
 ********************************************************************

  function: LPC low level routines
  last mod: $Id: lpc.h 16037 2009-05-26 21:10:58Z xiphmont $

 ********************************************************************/

#ifndef _V_LPC_H_
#define _V_LPC_H_

/* simple linear scale LPC code */
extern float vorbis_lpc_from_data(short *data,float *lpc,int n,int m,int stride);

extern void vorbis_lpc_predict(float *coeff,short *prime,int m,
                               short *data,long n,int stride);

#endif
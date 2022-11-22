/**************************************************************************/
/*                                                                        */
/*    Copyright 2022 OCamlPro                                             */
/*                                                                        */
/*  All rights reserved. This file is distributed under the terms of the  */
/*  GNU Lesser General Public License version 2.1, with the special       */
/*  exception on linking described in the file LICENSE.                   */
/*                                                                        */
/**************************************************************************/

#ifdef HAS_WAYLAND

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "wl_target.h"
#include "wl_window_internal.h"

wl_window_t *
wl_window_create(
  bool decorated,
  bool resizeable,
  bool minimize,
  bool maximize,
  bool close,
  const char *title,
  int32_t x,
  int32_t y,
  int32_t width,
  int32_t height)
{
  return NULL;
}

void
wl_window_destroy(
  wl_window_t *window)
{
}

wl_target_t *
wl_window_get_target(
  wl_window_t *window)
{
  return NULL;
}

void
wl_window_set_title(
  wl_window_t *window,
  const char *title)
{
}

void
wl_window_set_size(
  wl_window_t *window,
  int32_t width,
  int32_t height)
{
}

void
wl_window_set_position(
  wl_window_t *window,
  int32_t x,
  int32_t y)
{
}

void
wl_window_show(
  wl_window_t *window)
{
}

void
wl_window_hide(
  wl_window_t *window)
{
}

#else

const int wl_window = 0;

#endif /* HAS_WAYLAND */

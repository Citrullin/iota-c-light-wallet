#ifndef UI_H
#define UI_H

#include "os.h"
#include "cx.h"
#include "os_io_seproxyhal.h"
#include "bagl.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#define TYPE_INT 1
#define TYPE_UINT 2
#define TYPE_STR 3
#define TOP 1
#define MID 2
#define BOT 3

void write_display(void* o, uint8_t sz, uint8_t t, uint8_t p);

unsigned int bagl_ui_nanos_screen_button(unsigned int, unsigned int);
unsigned int bagl_ui_sample_blue_button(unsigned int, unsigned int);

const bagl_element_t *io_seproxyhal_touch_exit(const bagl_element_t *e);
const bagl_element_t *io_seproxyhal_touch_deny(const bagl_element_t *e);
const bagl_element_t* io_seproxyhal_touch_approve(const bagl_element_t *e);

void initUImsg(void);
void ui_idle(void);
void ui_display_debug(void *o, uint8_t sz, uint8_t t,
                      void *o2, uint8_t sz2, uint8_t t2,
                      void *o3, uint8_t sz3, uint8_t t3);

//ui_display_debug(top, szof(top), TYPE_TOP,
//                  mid, szof(mid), TYPE_MID,
//                  bot, szof(bot) TYPE_BOT);

#endif // UI_H



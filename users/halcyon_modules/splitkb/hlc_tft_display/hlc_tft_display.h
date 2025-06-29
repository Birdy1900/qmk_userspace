
#pragma once

#include "qp.h"
#include "qp_surface.h"

extern painter_device_t lcd;
extern painter_device_t lcd_surface;

void draw_grid(void);
void update_grid(void);
void init_grid(void);
void add_cell_cluster(void);
uint8_t get_random_color_index(void);
void update_display(void);
void backlight_wakeup(void);
void backlight_suspend(void);

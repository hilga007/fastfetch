#pragma once

#ifndef FF_INCLUDED_common_bar
#define FF_INCLUDED_common_bar

#include "fastfetch.h"

enum
{
    FF_PERCENTAGE_TYPE_NUM_BIT = 1 << 0,
    FF_PERCENTAGE_TYPE_BAR_BIT = 1 << 1,
    FF_PERCENTAGE_TYPE_HIDE_OTHERS_BIT = 1 << 2,
    FF_PERCENTAGE_TYPE_NUM_COLOR_BIT = 1 << 3,
};

void ffAppendPercentBar(FFinstance* instance, FFstrbuf* buffer, uint8_t percent, uint8_t green, uint8_t yellow, uint8_t red);
void ffAppendPercentNum(FFinstance* instance, FFstrbuf* buffer, uint8_t percent, uint8_t green, uint8_t yellow, bool parentheses);

#endif

// Generated by imageconverter. Please, do not edit!

#ifndef BITMAPDATABASE_HPP
#define BITMAPDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/Bitmap.hpp>

const uint16_t BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 0;
const uint16_t BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 1;
const uint16_t BITMAP_BLUE_BUTTONS_ROUND_MEDIUM_ID = 2;
const uint16_t BITMAP_BLUE_BUTTONS_ROUND_MEDIUM_PRESSED_ID = 3;
const uint16_t BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_ACTIVE_ID = 4;
const uint16_t BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_INACTIVE_ID = 5;
const uint16_t BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_NORMAL_ID = 6;
const uint16_t BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_PRESSED_ID = 7;

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance();
uint16_t getInstanceSize();
}

#endif

#ifndef GAME_RESOURCE_H
#define GAME_RESOURCE_H

/**
 * @file
 * Type definitions for resources
 */

/**
 * Resource types
 */
typedef enum {
    RESOURCE_NONE = 0,
    RESOURCE_WHEAT = 1,
    RESOURCE_VEGETABLES = 2,
    RESOURCE_FRUIT = 3,
    RESOURCE_OLIVES = 4,
    RESOURCE_VINES = 5,
    RESOURCE_MEAT = 6,
    RESOURCE_WINE = 7,
    RESOURCE_OIL = 8,
    RESOURCE_IRON = 9,
    RESOURCE_TIMBER = 10,
    RESOURCE_CLAY = 11,
    RESOURCE_MARBLE = 12,
    RESOURCE_WEAPONS = 13,
    RESOURCE_FURNITURE = 14,
    RESOURCE_POTTERY = 15,
    RESOURCE_DENARII = 16,
    RESOURCE_TROOPS = 17,
    // helper constants
    RESOURCE_MIN = 1,
    RESOURCE_MAX = 16,
    RESOURCE_MIN_FOOD = 1,
    RESOURCE_MAX_FOOD = 7,
    RESOURCE_MIN_RAW = 9,
    RESOURCE_MAX_RAW = 13
} resource_type;

typedef enum {
    INVENTORY_NONE = -1,
    INVENTORY_WHEAT = 0,
    INVENTORY_VEGETABLES = 1,
    INVENTORY_FRUIT = 2,
    INVENTORY_MEAT = 3,
    INVENTORY_WINE = 4,
    INVENTORY_OIL = 5,
    INVENTORY_FURNITURE = 6,
    INVENTORY_POTTERY = 7,
    // helper constants
    INVENTORY_MIN_FOOD = 0,
    INVENTORY_MAX_FOOD = 4,
    INVENTORY_MIN_GOOD = 4,
    INVENTORY_MAX_GOOD = 8,
    INVENTORY_MAX = 8,
    // inventory flags
    INVENTORY_FLAG_NONE = 0,
    INVENTORY_FLAG_ALL_FOODS = 0x0f,
    INVENTORY_FLAG_ALL_GOODS = 0xf0,
    INVENTORY_FLAG_ALL = 0xff
} inventory_type;

typedef enum {
    WORKSHOP_NONE = 0,
    WORKSHOP_OLIVES_TO_OIL = 1,
    WORKSHOP_VINES_TO_WINE = 2,
    WORKSHOP_IRON_TO_WEAPONS = 3,
    WORKSHOP_TIMBER_TO_FURNITURE = 4,
    WORKSHOP_CLAY_TO_POTTERY = 5
} workshop_type;

typedef enum {
    RESOURCE_IMAGE_STORAGE = 0,
    RESOURCE_IMAGE_CART = 1,
    RESOURCE_IMAGE_FOOD_CART = 2,
    RESOURCE_IMAGE_ICON = 3
} resource_image_type;

int resource_image_offset(resource_type resource, resource_image_type type);

int resource_is_food(resource_type resource);

workshop_type resource_to_workshop_type(resource_type resource);

int inventory_is_set(int inventory, int flag);

void inventory_set(int *inventory, int flag);

int resource_from_inventory(int inventory_id);

int resource_to_inventory(resource_type resource);

#endif // GAME_RESOURCE_H

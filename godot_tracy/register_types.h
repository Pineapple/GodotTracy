#ifndef GODOT_TRACY_REGISTER_TYPES_H
#define GODOT_TRACY_REGISTER_TYPES_H

// void register_godot_tracy_types();
// void unregister_godot_tracy_types();

#include "modules/register_module_types.h"

void initialize_godot_tracy_module(ModuleInitializationLevel p_level);
void uninitialize_godot_tracy_module(ModuleInitializationLevel p_level);

#endif // GODOT_TRACY_REGISTER_TYPES_H

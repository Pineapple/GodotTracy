#include "register_types.h"

// void register_godot_tracy_types() {
// }

// void unregister_godot_tracy_types() {
// }

#include "core/object/class_db.h"

void initialize_godot_tracy_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

void uninitialize_godot_tracy_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
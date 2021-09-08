def can_build(env, platform):
    return True


def configure(env):
    from SCons.Script import ARGUMENTS

    tracy_on_demand = ARGUMENTS.get("tracy_on_demand", "none")
    if tracy_on_demand != "none":
        env["tracy_on_demand"] = tracy_on_demand

def is_enabled():
    # The module is disabled by default. Use module_godot_tracy_enabled=yes to enable it.
    return False
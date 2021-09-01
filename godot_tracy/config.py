def can_build(env, platform):
    import methods
    use_tracy = methods.get_cmdline_bool("tracy_enabled", False)
    return use_tracy


def configure(env):
    pass

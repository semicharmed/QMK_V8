## QMK_V8
Custom QMK Keymap for Keychron V8 (Alice Layout) ANSI Encoder

#### Features:
- Per-layer RGB (bacause I hate not knowing what'll happen when I press a key -- also, I switch layers for gaming)
- Whole keyboard capslock indicator (because SCREAMING)
- Home Row love

### Windows Base Layer (Win_Base)

![win_base](assets/win_base.png)

Largely basic Windows layout with two key (ha ha) modifications:

- **Tab** switches to the Numpad Layer (_FN2) when held down, returns Tab keystroke on tap
- **Capslock** switches to the Function/Navigation Layer (_FN1) when held down, toggles Caps Lock on tap
- The **fn1** and **fn2** keys between the spacebars switch to their respective layers when held (useful for one-handed operation)


### Function/Navigation Layer (_FN1)

![_FN1](assets/_FN1.png)

- Provides access to Function Keys F1 to F12 on the number row
- Recreates old-school numpad navigation cluster at right-hand home for minimal roaming (and nostalgia)
- Dedicated **Del** key switches to Gaming Layer (_FN3)

Was always a fan of the 80s keyboards before the nav cluster was a thing and you had to use a non locked numpad for navigation.

### Numlock Layer (_FN2)

![_FN2](assets/_FN2.png)

- Numpad layer with full non-numlocked functionality 

### Gaming Layer (_FN3)
![_FN3](assets/_FN3.png)

- Base layout with standard **Tab** key functionality for gaming
- Single key switch to home layer via dedicated **Home** key

This is pretty much why I needed per layer RGB

### Instructions

1. Set up [QMK](https://docs.qmk.fm/#/newbs_getting_started)
2. Copy **semicharmed** folder to \qmk_firmware\keyboards\keychron\v8\ansi_encoder\keymaps\
3. Edit **keymap.c** to taste
4. [Compile](https://docs.qmk.fm/#/newbs_building_firmware)
5. Flash with [QMK Toolbox](https://github.com/qmk/qmk_toolbox) as per [Keychron instructions](https://www.keychron.com/blogs/archived/how-to-factory-reset-or-flash-your-qmk-via-enabled-keychron-v8-keyboard)


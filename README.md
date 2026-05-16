# SDL3-for-Pascal

Unit files for building
[Free Pascal](https://freepascal.org/) / [Delphi](https://www.embarcadero.com/products/delphi) applications
using the [SDL3 library](https://libsdl.org).

## Installation

Simply add the units to your include path. You can achieve this by:
 - (FPC) using the `{$UNITPATH XXX}` directive in your source code;
 - (FPC) using the `-FuXXX` command-line argument to the compiler;
 - (Delphi) adding the `units` directory to the project search path;
 - just copying & pasting the units into the same directory as your main source code.

Use the `SDL3` unit for the main SDL3 library (should be always needed). Units for the other SDL3 libraries are (or will be) also provided:
 - [`SDL3_image`](https://github.com/libsdl-org/SDL_image)
 - [`SDL3_ttf`](https://github.com/libsdl-org/SDL_ttf)
 - [`SDL3_mixer`](https://github.com/libsdl-org/SDL_mixer)
 - [`SDL3_net`](https://github.com/libsdl-org/SDL_net) (not published yet)
 - [`SDL3_gfx`](https://github.com/sabdul-khabir/SDL3_gfx)

## Building

The repository includes simple build scripts for WSL-based command-line builds.

Build a Delphi Win64 target:

```sh
./build.sh examples/primitives.pas Win64
```

Build a Delphi Win32 target:

```sh
./build.sh tests/testver.pas Win32
```

The Delphi script auto-detects the newest installed Embarcadero Studio under
`/mnt/c/Program Files (x86)/Embarcadero/Studio`. Override this with
`BDS_VERSION`, `BDS_STUDIO_ROOT`, `DCC32`, or `DCC64` when needed. Add scoped
unit namespaces with `DELPHI_NAMESPACES` when a project needs more than
`System;Winapi`. Executables are written to `bin/Win32` or `bin/Win64`, next to
the matching `SDL3.dll`.

Build with FPC:

```sh
./build-fpc.sh tests/testver.pas
```

## Documentation

- [`Tutorial for SDL3`](https://www.freepascal-meets-sdl.net/sdl-tutorials/)

## Bugs / Contributions / ToDos

If you have any contributions or bugfixes, feel free to drop a pull request or send in a patch.
Please use the GitHub [issue tracker](https://github.com/PascalGameDevelopment/SDL3-for-Pascal/issues).

### ToDos

- implement GitHub Pages documentation via GitHub Actions
- add tests ([FPCUnit](https://wiki.freepascal.org/fpcunit)?)
- improve units (search for "#todo" to find specific tasks)
- adapt comments to [PasDoc format](https://pasdoc.github.io) (later)

### Code style guidelines

The main principle is to stay as tight as possible at the names in the C headers.
These guidelines aim to have better consistency in this community project and make
it easier to find certain code parts in the C headers/Pascal includes. Feel free
to discuss or extend these guidelines, use the issue tracker.

For details please refer to our [Translation Code Style Sheet](STYLESHEET.md).

## Versions

The version number/tag (see [tags](https://github.com/PascalGameDevelopment/SDL3-for-Pascal/tags)) refers to the version of this unit  package [SDL3 for Pascal](https://github.com/PascalGameDevelopment/SDL3-for-Pascal), not the `SDL3 Library`.

### v0.x (work in progress)

### v0.6 (04/05/2026)

- updates SDL3 to version 3.4.4 (partially 3.4.2)
- updates SDL3_mixer to version 3.2.0
- extends SDL_stdinc.inc by many functions
- some minor updates

### v0.5 (15/08/2025)

- adds SDL3_ttf unit
- adds SDL3_mixer unit
- adds SDL3_gfx unit
- adds further include files for SDL3 unit
- updates some includes files
- adds basic CI feature (compilation tests)
- adds type size test
- bugfixes

### v0.4 (15/03/2025)

- adds working SDL3 unit (rather complete)
- adds working SDL3_image unit
- units seem stable

## License

The units are licensed under the [zlib license](https://opensource.org/license/zlib).

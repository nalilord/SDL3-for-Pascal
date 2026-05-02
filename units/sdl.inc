
{$I jedi.inc} // provides many useful compiler defines to distinguish
              // between compilers, environments, architectures, ...
              // Important: Sets Delphi mode for FPC!

{ Compiler settings }
{$H+}              // strings are ansistrings (Delphi mode)
{$IFDEF FPC}
  {$PACKRECORDS C} // C compatible record alignment
{$ELSE}
  {$IFDEF WIN32}
    {$ALIGN 4}
  {$ELSE}
    {$ALIGN 8}
  {$ENDIF}
{$ENDIF}

{ Compiler defines }
{$DEFINE SDL} // define "SDL" symbol

{$IF DEFINED(MSWINDOWS) AND NOT DEFINED(WINDOWS)}
  {$DEFINE WINDOWS}
{$ENDIF}

{ SDL3 Compiler defines }
{$IFDEF WINDOWS}
  {$DEFINE SDL_PLATFORM_WINDOWS}  // used in SDL_thread.inc
{$ENDIF}

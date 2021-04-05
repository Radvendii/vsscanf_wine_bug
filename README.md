# vsscanf_wine_bug
This is a minimal working example (on my machine at least) of a wine bug. The commented line in main.c should not be needed for the uncommented line, and isn't needed on windows (or linux), but when running through wine the program crashes without it.

## Compilation

I don't know how to do things on windows, so I set up cross-compilation using nix (this is also how I discovered the bug). There is a chance this is an issue with nix, or with cross-compilation.

If you're running nix, you should just be able to `nix-build`, and then run `wine ./result/vsscanf_wine_bug.exe`. I'm not sure how to cross-compile without nix.

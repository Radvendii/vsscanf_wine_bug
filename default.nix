with import <nixpkgs> {
  crossSystem = {
    config = "x86_64-w64-mingw32";
    libc = "msvcrt";
  };
};

stdenv.mkDerivation rec {
  name = "vsscanf-wine-bug";
  src = ./.;
  buildPhase = "$CC main.c -o ${name}";
  installPhase = ''
    mkdir -p $out/bin
    cp ${name}.exe $out/bin
  '';
}

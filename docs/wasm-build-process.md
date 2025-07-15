# WebAssembly Build Process

The WASM (WebAssembly) steps are necessary because Helix editor uses WebAssembly modules to run tree-sitter grammars, rather than native shared libraries.

## Why WASM?

Helix chose WebAssembly because it provides:
- **Sandboxing**: WASM runs in a secure, isolated environment
- **Performance**: Near-native speed for parsing
- **Portability**: Same binary works across different platforms
- **Safety**: Memory-safe execution environment

## The Build Process

When you run `npx tree-sitter build --wasm`:

1. **Docker Container**: It pulls the `emscripten/emsdk:3.1.55` Docker image, which contains the Emscripten compiler toolchain for converting C/C++ to WebAssembly

2. **C Code Compilation**: The tree-sitter parser (written in C) from `src/parser.c` gets compiled to WebAssembly bytecode instead of native machine code

3. **WASM Output**: Creates `tree-sitter-brightscript.wasm` - a WebAssembly module containing the compiled parser

## What Helix Does With It

When you place the `.wasm` file in `~/.config/helix/runtime/grammars/`:

- Helix loads the WASM module at runtime
- It instantiates the WebAssembly module in its WASM runtime
- The parser runs inside this sandboxed environment
- Query files (`.scm`) tell Helix how to use the parser output for syntax highlighting

## Alternative Approaches

Other editors might use:
- **Shared libraries** (`.so`, `.dylib`, `.dll`) - native compiled code
- **Node.js bindings** - for editors built on Electron
- **Direct integration** - editors with built-in tree-sitter support

The WASM approach is Helix's design choice for security and consistency across platforms.

## File Structure After Build

```
tree-sitter-brightscript/
├── src/
│   └── parser.c                    # Generated C parser code
├── queries/
│   ├── highlights.scm              # Syntax highlighting queries
│   ├── folds.scm                   # Code folding queries
│   ├── indents.scm                 # Indentation queries
│   ├── injections.scm              # Language injection queries
│   └── textobjects.scm             # Text object queries
└── tree-sitter-brightscript.wasm   # Compiled WASM module
```

## Installation Path

The WASM file and queries are copied to:
```
~/.config/helix/runtime/
├── grammars/
│   └── tree-sitter-brightscript.wasm
└── queries/
    └── brightscript/
        ├── highlights.scm
        ├── folds.scm
        ├── indents.scm
        ├── injections.scm
        └── textobjects.scm
```
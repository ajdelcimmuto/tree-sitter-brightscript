# tree-sitter-brightscript

A tree-sitter grammar for BrightScript, the scripting language used in Roku development.

## Features

- Syntax highlighting for BrightScript (.brs) files
- Support for folding, indents, and text objects
- Compatible with editors that support tree-sitter grammars

## Installation

1. Clone this repo
2. Node version greater than 18 is requored (24.4.0 confirmed working but lower might also work)


### Helix Editor

1. **Install dependencies**:
   ```bash
   npm install
   ```

2. **Generate the parser**:
   ```bash
   npx tree-sitter generate
   ```

3. **Build the WASM grammar**:
   ```bash
   npx tree-sitter build --wasm
   ```

4. **Create runtime directories**:
   ```bash
   mkdir -p ~/.config/helix/runtime/grammars ~/.config/helix/runtime/queries/brightscript
   ```

5. **Copy grammar and query files**:
   ```bash
   cp tree-sitter-brightscript.wasm ~/.config/helix/runtime/grammars/
   cp queries/*.scm ~/.config/helix/runtime/queries/brightscript/
   ```

6. **Configure language support** (add to `~/.config/helix/languages.toml`):
   ```toml
   [language-server.brighterscript-lsp]
   command = "bsc"
   args = ["--lsp"]

   [[language]]
   name = "brightscript"
   scope = "source.brightscript"
   injection-regex = "brightscript"
   file-types = ["brs", "bs"]
   comment-tokens = ["'", "rem"]
   indent = { tab-width = 4, unit = "    " }
   language-servers = ["brighterscript-lsp"]
   ```

7. **Verify installation**:
   ```bash
   hx --health | grep brightscript
   ```
   You should see checkmarks (✓) for Highlight, Textobjects, and Indent.

### Other Editors

This grammar can be used with any editor that supports tree-sitter. Follow your editor's documentation for installing tree-sitter grammars.

## Query Files

The repository includes query files for:
- `highlights.scm` - Syntax highlighting
- `folds.scm` - Code folding
- `indents.scm` - Automatic indentation
- `injections.scm` - Language injections
- `textobjects.scm` - Text object selection

## Language Server

For enhanced language features, you can use the BrighterScript Language Server:
```bash
npm install -g brighterscript
```

## Development

To contribute to this grammar:

1. Modify `grammar.js` to add or change language rules
2. Run `npx tree-sitter generate` to regenerate the parser
3. Test with `npx tree-sitter parse example.brs`
4. Update query files as needed

## License

[License information would go here]

package tree_sitter_brightscript_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-brightscript"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_brightscript.Language())
	if language == nil {
		t.Errorf("Error loading Brightscript grammar")
	}
}

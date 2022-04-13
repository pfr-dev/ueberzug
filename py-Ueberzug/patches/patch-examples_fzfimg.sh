$NetBSD$

Be quiet pkglint

--- examples/fzfimg.sh.orig	2021-01-09 11:39:14.000000000 +0000
+++ examples/fzfimg.sh
@@ -18,7 +18,7 @@ readonly BASH_BINARY="$(which bash)"
 readonly REDRAW_COMMAND="toggle-preview+toggle-preview"
 readonly REDRAW_KEY="µ"
 declare -r -x DEFAULT_PREVIEW_POSITION="right"
-declare -r -x UEBERZUG_FIFO="$(mktemp --dry-run --suffix "fzf-$$-ueberzug")"
+declare -r -x UEBERZUG_FIFO="$(T="$(mktemp -t fzf-$$-ueberzug)"; rm -f "$T"; echo "$T")"
 declare -r -x PREVIEW_ID="preview"
 
 

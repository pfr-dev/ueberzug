$NetBSD$

Be quiet pkglint

--- ueberzug/xutil.py.orig	2021-01-09 11:39:14.000000000 +0000
+++ ueberzug/xutil.py
@@ -1,6 +1,7 @@
 """This module contains x11 utils"""
 import functools
 import asyncio
+import psutil
 
 import Xlib
 import Xlib.display as Xdisplay
@@ -144,9 +145,9 @@ def get_first_pty(pids: list):
     the first process in the passed list which owns one.
     """
     for pid in pids:
-        pty_slave_file = process.get_pty_slave(pid)
-        if pty_slave_file:
-            return pty_slave_file
+        process = psutil.Process(pid=pid)
+        if process is not None and process.terminal() is not None:
+            return process.terminal()
 
     return None
 

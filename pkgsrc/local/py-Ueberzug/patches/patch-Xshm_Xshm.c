$NetBSD$

Be quiet pkglint

--- Xshm/Xshm.c.orig	2021-01-09 11:39:14.000000000 +0000
+++ Xshm/Xshm.c
@@ -67,9 +67,6 @@ Image_map_shared_memory(Image *self) {
 
     if (self->segmentInfo.shmaddr != INVALID_SHM_ADDRESS) {
         self->segmentInfo.readOnly = true;
-        // Mark the shared memory segment for removal
-        // It will be removed even if this program crashes
-        shmctl(self->segmentInfo.shmid, IPC_RMID, 0);
         return true;
     }
 
@@ -111,6 +108,7 @@ static void
 Image_free_shared_memory(Image *self) {
     if(self->segmentInfo.shmaddr != INVALID_SHM_ADDRESS) {
         shmdt(self->segmentInfo.shmaddr);
+        shmctl(self->segmentInfo.shmid, IPC_RMID, 0);
         self->segmentInfo.shmaddr = INVALID_SHM_ADDRESS;
     }
 }

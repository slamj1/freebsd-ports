--- src/zmf.cpp.orig	2016-11-03 20:26:18 UTC
+++ src/zmf.cpp
@@ -331,7 +331,7 @@ int main( int argc, char *argv[] )
     Debug( 1, "Got image, writing to %s", path );
 
     FILE *fd = 0;
-    if ( (fd = fopen( path, "w" )) < 0 )
+    if ( (fd = fopen( path, "w" )) == NULL )
     {
       Error( "Can't fopen '%s': %s", path, strerror(errno) );
       exit( -1 );

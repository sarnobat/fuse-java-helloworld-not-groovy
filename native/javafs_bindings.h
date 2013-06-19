/**
 * javafs_bindings.h - autogenerated C <-> Java bindings
 */

#include <jni.h>


/**
 * structure with a reference to fuse.FuseGetattr java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseGetattr
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID atime;
      jfieldID blocks;
      jfieldID ctime;
      jfieldID gid;
      jfieldID inode;
      jfieldID mode;
      jfieldID mtime;
      jfieldID nlink;
      jfieldID rdev;
      jfieldID size;
      jfieldID uid;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID set__JIIIIIJJIII;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseGetattr;

// free structure
void free_jclass_fuse_FuseGetattr(JNIEnv *env, jclass_fuse_FuseGetattr *fuse_FuseGetattr);

// alloc structure
jclass_fuse_FuseGetattr *alloc_jclass_fuse_FuseGetattr(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSDirEnt java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSDirEnt
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID inode;
      jfieldID mode;
      jfieldID name;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseFSDirEnt;

// free structure
void free_jclass_fuse_FuseFSDirEnt(JNIEnv *env, jclass_fuse_FuseFSDirEnt *fuse_FuseFSDirEnt);

// alloc structure
jclass_fuse_FuseFSDirEnt *alloc_jclass_fuse_FuseFSDirEnt(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSDirFiller java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSDirFiller
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID addAll__ILjava_util_Collection_;
      jmethodID addAll__Ljava_util_Collection_;
      jmethodID add__ILjava_lang_Object_;
      jmethodID add__Ljava_lang_Object_;
      jmethodID add__Ljava_lang_String_JI;
      jmethodID clear;
      jmethodID clone;
      jmethodID containsAll__Ljava_util_Collection_;
      jmethodID contains__Ljava_lang_Object_;
      jmethodID ensureCapacity__I;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID get__I;
      jmethodID hashCode;
      jmethodID indexOf__Ljava_lang_Object_;
      jmethodID isEmpty;
      jmethodID iterator;
      jmethodID lastIndexOf__Ljava_lang_Object_;
      jmethodID listIterator;
      jmethodID listIterator__I;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID removeAll__Ljava_util_Collection_;
      jmethodID remove__I;
      jmethodID remove__Ljava_lang_Object_;
      jmethodID retainAll__Ljava_util_Collection_;
      jmethodID setCharset__Ljava_nio_charset_Charset_;
      jmethodID set__ILjava_lang_Object_;
      jmethodID size;
      jmethodID subList__II;
      jmethodID toArray;
      jmethodID toArray___Ljava_lang_Object_;
      jmethodID toString;
      jmethodID trimToSize;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseFSDirFiller;

// free structure
void free_jclass_fuse_FuseFSDirFiller(JNIEnv *env, jclass_fuse_FuseFSDirFiller *fuse_FuseFSDirFiller);

// alloc structure
jclass_fuse_FuseFSDirFiller *alloc_jclass_fuse_FuseFSDirFiller(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseStatfs java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseStatfs
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID blockSize;
      jfieldID blocks;
      jfieldID blocksAvail;
      jfieldID blocksFree;
      jfieldID files;
      jfieldID filesFree;
      jfieldID namelen;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID set__IIIIIII;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseStatfs;

// free structure
void free_jclass_fuse_FuseStatfs(JNIEnv *env, jclass_fuse_FuseStatfs *fuse_FuseStatfs);

// alloc structure
jclass_fuse_FuseStatfs *alloc_jclass_fuse_FuseStatfs(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseSize java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseSize
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID size;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID setSize__I;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseSize;

// free structure
void free_jclass_fuse_FuseSize(JNIEnv *env, jclass_fuse_FuseSize *fuse_FuseSize);

// alloc structure
jclass_fuse_FuseSize *alloc_jclass_fuse_FuseSize(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseOpen java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseOpen
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID directIO;
      jfieldID fh;
      jfieldID keepCache;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID isDirectIO;
      jmethodID isKeepCache;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID setDirectIO__Z;
      jmethodID setFh__Ljava_lang_Object_;
      jmethodID setKeepCache__Z;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseOpen;

// free structure
void free_jclass_fuse_FuseOpen(JNIEnv *env, jclass_fuse_FuseOpen *fuse_FuseOpen);

// alloc structure
jclass_fuse_FuseOpen *alloc_jclass_fuse_FuseOpen(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseContext java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseContext
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID gid;
      jfieldID pid;
      jfieldID uid;

   } field;

   // cached static method IDs
   struct
   {
      jmethodID get;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseContext;

// free structure
void free_jclass_fuse_FuseContext(JNIEnv *env, jclass_fuse_FuseContext *fuse_FuseContext);

// alloc structure
jclass_fuse_FuseContext *alloc_jclass_fuse_FuseContext(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFS java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFS
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance method IDs
   struct
   {
      jmethodID chmod__Ljava_nio_ByteBuffer_I;
      jmethodID chown__Ljava_nio_ByteBuffer_II;
      jmethodID destroy;
      jmethodID flush__Ljava_nio_ByteBuffer_Ljava_lang_Object_;
      jmethodID fsync__Ljava_nio_ByteBuffer_Ljava_lang_Object_Z;
      jmethodID getattr__Ljava_nio_ByteBuffer_Lfuse_FuseGetattrSetter_;
      jmethodID getdir__Ljava_nio_ByteBuffer_Lfuse_FuseFSDirFiller_;
      jmethodID getxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_I;
      jmethodID getxattrsize__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Lfuse_FuseSizeSetter_;
      jmethodID init;
      jmethodID link__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID listxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID listxattrsize__Ljava_nio_ByteBuffer_Lfuse_FuseSizeSetter_;
      jmethodID mkdir__Ljava_nio_ByteBuffer_I;
      jmethodID mknod__Ljava_nio_ByteBuffer_II;
      jmethodID open__Ljava_nio_ByteBuffer_ILfuse_FuseOpenSetter_;
      jmethodID read__Ljava_nio_ByteBuffer_Ljava_lang_Object_Ljava_nio_ByteBuffer_J;
      jmethodID readlink__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID release__Ljava_nio_ByteBuffer_Ljava_lang_Object_I;
      jmethodID removexattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID rename__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID rmdir__Ljava_nio_ByteBuffer_;
      jmethodID setxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_II;
      jmethodID statfs__Lfuse_FuseStatfsSetter_;
      jmethodID symlink__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID truncate__Ljava_nio_ByteBuffer_J;
      jmethodID unlink__Ljava_nio_ByteBuffer_;
      jmethodID utime__Ljava_nio_ByteBuffer_II;
      jmethodID write__Ljava_nio_ByteBuffer_Ljava_lang_Object_ZLjava_nio_ByteBuffer_J;

   } method;

} jclass_fuse_FuseFS;

// free structure
void free_jclass_fuse_FuseFS(JNIEnv *env, jclass_fuse_FuseFS *fuse_FuseFS);

// alloc structure
jclass_fuse_FuseFS *alloc_jclass_fuse_FuseFS(JNIEnv *env);


/**
 * structure with a reference to java.nio.ByteBuffer java class and cached field & method IDs
 */
typedef struct _jclass_java_nio_ByteBuffer
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached static method IDs
   struct
   {
      jmethodID allocateDirect__I;
      jmethodID allocate__I;
      jmethodID wrap___B;
      jmethodID wrap___BII;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID array;
      jmethodID arrayOffset;
      jmethodID asCharBuffer;
      jmethodID asDoubleBuffer;
      jmethodID asFloatBuffer;
      jmethodID asIntBuffer;
      jmethodID asLongBuffer;
      jmethodID asReadOnlyBuffer;
      jmethodID asShortBuffer;
      jmethodID capacity;
      jmethodID clear;
      jmethodID compact;
      jmethodID compareTo__Ljava_lang_Object_;
      jmethodID compareTo__Ljava_nio_ByteBuffer_;
      jmethodID duplicate;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID flip;
      jmethodID get;
      jmethodID getChar;
      jmethodID getChar__I;
      jmethodID getClass;
      jmethodID getDouble;
      jmethodID getDouble__I;
      jmethodID getFloat;
      jmethodID getFloat__I;
      jmethodID getInt;
      jmethodID getInt__I;
      jmethodID getLong;
      jmethodID getLong__I;
      jmethodID getShort;
      jmethodID getShort__I;
      jmethodID get__I;
      jmethodID get___B;
      jmethodID get___BII;
      jmethodID hasArray;
      jmethodID hasRemaining;
      jmethodID hashCode;
      jmethodID isDirect;
      jmethodID isReadOnly;
      jmethodID limit;
      jmethodID limit__I;
      jmethodID mark;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID order;
      jmethodID order__Ljava_nio_ByteOrder_;
      jmethodID position;
      jmethodID position__I;
      jmethodID putChar__C;
      jmethodID putChar__IC;
      jmethodID putDouble__D;
      jmethodID putDouble__ID;
      jmethodID putFloat__F;
      jmethodID putFloat__IF;
      jmethodID putInt__I;
      jmethodID putInt__II;
      jmethodID putLong__IJ;
      jmethodID putLong__J;
      jmethodID putShort__IS;
      jmethodID putShort__S;
      jmethodID put__B;
      jmethodID put__IB;
      jmethodID put__Ljava_nio_ByteBuffer_;
      jmethodID put___B;
      jmethodID put___BII;
      jmethodID remaining;
      jmethodID reset;
      jmethodID rewind;
      jmethodID slice;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_java_nio_ByteBuffer;

// free structure
void free_jclass_java_nio_ByteBuffer(JNIEnv *env, jclass_java_nio_ByteBuffer *java_nio_ByteBuffer);

// alloc structure
jclass_java_nio_ByteBuffer *alloc_jclass_java_nio_ByteBuffer(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSFactory java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSFactory
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached static method IDs
   struct
   {
      jmethodID adapt__Lfuse_Filesystem3_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Lfuse_compat_Filesystem1_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Lfuse_compat_Filesystem2_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Ljava_lang_Object_;
      jmethodID adapt__Ljava_lang_Object_Lorg_apache_commons_logging_Log_;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_FuseFSFactory;

// free structure
void free_jclass_fuse_FuseFSFactory(JNIEnv *env, jclass_fuse_FuseFSFactory *fuse_FuseFSFactory);

// alloc structure
jclass_fuse_FuseFSFactory *alloc_jclass_fuse_FuseFSFactory(JNIEnv *env);


/**
 * structure with a reference to fuse.PasswordEntry java class and cached field & method IDs
 */
typedef struct _jclass_fuse_PasswordEntry
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID gid;
      jfieldID homeDirectory;
      jfieldID shell;
      jfieldID uid;
      jfieldID username;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new__Ljava_nio_charset_Charset_Ljava_nio_ByteBuffer_IILjava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;

   } constructor;

   // cached static method IDs
   struct
   {
      jmethodID lookupByUid__Ljava_nio_charset_Charset_I;
      jmethodID lookupByUsername__Ljava_nio_charset_Charset_Ljava_lang_String_;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID clone;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID getClass;
      jmethodID hashCode;
      jmethodID notify;
      jmethodID notifyAll;
      jmethodID toString;
      jmethodID wait;
      jmethodID wait__J;
      jmethodID wait__JI;

   } method;

} jclass_fuse_PasswordEntry;

// free structure
void free_jclass_fuse_PasswordEntry(JNIEnv *env, jclass_fuse_PasswordEntry *fuse_PasswordEntry);

// alloc structure
jclass_fuse_PasswordEntry *alloc_jclass_fuse_PasswordEntry(JNIEnv *env);

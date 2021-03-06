/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */



@interface MLITImageLibrary : NSObject 
{
    void *_imageLibrary;
    unsigned int _triedToLoadDatabase : 1;
}

+ (id)sharedLibrary;
+ (struct MLArtworkFormatSpec { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSInteger x5; NSInteger x6; })artworkFormatSpecForArtworkFormatID:(NSUInteger)arg1;
+ (BOOL)verifyDatabaseExists;
+ (void)dumpImageInstanceForTrack:(id)arg1;

- (id)_initSharedInstance;
- (void*)imageLibraryRef;
- (void)dealloc;
- (BOOL)_loadImageLibraryIfNecessary;
- (BOOL)loadDatabase;
- (struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; NSUInteger x3; unsigned long long x4; NSUInteger x5; NSUInteger x6; unsigned short x7; unsigned short x8; struct SLinkList { struct SLinkElement {} *x_9_1_1; } x9; NSUInteger x10; NSUInteger x11; }*)_lookupITImageInfoForTrack:(id)arg1;
- (BOOL)getArtworkData:(id*)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2 track:(id)arg3 formatID:(NSUInteger)arg4 timeInMS:(NSInteger)arg5 size:(struct CGSize { float x1; float x2; })arg6;
- (BOOL)isImageDataAvailableForTrack:(id)arg1;
- (BOOL)isImageDataIdenticalForTrack:(id)arg1 otherTrack:(id)arg2 artworkFormatID:(NSUInteger)arg3;
- (id)availableArtworkFormatIDsForTrack:(id)arg1 timeInMS:(NSInteger)arg2;

@end

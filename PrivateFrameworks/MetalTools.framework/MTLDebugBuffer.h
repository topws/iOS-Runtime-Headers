/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugBuffer : MTLToolsBuffer {
    unsigned int  _checksum;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    NSMutableArray * _debugMarkers;
    BOOL  _isContentsPointerExposed;
    unsigned int  _length;
    const void * _pointer;
    unsigned int  _purgeableState;
    BOOL  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
}

@property (nonatomic) unsigned int checksum;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly) BOOL isContentsPointerExposed;
@property (nonatomic, readonly) const void*pointer;
@property (nonatomic, readonly) unsigned int purgeableState;
@property (nonatomic, readonly) BOOL purgeableStateHasBeenSet;
@property (nonatomic, readonly) BOOL resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;

- (void).cxx_destruct;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned int)checksum;
- (id)common;
- (void*)contents;
- (id)copyDebugMarkers;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (id)heap;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned int)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned int)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned int)arg4;
- (BOOL)isContentsPointerExposed;
- (unsigned int)length;
- (void)makeAliasable;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 bytesPerImage:(unsigned int)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
- (const void*)pointer;
- (unsigned int)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (void)removeAllDebugMarkers;
- (BOOL)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (void)setChecksum:(unsigned int)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;

@end

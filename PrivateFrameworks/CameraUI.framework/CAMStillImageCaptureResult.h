/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResult : NSObject {
    NSDate * _captureDate;
    NSError * _error;
    BOOL  _expectingPairedVideo;
    NSDictionary * _metadata;
    struct __IOSurface { } * _stillImageFilteredPreviewSurface;
    struct opaqueCMSampleBuffer { } * _stillImageFullsizeSampleBuffer;
    struct __IOSurface { } * _stillImageFullsizeSurface;
    unsigned long  _stillImageFullsizeSurfaceSize;
    struct __IOSurface { } * _stillImageUnfilteredPreviewSurface;
}

@property (getter=isHDRImageWithCorrespondingOriginal, nonatomic, readonly) BOOL HDRImageWithCorrespondingOriginal;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) NSDictionary *compactMetadata;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) BOOL expectingPairedVideo;
@property (nonatomic, readonly, copy) NSString *imageGroupIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (getter=isOriginal, nonatomic, readonly) BOOL original;
@property (getter=isOriginalForHDR, nonatomic, readonly) BOOL originalForHDR;
@property (getter=isProcessedImageWithCorrespondingOriginal, nonatomic, readonly) BOOL processedImageWithCorrespondingOriginal;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFilteredPreviewSurface;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*stillImageFullsizeSampleBuffer;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFullsizeSurface;
@property (nonatomic, readonly) unsigned long stillImageFullsizeSurfaceSize;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageUnfilteredPreviewSurface;

- (void).cxx_destruct;
- (id)captureDate;
- (id)compactMetadata;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)imageGroupIdentifier;
- (id)initWithFullsizeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id)arg2;
- (id)initWithFullsizeSurface:(struct __IOSurface { }*)arg1 size:(unsigned long)arg2 unfilteredPreviewSurface:(struct __IOSurface { }*)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 expectingPairedVideo:(BOOL)arg6 error:(id)arg7;
- (BOOL)isExpectingPairedVideo;
- (BOOL)isHDRImageWithCorrespondingOriginal;
- (BOOL)isOriginal;
- (BOOL)isOriginalForHDR;
- (BOOL)isProcessedImageWithCorrespondingOriginal;
- (id)metadata;
- (struct __IOSurface { }*)stillImageFilteredPreviewSurface;
- (struct opaqueCMSampleBuffer { }*)stillImageFullsizeSampleBuffer;
- (struct __IOSurface { }*)stillImageFullsizeSurface;
- (unsigned long)stillImageFullsizeSurfaceSize;
- (struct __IOSurface { }*)stillImageUnfilteredPreviewSurface;

@end
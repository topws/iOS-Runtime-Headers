/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPGlobalProperties, NSString, NSMutableArray;

@interface VKStylesheet : NSObject {
    NSMutableArray *_flatStyles;
    float _ppi;
    int _rasterPolygonChangeoverZ;
    int _rasterTileMode;
    float _scale;
    NSString *_sheetName;
    VKPGlobalProperties *_styleGlobalProperties;
}

@property(readonly) VKPGlobalProperties * styleGlobalProperties;

+ (void)activeTileGroupWillChange:(id)arg1;
+ (id)installedStylesheets;
+ (id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3;

- (id)_styleMatchingAttributes:(id)arg1 vectorType:(int)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4;
- (id)initWithData:(id)arg1 forName:(id)arg2;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3;
- (id)initWithScale:(float)arg1 ppi:(float)arg2;
- (int)rasterPolygonChangeoverZ;
- (int)rasterTileMode;
- (oneway void)release;
- (id)sheetName;
- (id)styleForFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1 vectorType:(int)arg2;
- (id)styleGlobalProperties;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlayerBridge : NSObject {
    <IKAppPlayer> *_appPlayer;
    IKJSPlayer *_jsPlayer;
    int _state;
}

@property (nonatomic, readonly) <IKAppPlayer> *appPlayer;
@property (nonatomic, readonly) IKAppMediaItemBridge *currentMediaItem;
@property (nonatomic, readonly) IKJSPlayer *jsPlayer;
@property (nonatomic) IKAppPlaylistBridge *playlist;
@property (nonatomic, readonly) int state;

- (void).cxx_destruct;
- (id)appPlayer;
- (id)currentMediaItem;
- (id)initWithJSPlayer:(id)arg1;
- (id)jsPlayer;
- (void)pause;
- (void)play;
- (id)playlist;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1 precise:(BOOL)arg2;
- (void)setPlaylist:(id)arg1;
- (void)setTimedMetadataKeysToObserve:(id)arg1;
- (int)state;
- (void)stateDidChange:(id)arg1;
- (void)stop;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;

@end
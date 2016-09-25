/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MREmulatedGameController : NSObject {
    double  _buttonAUpDelay;
    GCController * _controller;
    unsigned long long  _controllerID;
    int  _profile;
    MRGameControllerDaemonProxy * _remote;
}

@property (nonatomic) double buttonAUpDelay;
@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) int profile;

- (double)buttonAUpDelay;
- (unsigned long long)controllerID;
- (void)dealloc;
- (id)initWithProperties:(void*)arg1;
- (int)profile;
- (void)sendGameControllerEvent:(struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; float x_3_2_6; float x_3_2_7; float x_3_2_8; float x_3_2_9; float x_3_2_10; float x_3_2_11; float x_3_2_12; float x_3_2_13; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; bool x_4_2_3; unsigned long long x_4_2_4; } x_2_1_4; } x2; }*)arg1;
- (void)setButtonAUpDelay:(double)arg1;

@end
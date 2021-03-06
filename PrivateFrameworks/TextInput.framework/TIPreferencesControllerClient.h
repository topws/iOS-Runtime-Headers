/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection * _connection;
    BOOL  _isValid;
    NSString * _machName;
    BOOL  _writeable;
}

@property (nonatomic) BOOL isValid;
@property (nonatomic, retain) NSString *machName;

+ (id)serviceInterface;
+ (id)sharedPreferencesController;

- (void)_disconnect;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (BOOL)isValid;
- (id)machName;
- (void)performWithWriteability:(BOOL)arg1 operations:(id /* block */)arg2;
- (void)setIsValid:(BOOL)arg1;
- (void)setMachName:(id)arg1;
- (void)updateInputModes:(id)arg1;

@end

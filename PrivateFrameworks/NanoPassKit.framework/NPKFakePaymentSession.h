/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver> {
    unsigned int  _changeCardToken;
    PKFieldDetector * _fieldDetector;
    BOOL  _invalidated;
    NSObject<OS_dispatch_queue> * _ourCallbackQueue;
    BOOL  _ourConfirmed;
    PKPass * _ourCurrentPass;
    NSObject<OS_dispatch_queue> * _ourInternalQueue;
    NSDictionary * _ourVasPasses;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic) unsigned int changeCardToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFieldDetector *fieldDetector;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL invalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ourCallbackQueue;
@property (nonatomic) BOOL ourConfirmed;
@property (nonatomic, retain) PKPass *ourCurrentPass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ourInternalQueue;
@property (nonatomic, retain) NSDictionary *ourVasPasses;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (void)_handleTimeoutTimer;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_scheduleDidActivateEventForPass:(id)arg1;
- (void)_setTimeoutTimer;
- (unsigned int)changeCardToken;
- (void)confirmOrRenewSession;
- (id)currentPass;
- (void)deactivateSessionWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (BOOL)deferAuthorization;
- (id)fieldDetector;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (BOOL)invalidated;
- (id)ourCallbackQueue;
- (BOOL)ourConfirmed;
- (id)ourCurrentPass;
- (id)ourInternalQueue;
- (id)ourVasPasses;
- (void)renewSession;
- (void)setChangeCardToken:(unsigned int)arg1;
- (void)setCurrentPass:(id)arg1;
- (void)setDeferAuthorization:(BOOL)arg1;
- (void)setFieldDetector:(id)arg1;
- (void)setInvalidated:(BOOL)arg1;
- (void)setOurCallbackQueue:(id)arg1;
- (void)setOurConfirmed:(BOOL)arg1;
- (void)setOurCurrentPass:(id)arg1;
- (void)setOurInternalQueue:(id)arg1;
- (void)setOurVasPasses:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setVasPasses:(id)arg1;
- (BOOL)startSession;
- (id)timeoutTimer;
- (id)vasPasses;

@end
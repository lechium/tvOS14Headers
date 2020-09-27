/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFSession, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, TRSession, NSMutableArray, TROperationQueue, NSObject, NSString, SFDevice, UIViewController;

@interface SFDeviceRepairSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	int _preflightWiFiEarlyState;
	int _preflightWiFiState;
	SFSession* _sfSession;
	int _sfSessionState;
	int _pairVerifyState;
	int _getProblemsState;
	unsigned long long _problemFlags;
	BOOL _cdpEnabled;
	SFDeviceOperationCDPSetup* _cdpSetupOperation;
	double _cdpSetupSecs;
	int _cdpState;
	SFDeviceOperationHomeKitSetup* _homeKitSetupOperation;
	int _homeKitSetupState;
	SFDeviceOperationWiFiSetup* _wifiSetupOperation;
	int _wifiSetupState;
	double _wifiSetupSecs;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	int _trAuthenticationState;
	unsigned long long _trAuthenticationStartTicks;
	double _trAuthenticationSecs;
	int _finishState;
	unsigned _repairFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _idsIdentifier;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	unsigned long long _triggerMs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsIdentifier;                          //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned repairFlags;                                     //@synthesize repairFlags=_repairFlags - In the implementation block
@property (assign,nonatomic) unsigned long long triggerMs;                             //@synthesize triggerMs=_triggerMs - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(void)_cleanup;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(int)_runFinish;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(NSString *)idsIdentifier;
-(int)_runSFSessionStart;
-(int)_runPairVerify;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(unsigned)repairFlags;
-(void)setRepairFlags:(unsigned)arg1 ;
-(int)_runPreflightWiFiEarly;
-(int)_runGetProblems;
-(int)_runPreflightWiFiFull;
-(int)_runWiFiSetup;
-(int)_runCDPSetup;
-(int)_runHomeKitSetup;
-(unsigned long long)triggerMs;
-(void)setTriggerMs:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TIRequestedInputModes : NSObject {

	BOOL _didLoad;
	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _inputModesByDate;

}
+(id)defaultDatabaseURL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)_loadIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_saveInputModes;
-(id)_inputModes;
-(void)_inputModes:(/*^block*/id)arg1 ;
-(void)_addInputMode:(id)arg1 date:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeInputModesBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeAllInputModes:(/*^block*/id)arg1 ;
-(void)inputModes:(/*^block*/id)arg1 ;
-(void)addInputMode:(id)arg1 date:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeInputModesBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAllInputModes:(/*^block*/id)arg1 ;
@end


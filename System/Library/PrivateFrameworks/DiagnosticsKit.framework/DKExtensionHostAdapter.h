/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionHostAdapter <NSObject>
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate; 
@required
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2;

@end


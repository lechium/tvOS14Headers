/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientDeviceServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding;
@class SVXDeviceSetupContext, NSString;

@interface SVXClientDeviceService : NSObject <SVXClientServiceConsuming, SVXClientDeviceServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	SVXDeviceSetupContext* _currentSetupContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSetupWithContext:(id)arg1 ;
-(void)endSetup;
-(void)prepareForSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange;
-(void)_prepareForSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginSetupWithContext:(id)arg1 ;
-(void)_endSetup;
-(void)_updateSetupContext;
@end

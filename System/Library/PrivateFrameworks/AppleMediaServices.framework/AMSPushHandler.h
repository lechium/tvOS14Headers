/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol, AMSPushHandlerContract;
@class AMSPushConfiguration;

@interface AMSPushHandler : NSObject {

	id<AMSBagProtocol> _bag;
	AMSPushConfiguration* _configuration;
	id<AMSPushHandlerContract> _bagContract;

}

@property (nonatomic,readonly) id<AMSPushHandlerContract> bagContract;                //@synthesize bagContract=_bagContract - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) id<AMSPushHandlerDelegate> delegate; 
@property (nonatomic,readonly) AMSPushConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(id<AMSPushHandlerDelegate>)delegate;
-(void)setDelegate:(id<AMSPushHandlerDelegate>)arg1 ;
-(AMSPushConfiguration *)configuration;
-(id<AMSBagProtocol>)bag;
-(void)handleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 bag:(id)arg2 ;
-(id<AMSPushHandlerContract>)bagContract;
-(id)_enabledParsables;
-(id)initWithConfiguration:(id)arg1 bagContract:(id)arg2 ;
@end

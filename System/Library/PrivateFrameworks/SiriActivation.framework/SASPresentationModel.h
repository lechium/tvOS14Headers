/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASPresentationServer, NSMutableArray, NSTimer;

@interface SASPresentationModel : NSObject {

	SASPresentationServer* _presentationServer;
	long long _requestState;
	NSMutableArray* _enqueuedButtonEventCompletions;
	NSTimer* _pingTimer;

}

@property (nonatomic,readonly) SASPresentationServer * presentationServer;                 //@synthesize presentationServer=_presentationServer - In the implementation block
@property (assign,nonatomic) long long requestState;                                       //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedButtonEventCompletions;              //@synthesize enqueuedButtonEventCompletions=_enqueuedButtonEventCompletions - In the implementation block
@property (nonatomic,retain) NSTimer * pingTimer;                                          //@synthesize pingTimer=_pingTimer - In the implementation block
-(void)setRequestState:(long long)arg1 ;
-(long long)requestState;
-(NSTimer *)pingTimer;
-(id)initWithPresentationServer:(id)arg1 ;
-(SASPresentationServer *)presentationServer;
-(NSMutableArray *)enqueuedButtonEventCompletions;
-(void)flushEnqueuedButtonEventCompletions;
-(void)setPingTimer:(NSTimer *)arg1 ;
-(void)setEnqueuedButtonEventCompletions:(NSMutableArray *)arg1 ;
@end

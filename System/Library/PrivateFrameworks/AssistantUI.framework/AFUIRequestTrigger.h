/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {

	SASRequestOptions* _options;
	long long _state;
	NSMapTable* _observers;

}

@property (nonatomic,readonly) SASRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long state;                          //@synthesize state=_state - In the implementation block
-(long long)state;
-(SASRequestOptions *)options;
-(void)_updateState:(long long)arg1 ;
-(id)initWithRequestOptions:(id)arg1 updateHandle:(/*^block*/id*)arg2 ;
-(void)addTriggerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTriggerTarget:(id)arg1 ;
@end

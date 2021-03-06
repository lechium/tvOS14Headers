/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CATState;

@interface CATTransition : NSObject {

	CATState* _state;
	SEL _action;

}

@property (nonatomic,__weak,readonly) CATState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(CATState *)state;
-(SEL)action;
-(id)initWithState:(id)arg1 action:(SEL)arg2 ;
@end


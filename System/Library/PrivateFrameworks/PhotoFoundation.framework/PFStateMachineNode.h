/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface PFStateMachineNode : NSObject {

	NSString* _name;
	NSMutableDictionary* _transitions;
	/*^block*/id _action;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)nodeWithName:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(id)performAction:(id)arg1 ;
-(void)setAction:(/*^block*/id)arg1 ;
-(id)addTransition:(id)arg1 ;
-(id)transitionForEventName:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)_dotReachableNodes:(id)arg1 graph:(id)arg2 ;
-(id)addTransitionOn:(id)arg1 to:(id)arg2 ;
-(id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(id)addReturnTransitionOn:(id)arg1 ;
@end

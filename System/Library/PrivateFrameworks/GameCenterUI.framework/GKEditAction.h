/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString;

@interface GKEditAction : NSObject {

	BOOL _destructive;
	NSString* _name;
	SEL _selector;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
+(id)actionWithName:(id)arg1 selector:(SEL)arg2 ;
+(id)deleteActionWithName:(id)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)destructive;
-(void)setDestructive:(BOOL)arg1 ;
@end


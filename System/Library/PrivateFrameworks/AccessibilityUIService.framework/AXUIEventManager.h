/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:32 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSHashTable;

@interface AXUIEventManager : NSObject {

	NSHashTable* _eventHandlers;

}

@property (nonatomic,retain) NSHashTable * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
+(id)sharedEventManager;
-(id)_init;
-(NSHashTable *)eventHandlers;
-(void)setEventHandlers:(NSHashTable *)arg1 ;
-(BOOL)_handleUIEvent:(id)arg1 ;
-(void)registerEventHandler:(id)arg1 ;
-(void)unregisterEventHandler:(id)arg1 ;
@end


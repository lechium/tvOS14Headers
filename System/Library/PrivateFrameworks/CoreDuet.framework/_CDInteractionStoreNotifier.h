/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _CDInteractionStore;

@interface _CDInteractionStoreNotifier : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;
	_CDInteractionStore* _interactionStore;

}

@property (nonatomic,__weak,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)deleted;
-(_CDInteractionStore *)interactionStore;
-(id)initWithInteractionStore:(id)arg1 ;
-(void)recorded:(id)arg1 ;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, MSVMutableBidirectionalDictionary, NSObject, MRPlayerPath;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding> {

	NSMutableArray* _requestFilters;
	NSMutableSet* _requests;
	MSVMutableBidirectionalDictionary* _offsets;
	NSObject*<OS_dispatch_queue> _queue;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addRequest:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)augmentCommandOptions:(id)arg1 forCommand:(unsigned)arg2 ;
-(id)contentItemIdentifierForOffset:(long long)arg1 ;
-(id)requestForSubscribedContentItemIdentifier:(id)arg1 ;
-(id)offsetForIdentifier:(id)arg1 ;
-(void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)hasRequest:(id)arg1 ;
-(void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1 ;
-(void)restoreStateFromController:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
@end
